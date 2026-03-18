/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140571610
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x1404605E0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140573270 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140573300 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1405733E0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x1405734B0 (KeRemoveDeviceQueue.c)
 *     DifKeAcquireInStackQueuedSpinLockForDpcWrapper @ 0x1405E2450 (DifKeAcquireInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CBD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  else
    KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, LockHandle);
}
