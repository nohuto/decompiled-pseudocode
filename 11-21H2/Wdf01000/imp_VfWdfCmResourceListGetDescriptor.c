/*
 * XREFs of imp_VfWdfCmResourceListGetDescriptor @ 0x1C00C0220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_VfWdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfCmResourceListGetDescriptor(DriverGlobals, List, Index);
}
