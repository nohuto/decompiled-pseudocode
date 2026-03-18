/*
 * XREFs of imp_VfWdfDeviceInitSetDeviceClass @ 0x1C00B3CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceInitSetDeviceClass(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _GUID *DeviceClassGuid)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetDeviceClass(DriverGlobals, DeviceInit, DeviceClassGuid);
}
