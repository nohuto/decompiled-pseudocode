/*
 * XREFs of imp_VfWdfDeviceSetDeviceState @ 0x1C00C11B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetDeviceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_STATE *DeviceState)
{
  WdfVersion.Functions.pfnWdfDeviceSetDeviceState(DriverGlobals, Device, DeviceState);
}
