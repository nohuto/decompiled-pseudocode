/*
 * XREFs of imp_VfWdfInterruptSetExtendedPolicy @ 0x1C00B4F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfInterruptSetExtendedPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_EXTENDED_POLICY *PolicyAndGroup)
{
  WdfVersion.Functions.pfnWdfInterruptSetExtendedPolicy(DriverGlobals, Interrupt, PolicyAndGroup);
}
