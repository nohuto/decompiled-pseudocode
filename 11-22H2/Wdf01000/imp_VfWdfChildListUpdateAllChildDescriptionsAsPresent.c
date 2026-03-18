/*
 * XREFs of imp_VfWdfChildListUpdateAllChildDescriptionsAsPresent @ 0x1C00B31A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfChildListUpdateAllChildDescriptionsAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList)
{
  WdfVersion.Functions.pfnWdfChildListUpdateAllChildDescriptionsAsPresent(DriverGlobals, ChildList);
}
