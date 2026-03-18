/*
 * XREFs of imp_VfWdfCxDeviceInitAllocate @ 0x1C00B3540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFCXDEVICE_INIT *__fastcall imp_VfWdfCxDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  return WdfVersion.Functions.pfnWdfCxDeviceInitAllocate(DriverGlobals, DeviceInit);
}
