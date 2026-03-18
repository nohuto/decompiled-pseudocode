/*
 * XREFs of imp_VfWdfDmaEnablerSetMaximumScatterGatherElements @ 0x1C00B4470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDmaEnablerSetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 MaximumFragments)
{
  WdfVersion.Functions.pfnWdfDmaEnablerSetMaximumScatterGatherElements(DriverGlobals, DmaEnabler, MaximumFragments);
}
