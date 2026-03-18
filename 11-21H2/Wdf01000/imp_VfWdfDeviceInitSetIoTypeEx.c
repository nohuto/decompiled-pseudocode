/*
 * XREFs of imp_VfWdfDeviceInitSetIoTypeEx @ 0x1C00C0D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetIoTypeEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_IO_TYPE_CONFIG *IoTypeConfig)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetIoTypeEx(DriverGlobals, DeviceInit, IoTypeConfig);
}
