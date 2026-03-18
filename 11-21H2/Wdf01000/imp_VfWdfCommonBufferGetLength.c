/*
 * XREFs of imp_VfWdfCommonBufferGetLength @ 0x1C00C0450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall imp_VfWdfCommonBufferGetLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  return WdfVersion.Functions.pfnWdfCommonBufferGetLength(DriverGlobals, CommonBuffer);
}
