/*
 * XREFs of PnpCancelDeviceActionRequest @ 0x140562CC4
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x1406CBD50 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14096E0E8 (PiQueueDeviceRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
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
