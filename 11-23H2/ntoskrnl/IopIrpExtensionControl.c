/*
 * XREFs of IopIrpExtensionControl @ 0x140555FF0
 * Callers:
 *     IopEtwEnableCallback @ 0x140944B50 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x140949170 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x140949290 (IoUnregisterIoTracking.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     IopUpdateFunctionPointers @ 0x140556AAC (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IopIrpExtensionControl(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // cl
  __int64 result; // rax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-28h] BYREF

  memset(&v12, 0, sizeof(v12));
  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &v12);
  if ( a2 == 1 )
  {
    v6 = IopIrpExtensionStatus == 0;
    IopIrpExtensionStatus |= a1;
    if ( (a1 & 1) != 0 )
      ++dword_140D17A4C;
    if ( (a1 & 2) != 0 )
      ++dword_140D17A50;
    if ( v6 )
    {
      LOBYTE(v4) = 1;
LABEL_16:
      LOBYTE(v5) = 1;
      IopUpdateFunctionPointers(4LL, v4, v5);
    }
  }
  else
  {
    if ( (a1 & 1) != 0 && !--dword_140D17A4C )
      IopIrpExtensionStatus &= ~1u;
    if ( (a1 & 2) != 0 && !--dword_140D17A50 )
      IopIrpExtensionStatus &= ~2u;
    if ( !IopIrpExtensionStatus )
    {
      v4 = 0LL;
      goto LABEL_16;
    }
  }
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v12);
  OldIrql = v12.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v12.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v12.OldIrql + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
