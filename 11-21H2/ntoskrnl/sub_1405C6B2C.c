/*
 * XREFs of sub_1405C6B2C @ 0x1405C6B2C
 * Callers:
 *     sub_1403698C4 @ 0x1403698C4 (sub_1403698C4.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall sub_1405C6B2C(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&qword_140C24278, LockHandle);
}
