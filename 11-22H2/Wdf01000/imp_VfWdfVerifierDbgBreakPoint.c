/*
 * XREFs of imp_VfWdfVerifierDbgBreakPoint @ 0x1C00B79B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfVerifierDbgBreakPoint(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  WdfVersion.Functions.pfnWdfVerifierDbgBreakPoint(DriverGlobals);
}
