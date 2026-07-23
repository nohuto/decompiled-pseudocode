/*
 * XREFs of sub_140396620 @ 0x140396620
 * Callers:
 *     sub_140A51700 @ 0x140A51700 (sub_140A51700.c)
 *     sub_140A5179C @ 0x140A5179C (sub_140A5179C.c)
 *     sub_140A517EC @ 0x140A517EC (sub_140A517EC.c)
 *     sub_140A51888 @ 0x140A51888 (sub_140A51888.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall sub_140396620(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&qword_140C23760, LockHandle);
}
