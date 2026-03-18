/*
 * XREFs of imp_VfWdfIoTargetSendReadSynchronously @ 0x1C00B5CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoTargetSendReadSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesRead)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFREQUEST__ *, _WDF_MEMORY_DESCRIPTOR *, __int64 *, _WDF_REQUEST_SEND_OPTIONS *, unsigned __int64 *))WdfVersion.Functions.pfnWdfIoTargetSendReadSynchronously)(
           DriverGlobals,
           IoTarget,
           Request,
           OutputBuffer,
           DeviceOffset,
           RequestOptions,
           BytesRead);
}
