/*
 * XREFs of imp_VfWdfRequestRetrieveOutputMemory @ 0x1C00B6EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRequestRetrieveOutputMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFMEMORY__ **Memory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfRequestRetrieveOutputMemory)(
           DriverGlobals,
           Request,
           Memory);
}
