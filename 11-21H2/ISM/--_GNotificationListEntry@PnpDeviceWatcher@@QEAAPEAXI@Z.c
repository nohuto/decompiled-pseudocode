/*
 * XREFs of ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800CF8B8
 * Callers:
 *     ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x18003C570 (-OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z.c)
 *     ?Clear@?$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800CF93C (-Clear@-$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

HSTRING *__fastcall PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(HSTRING *this)
{
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
  operator delete(this);
  return this;
}
