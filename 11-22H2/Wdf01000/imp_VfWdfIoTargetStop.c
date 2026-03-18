/*
 * XREFs of imp_VfWdfIoTargetStop @ 0x1C00B5D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoTargetStop(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, __int64 Action)
{
  WdfVersion.Functions.pfnWdfIoTargetStop(DriverGlobals, IoTarget, (_WDF_IO_TARGET_SENT_IO_ACTION)Action);
}
