/*
 * XREFs of IopUpdateFunctionPointers @ 0x14055648C
 * Callers:
 *     IopIrpExtensionControl @ 0x1405559D0 (IopIrpExtensionControl.c)
 *     IoPerfInit @ 0x140558F78 (IoPerfInit.c)
 *     IoPerfReset @ 0x140559074 (IoPerfReset.c)
 *     ViIovPluginUnload @ 0x1405D1F70 (ViIovPluginUnload.c)
 *     IoVerifierInit @ 0x140AC1CAC (IoVerifierInit.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopUpdateFunctionPointers(int a1, char a2, char a3)
{
  int v6; // ebx
  volatile __int32 *v7; // rcx
  __int32 v8; // eax
  __int32 v9; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-28h] BYREF

  memset(&v15, 0, sizeof(v15));
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &v15);
  if ( a2 )
    v6 = IopFunctionPointerMask | a1;
  else
    v6 = IopFunctionPointerMask & ~a1;
  IopFunctionPointerMask = v6;
  if ( (v6 & 1) != 0 )
  {
    _InterlockedExchange(&IopDispatchAllocateIrp, 1);
    _InterlockedExchange(&IopDispatchCallDriver, 1);
    v7 = &IopDispatchFreeIrp;
    _InterlockedExchange(&IopDispatchCompleteRequest, 1);
    v8 = 1;
  }
  else
  {
    _InterlockedExchange(&IopDispatchFreeIrp, 0);
    v7 = &IopDispatchAllocateIrp;
    v9 = (IopFunctionPointerMask & 2) != 0 ? 3 : 0;
    _InterlockedExchange(&IopDispatchCallDriver, v9);
    _InterlockedExchange(&IopDispatchCompleteRequest, v9);
    if ( (IopFunctionPointerMask & 4) != 0 )
      v8 = 2;
    else
      v8 = 0;
  }
  result = (unsigned int)_InterlockedExchange(v7, v8);
  if ( !a3 )
  {
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v15);
    OldIrql = v15.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && v15.OldIrql <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (v15.OldIrql + 1));
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}
