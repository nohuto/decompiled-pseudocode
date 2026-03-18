/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x140323070
 * Callers:
 *     PipProcessStartPhase3 @ 0x14079B9C4 (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140321C4C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance((unsigned __int16 *)(a1 + 40));
}
