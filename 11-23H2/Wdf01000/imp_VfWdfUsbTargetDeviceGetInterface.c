/*
 * XREFs of imp_VfWdfUsbTargetDeviceGetInterface @ 0x1C00B74E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFUSBINTERFACE__ *__fastcall imp_VfWdfUsbTargetDeviceGetInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        __int64 InterfaceIndex)
{
  return WdfVersion.Functions.pfnWdfUsbTargetDeviceGetInterface(DriverGlobals, UsbDevice, InterfaceIndex);
}
