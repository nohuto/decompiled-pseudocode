/*
 * XREFs of imp_VfWdfIoResourceListRemove @ 0x1C00B5710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoResourceListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfIoResourceListRemove(DriverGlobals, ResourceList, Index);
}
