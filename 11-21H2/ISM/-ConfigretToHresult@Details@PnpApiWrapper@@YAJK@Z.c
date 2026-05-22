/*
 * XREFs of ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18003C894
 * Callers:
 *     ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x18003C310 (-RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId.c)
 *     ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x18003C640 (-EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventI.c)
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x18003DE20 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18003DF70 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x18003E3A0 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z @ 0x1800D3374 (-UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpApiWrapper::Details::ConfigretToHresult(PnpApiWrapper::Details *this)
{
  switch ( (_DWORD)this )
  {
    case 0:
      return 0LL;
    case 0xD:
      return 2147943568LL;
    case 2:
      return 2147942414LL;
    case 0x13:
      return 2147500037LL;
    case 0x25:
      return 2147943568LL;
  }
  if ( (_DWORD)this != 51 )
  {
    if ( (_DWORD)this != 55 )
      return 2147549183LL;
    return 2147943568LL;
  }
  return 2147942405LL;
}
