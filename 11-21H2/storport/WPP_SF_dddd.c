/*
 * XREFs of WPP_SF_dddd @ 0x1C00476A4
 * Callers:
 *     StorPortDeviceBusy @ 0x1C0042ED0 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_27c524ad26413fc7d405974726332488_Traceguids);
}
