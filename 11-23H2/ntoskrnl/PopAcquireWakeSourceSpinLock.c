/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14058E8BC
 * Callers:
 *     PopHandleWakeSources @ 0x140AA0CCC (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140AA0F18 (PopNewWakeInfo.c)
 *     PopProcessDeviceWakeSource @ 0x140AA0FF4 (PopProcessDeviceWakeSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
