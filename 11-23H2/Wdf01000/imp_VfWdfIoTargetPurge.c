/*
 * XREFs of imp_VfWdfIoTargetPurge @ 0x1C00B5B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfIoTargetPurge(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, __int64 Action)
{
  WdfVersion.Functions.pfnWdfIoTargetPurge(DriverGlobals, IoTarget, (_WDF_IO_TARGET_PURGE_IO_ACTION)Action);
}
