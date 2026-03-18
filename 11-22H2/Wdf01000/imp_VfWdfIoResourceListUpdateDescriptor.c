/*
 * XREFs of imp_VfWdfIoResourceListUpdateDescriptor @ 0x1C00B5750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoResourceListUpdateDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfIoResourceListUpdateDescriptor(DriverGlobals, ResourceList, Descriptor, Index);
}
