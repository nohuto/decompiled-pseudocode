/*
 * XREFs of ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800D11EC
 * Callers:
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800D05E0 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800D15E8 (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800D3570 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
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
