/*
 * XREFs of WPP_SF_qqDDD @ 0x1C0056D5C
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000C1C0 (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_568007271afc3cdc120e483208e8f443_Traceguids);
}
