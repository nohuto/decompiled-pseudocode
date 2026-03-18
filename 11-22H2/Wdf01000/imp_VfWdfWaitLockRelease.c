/*
 * XREFs of imp_VfWdfWaitLockRelease @ 0x1C00B7A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfWaitLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWAITLOCK__ *Lock)
{
  WdfVersion.Functions.pfnWdfWaitLockRelease(DriverGlobals, Lock);
}
