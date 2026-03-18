/*
 * XREFs of imp_VfWdfDeviceInitAllowSelfIoTarget @ 0x1C00B3B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitAllowSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitAllowSelfIoTarget(DriverGlobals, DeviceInit);
}
