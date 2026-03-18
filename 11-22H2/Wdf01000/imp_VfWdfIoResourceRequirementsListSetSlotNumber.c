/*
 * XREFs of imp_VfWdfIoResourceRequirementsListSetSlotNumber @ 0x1C00B5850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoResourceRequirementsListSetSlotNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        __int64 SlotNumber)
{
  WdfVersion.Functions.pfnWdfIoResourceRequirementsListSetSlotNumber(DriverGlobals, RequirementsList, SlotNumber);
}
