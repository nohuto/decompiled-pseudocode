/*
 * XREFs of imp_VfWdfDeviceInitSetIoType @ 0x1C00B3D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetIoType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 IoType)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetIoType(DriverGlobals, DeviceInit, (_WDF_DEVICE_IO_TYPE)IoType);
}
