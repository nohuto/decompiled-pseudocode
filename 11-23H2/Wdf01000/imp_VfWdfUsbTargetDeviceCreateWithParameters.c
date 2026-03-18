/*
 * XREFs of imp_VfWdfUsbTargetDeviceCreateWithParameters @ 0x1C00B73A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceCreateWithParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_USB_DEVICE_CREATE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_USB_DEVICE_CREATE_CONFIG *, _WDF_OBJECT_ATTRIBUTES *, WDFUSBDEVICE__ **))WdfVersion.Functions.pfnWdfUsbTargetDeviceCreateWithParameters)(
           DriverGlobals,
           Device,
           Config,
           Attributes,
           UsbDevice);
}
