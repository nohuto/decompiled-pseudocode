/*
 * XREFs of imp_VfWdfCmResourceListRemove @ 0x1C00B3260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfCmResourceListRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCMRESLIST__ *List, __int64 Index)
{
  WdfVersion.Functions.pfnWdfCmResourceListRemove(DriverGlobals, List, Index);
}
