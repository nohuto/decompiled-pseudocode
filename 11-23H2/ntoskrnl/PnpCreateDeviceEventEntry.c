/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x14079455C
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140321EDC (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B709C (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1403D6258 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpInsertNoopEvent @ 0x140685ED4 (PnpInsertNoopEvent.c)
 *     PnpSetDeviceClassChange @ 0x140794214 (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x1407942E4 (PnpSetPlugPlayEvent.c)
 *     PnpSetCustomTargetEvent @ 0x14079441C (PnpSetCustomTargetEvent.c)
 *     PnpShutdownDevices @ 0x1409523FC (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x140964830 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1409648A0 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1409649AC (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140964A48 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140964B00 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCreateDeviceEventEntry(unsigned int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(256LL, a1, 1265659472LL);
  if ( result )
    *(_DWORD *)(result + 64) = 1;
  return result;
}
