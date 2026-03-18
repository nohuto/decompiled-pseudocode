/*
 * XREFs of imp_VfWdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00B5BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoTargetSendInternalIoctlOthersSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        __int64 IoctlCode,
        _WDF_MEMORY_DESCRIPTOR *OtherArg1,
        _WDF_MEMORY_DESCRIPTOR *OtherArg2,
        _WDF_MEMORY_DESCRIPTOR *OtherArg4,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFREQUEST__ *, __int64, _WDF_MEMORY_DESCRIPTOR *, _WDF_MEMORY_DESCRIPTOR *, _WDF_MEMORY_DESCRIPTOR *, _WDF_REQUEST_SEND_OPTIONS *, unsigned __int64 *))WdfVersion.Functions.pfnWdfIoTargetSendInternalIoctlOthersSynchronously)(
           DriverGlobals,
           IoTarget,
           Request,
           IoctlCode,
           OtherArg1,
           OtherArg2,
           OtherArg4,
           RequestOptions,
           BytesReturned);
}
