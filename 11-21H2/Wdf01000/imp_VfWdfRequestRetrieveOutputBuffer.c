/*
 * XREFs of imp_VfWdfRequestRetrieveOutputBuffer @ 0x1C00C3EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRequestRetrieveOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 MinimumRequiredSize,
        void **Buffer,
        unsigned __int64 *Length)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, unsigned __int64, void **, unsigned __int64 *))WdfVersion.Functions.pfnWdfRequestRetrieveOutputBuffer)(
           DriverGlobals,
           Request,
           MinimumRequiredSize,
           Buffer,
           Length);
}
