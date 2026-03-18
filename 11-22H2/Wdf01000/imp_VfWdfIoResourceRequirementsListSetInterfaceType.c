/*
 * XREFs of imp_VfWdfIoResourceRequirementsListSetInterfaceType @ 0x1C00B5830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoResourceRequirementsListSetInterfaceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 InterfaceType)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListSetInterfaceType(
    DriverGlobals,
    RequirementsList,
    (_INTERFACE_TYPE)InterfaceType);
}
