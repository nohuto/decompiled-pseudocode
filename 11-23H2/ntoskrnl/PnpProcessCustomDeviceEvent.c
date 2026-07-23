/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x1407DB110
 * Callers:
 *     PnpDeviceEventWorker @ 0x140786A50 (PnpDeviceEventWorker.c)
 * Callees:
 *     PnpNotifyTargetDeviceChange @ 0x14078354C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyUserMode @ 0x140783BDC (PiUEventNotifyUserMode.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1407DB16C (PiDcHandleCustomDeviceEvent.c)
 */

__int64 __fastcall PnpProcessCustomDeviceEvent(__int64 *a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  __int64 v3; // rdi

  v1 = *a1;
  v2 = *(void **)(*a1 + 152);
  v3 = *(_QWORD *)(*a1 + 160);
  PiDcHandleCustomDeviceEvent(*a1);
  PiUEventNotifyUserMode(v1);
  PnpNotifyTargetDeviceChange((GUID *)(v3 + 4), v2, v3, 0LL);
  return 0LL;
}
