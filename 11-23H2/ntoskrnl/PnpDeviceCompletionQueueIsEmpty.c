/*
 * XREFs of PnpDeviceCompletionQueueIsEmpty @ 0x14022B06C
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1406CBC28 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 PnpDeviceCompletionQueueIsEmpty()
{
  BOOL v0; // ebx
  unsigned __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v6; // edx
  bool v7; // zf

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140C5CA48);
  if ( *(ULONG **)&PnpDeviceCompletionQueue == &PnpDeviceCompletionQueue )
    v0 = qword_140C5CA18 == (_QWORD)&qword_140C5CA18;
  KxReleaseSpinLock(&qword_140C5CA48);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v1);
  return v0;
}
