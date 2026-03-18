/*
 * XREFs of PnpCancelDeviceActionRequest @ 0x140562604
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x1406CBD20 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14096DEE8 (PiQueueDeviceRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PnpCancelDeviceActionRequest(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  *(_BYTE *)(a1 + 88) = 1;
  ExReleasePushLockEx((__int64 *)(a1 + 80), 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
