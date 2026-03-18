/*
 * XREFs of imp_VfWdfUsbTargetDeviceGetDeviceDescriptor @ 0x1C00B74C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfUsbTargetDeviceGetDeviceDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _USB_DEVICE_DESCRIPTOR *UsbDeviceDescriptor)
{
  WdfVersion.Functions.pfnWdfUsbTargetDeviceGetDeviceDescriptor(DriverGlobals, UsbDevice, UsbDeviceDescriptor);
}
