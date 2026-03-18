/*
 * XREFs of imp_VfWdfChildListEndIteration @ 0x1C00C00B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfChildListEndIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  WdfVersion.Functions.pfnWdfChildListEndIteration(DriverGlobals, ChildList, Iterator);
}
