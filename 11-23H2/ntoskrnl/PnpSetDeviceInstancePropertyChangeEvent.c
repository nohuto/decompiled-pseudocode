/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x1403B7080
 * Callers:
 *     PnpSetDevicePropertyData @ 0x1408668E8 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B709C (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
