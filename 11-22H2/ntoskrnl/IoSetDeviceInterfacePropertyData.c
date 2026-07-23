/*
 * XREFs of IoSetDeviceInterfacePropertyData @ 0x14086DD30
 * Callers:
 *     <none>
 * Callees:
 *     PnpSetDeviceInterfacePropertyData @ 0x14086DD78 (PnpSetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall IoSetDeviceInterfacePropertyData(__int64 a1, __int64 a2, __int64 a3)
{
  return PnpSetDeviceInterfacePropertyData(a1, a2, a3);
}
