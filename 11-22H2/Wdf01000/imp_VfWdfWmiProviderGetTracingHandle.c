/*
 * XREFs of imp_VfWdfWmiProviderGetTracingHandle @ 0x1C00B7BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall imp_VfWdfWmiProviderGetTracingHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIPROVIDER__ *WmiProvider)
{
  return WdfVersion.Functions.pfnWdfWmiProviderGetTracingHandle(DriverGlobals, WmiProvider);
}
