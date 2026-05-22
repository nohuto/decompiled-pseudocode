/*
 * XREFs of ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800F9A64
 * Callers:
 *     ?OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z @ 0x180063E10 (-OnPnpNotification@PnpDevice@@QEAAXW4DeviceEventId@PnpApiWrapper@@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800F8E40 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800F9EF4 (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800FC294 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpDevice::CloseInterface(PnpDevice *this)
{
  void *v1; // rbx

  v1 = (void *)_InterlockedExchange64((volatile __int64 *)this + 5, -1LL);
  if ( v1 != (void *)-1LL )
  {
    CancelIoEx(v1, 0LL);
    CloseHandle(v1);
  }
}
