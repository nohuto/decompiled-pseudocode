/*
 * XREFs of imp_VfWdfDeviceWdmGetAttachedDevice @ 0x1C00B4360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetAttachedDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetAttachedDevice(DriverGlobals, Device);
}
