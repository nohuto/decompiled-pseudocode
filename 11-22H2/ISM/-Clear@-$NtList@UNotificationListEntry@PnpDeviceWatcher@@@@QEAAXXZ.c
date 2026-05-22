/*
 * XREFs of ?Clear@?$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800F8004
 * Callers:
 *     ??1PnpDeviceWatcher@@QEAA@XZ @ 0x1800F7DAC (--1PnpDeviceWatcher@@QEAA@XZ.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800F8AD0 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 * Callees:
 *     ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800F7EF0 (--_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 */

HSTRING __fastcall NtList<PnpDeviceWatcher::NotificationListEntry>::Clear(HSTRING **a1)
{
  HSTRING *v2; // rcx
  HSTRING result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( (*a1)[1] != (HSTRING)a1 || (result = *v2, *((HSTRING **)*v2 + 1) != v2) )
      __fastfail(3u);
    *a1 = (HSTRING *)result;
    *((_QWORD *)result + 1) = a1;
    if ( v2 == (HSTRING *)a1 )
      break;
    PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(v2);
    a1[2] = (HSTRING *)((char *)a1[2] - 1);
  }
  return result;
}
