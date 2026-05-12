/*
 * XREFs of WPP_SF_dddd @ 0x1C004A4AC
 * Callers:
 *     StorPortDeviceBusy @ 0x1C0045B10 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
}
