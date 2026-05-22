/*
 * XREFs of ??1PnpDeviceWatcher@@QEAA@XZ @ 0x1800CF774
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800CF688 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 * Callees:
 *     ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800CF8F4 (-Clear@-$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 */

void __fastcall PnpDeviceWatcher::~PnpDeviceWatcher(PnpDeviceWatcher *this)
{
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((char *)this + 80);
  NtList<PnpDeviceWatcher::DeviceListEntry>::Clear((char *)this + 56);
  NtList<PnpDeviceWatcher::NotificationListEntry>::Clear((char *)this + 32);
}
