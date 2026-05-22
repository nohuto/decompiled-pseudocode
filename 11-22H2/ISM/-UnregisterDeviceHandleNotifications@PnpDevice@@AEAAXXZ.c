/*
 * XREFs of ?UnregisterDeviceHandleNotifications@PnpDevice@@AEAAXXZ @ 0x180063E68
 * Callers:
 *     ??_GPnpDevice@@UEAAPEAXI@Z @ 0x18000EE30 (--_GPnpDevice@@UEAAPEAXI@Z.c)
 *     ?OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z @ 0x180063E10 (-OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z.c)
 * Callees:
 *     ?UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z @ 0x1800FC0A8 (-UnregisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAPEAX@Z.c)
 */

void __fastcall PnpDevice::UnregisterDeviceHandleNotifications(PnpDevice *this, void **a2)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    PnpApiWrapper::Details::UnregisterDeviceEventHandler((PnpDevice *)((char *)this + 48), a2);
    *v2 = 0LL;
  }
}
