/*
 * XREFs of imp_VfWdfIoResourceListGetDescriptor @ 0x1C00B56D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_IO_RESOURCE_DESCRIPTOR *__fastcall imp_VfWdfIoResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfIoResourceListGetDescriptor(DriverGlobals, ResourceList, Index);
}
