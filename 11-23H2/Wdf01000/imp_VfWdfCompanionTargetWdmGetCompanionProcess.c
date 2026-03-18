/*
 * XREFs of imp_VfWdfCompanionTargetWdmGetCompanionProcess @ 0x1C00B34C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

_EPROCESS *__fastcall imp_VfWdfCompanionTargetWdmGetCompanionProcess(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget)
{
  return WdfVersion.Functions.pfnWdfCompanionTargetWdmGetCompanionProcess(DriverGlobals, CompanionTarget);
}
