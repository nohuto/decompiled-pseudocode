/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x140257B80
 * Callers:
 *     KeInsertDeviceQueue @ 0x140257A00 (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x140257A90 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x14045A4A0 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140570810 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1405708F0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     DifKeReleaseInStackQueuedSpinLockForDpcWrapper @ 0x140614550 (DifKeReleaseInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    OldIrql = LockHandle->OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
          v7 = (v6 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v6;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
  }
}
