/*
 * XREFs of imp_VfWdfCollectionRemoveItem @ 0x1C00B3380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfCollectionRemoveItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfCollectionRemoveItem(DriverGlobals, Collection, Index);
}
