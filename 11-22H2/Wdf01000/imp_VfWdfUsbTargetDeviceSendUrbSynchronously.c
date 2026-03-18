/*
 * XREFs of imp_VfWdfUsbTargetDeviceSendUrbSynchronously @ 0x1C00B76C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetDeviceSendUrbSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _URB *Urb)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBDEVICE__ *, WDFREQUEST__ *, _WDF_REQUEST_SEND_OPTIONS *, _URB *))WdfVersion.Functions.pfnWdfUsbTargetDeviceSendUrbSynchronously)(
           DriverGlobals,
           UsbDevice,
           Request,
           RequestOptions,
           Urb);
}
