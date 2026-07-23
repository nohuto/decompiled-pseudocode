/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140257B30
 * Callers:
 *     KeInsertDeviceQueue @ 0x140257A00 (KeInsertDeviceQueue.c)
 *     KeRemoveDeviceQueue @ 0x140257A90 (KeRemoveDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x14045A4A0 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140570810 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1405708F0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     sub_140612040 @ 0x140612040 (sub_140612040.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (*((_DWORD *)KeGetCurrentPrcb() + 3311) & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  }
  else
  {
    LockHandle->LockQueue.Next = 0LL;
    LockHandle->LockQueue.Lock = SpinLock;
    sub_1403119F0(LockHandle);
  }
}
