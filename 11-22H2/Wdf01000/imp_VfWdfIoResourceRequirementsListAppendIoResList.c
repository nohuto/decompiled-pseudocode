/*
 * XREFs of imp_VfWdfIoResourceRequirementsListAppendIoResList @ 0x1C00B5770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoResourceRequirementsListAppendIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESREQLIST__ *, WDFIORESLIST__ *))WdfVersion.Functions.pfnWdfIoResourceRequirementsListAppendIoResList)(
           DriverGlobals,
           RequirementsList,
           IoResList);
}
