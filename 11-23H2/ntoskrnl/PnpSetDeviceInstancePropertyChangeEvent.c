/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x1403B6EA0
 * Callers:
 *     PnpSetDevicePropertyData @ 0x1408666A8 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B6EBC (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
