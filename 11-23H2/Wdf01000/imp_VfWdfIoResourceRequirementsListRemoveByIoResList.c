/*
 * XREFs of imp_VfWdfIoResourceRequirementsListRemoveByIoResList @ 0x1C00B5810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoResourceRequirementsListRemoveByIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListRemoveByIoResList(DriverGlobals, RequirementsList, IoResList);
}
