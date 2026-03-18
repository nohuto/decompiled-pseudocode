/*
 * XREFs of imp_VfWdfIoTargetSendWriteSynchronously @ 0x1C00B5D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoTargetSendWriteSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesWritten)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFREQUEST__ *, _WDF_MEMORY_DESCRIPTOR *, __int64 *, _WDF_REQUEST_SEND_OPTIONS *, unsigned __int64 *))WdfVersion.Functions.pfnWdfIoTargetSendWriteSynchronously)(
           DriverGlobals,
           IoTarget,
           Request,
           InputBuffer,
           DeviceOffset,
           RequestOptions,
           BytesWritten);
}
