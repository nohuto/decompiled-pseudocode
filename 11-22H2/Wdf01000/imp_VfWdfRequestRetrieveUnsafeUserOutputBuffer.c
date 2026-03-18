/*
 * XREFs of imp_VfWdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1C00B6F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRequestRetrieveUnsafeUserOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 MinimumRequiredLength,
        void **OutputBuffer,
        unsigned __int64 *Length)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, unsigned __int64, void **, unsigned __int64 *))WdfVersion.Functions.pfnWdfRequestRetrieveUnsafeUserOutputBuffer)(
           DriverGlobals,
           Request,
           MinimumRequiredLength,
           OutputBuffer,
           Length);
}
