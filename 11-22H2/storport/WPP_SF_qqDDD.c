/*
 * XREFs of WPP_SF_qqDDD @ 0x1C0063B78
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C0016E44 (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids);
}
