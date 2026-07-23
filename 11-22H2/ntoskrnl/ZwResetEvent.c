/*
 * XREFs of ZwResetEvent @ 0x14041D740
 * Callers:
 *     DifZwResetEventWrapper @ 0x1405F6430 (DifZwResetEventWrapper.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14068714C (PfSnVolumeCheckSeekPenalty.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140812B88 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140867450 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A5DF4 (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
