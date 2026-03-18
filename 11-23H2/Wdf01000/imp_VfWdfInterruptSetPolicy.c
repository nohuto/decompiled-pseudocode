/*
 * XREFs of imp_VfWdfInterruptSetPolicy @ 0x1C00B4F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfInterruptSetPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        __int64 Policy,
        __int64 Priority,
        unsigned __int64 TargetProcessorSet)
{
  WdfVersion.Functions.pfnWdfInterruptSetPolicy(
    DriverGlobals,
    Interrupt,
    (_WDF_INTERRUPT_POLICY)Policy,
    (_WDF_INTERRUPT_PRIORITY)Priority,
    TargetProcessorSet);
}
