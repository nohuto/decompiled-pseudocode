/*
 * XREFs of imp_VfWdfControlFinishInitializing @ 0x1C00C0520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfControlFinishInitializing(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfControlFinishInitializing(DriverGlobals, Device);
}
