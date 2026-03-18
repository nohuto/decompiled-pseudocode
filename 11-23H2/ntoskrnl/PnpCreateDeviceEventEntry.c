/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x14079436C
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140321C4C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B6EBC (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1403D6078 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpInsertNoopEvent @ 0x140685ED4 (PnpInsertNoopEvent.c)
 *     PnpSetDeviceClassChange @ 0x140794024 (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x1407940F4 (PnpSetPlugPlayEvent.c)
 *     PnpSetCustomTargetEvent @ 0x14079422C (PnpSetCustomTargetEvent.c)
 *     PnpShutdownDevices @ 0x1409521FC (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x140964630 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1409646A0 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1409647AC (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140964848 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140964900 (PnpSetPowerVetoEvent.c)
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
