/*
 * XREFs of imp_VfWdfUsbTargetPipeSendUrbSynchronously @ 0x1C00B7900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeSendUrbSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _URB *Urb)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *, _WDF_REQUEST_SEND_OPTIONS *, _URB *))WdfVersion.Functions.pfnWdfUsbTargetPipeSendUrbSynchronously)(
           DriverGlobals,
           Pipe,
           Request,
           RequestOptions,
           Urb);
}
