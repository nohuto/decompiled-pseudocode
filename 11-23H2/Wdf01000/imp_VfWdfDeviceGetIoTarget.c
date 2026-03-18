/*
 * XREFs of imp_VfWdfDeviceGetIoTarget @ 0x1C00B3AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFIOTARGET__ *__fastcall imp_VfWdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetIoTarget(DriverGlobals, Device);
}
