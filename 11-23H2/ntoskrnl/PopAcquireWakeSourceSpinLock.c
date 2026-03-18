/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14058E3CC
 * Callers:
 *     PopHandleWakeSources @ 0x140AA0E5C (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140AA10A8 (PopNewWakeInfo.c)
 *     PopProcessDeviceWakeSource @ 0x140AA1184 (PopProcessDeviceWakeSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
