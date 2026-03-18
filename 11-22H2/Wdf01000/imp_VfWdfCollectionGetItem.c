/*
 * XREFs of imp_VfWdfCollectionGetItem @ 0x1C00B3320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfCollectionGetItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfCollectionGetItem(DriverGlobals, Collection, Index);
}
