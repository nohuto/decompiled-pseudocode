/*
 * XREFs of ?Clear@?$NtList@UDeviceListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800F7F2C
 * Callers:
 *     ??1PnpDeviceWatcher@@QEAA@XZ @ 0x1800F7DAC (--1PnpDeviceWatcher@@QEAA@XZ.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x1800F8AD0 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 * Callees:
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800F7DDC (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 */

PnpDeviceWatcher::RetryDeviceListEntry *__fastcall NtList<PnpDeviceWatcher::DeviceListEntry>::Clear(
        PnpDeviceWatcher::RetryDeviceListEntry **a1)
{
  PnpDeviceWatcher::RetryDeviceListEntry *v2; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry *result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *((PnpDeviceWatcher::RetryDeviceListEntry ***)*a1 + 1) != a1
      || (result = *(PnpDeviceWatcher::RetryDeviceListEntry **)v2,
          *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *a1 = result;
    *((_QWORD *)result + 1) = a1;
    if ( v2 == (PnpDeviceWatcher::RetryDeviceListEntry *)a1 )
      break;
    PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v2);
    a1[2] = (PnpDeviceWatcher::RetryDeviceListEntry *)((char *)a1[2] - 1);
  }
  return result;
}
