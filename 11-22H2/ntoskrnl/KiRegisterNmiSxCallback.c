/*
 * XREFs of KiRegisterNmiSxCallback @ 0x14056CEDC
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x140548094 (HvlpInitializeHvCrashdump.c)
 *     KeRegisterNmiCallback @ 0x14056CB00 (KeRegisterNmiCallback.c)
 *     DifKeRegisterNmiCallbackWrapper @ 0x1405E4620 (DifKeRegisterNmiCallbackWrapper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall KiRegisterNmiSxCallback(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  result = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1229803083LL);
  v5 = result;
  if ( result )
  {
    result[1] = a1;
    result[2] = a2;
    result[3] = result;
    v6 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
    *v5 = KiNmiCallbackListHead;
    KiNmiCallbackListHead = v5;
    v7 = v6;
    KxReleaseSpinLock((volatile signed __int64 *)&KiNmiCallbackListLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v7 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v7);
    return (_QWORD *)v5[3];
  }
  return result;
}
