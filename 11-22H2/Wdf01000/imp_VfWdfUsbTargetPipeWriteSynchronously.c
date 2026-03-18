/*
 * XREFs of imp_VfWdfUsbTargetPipeWriteSynchronously @ 0x1C00B7970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeWriteSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesWritten)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *, _WDF_REQUEST_SEND_OPTIONS *, _WDF_MEMORY_DESCRIPTOR *, unsigned int *))WdfVersion.Functions.pfnWdfUsbTargetPipeWriteSynchronously)(
           DriverGlobals,
           Pipe,
           Request,
           RequestOptions,
           MemoryDescriptor,
           BytesWritten);
}
