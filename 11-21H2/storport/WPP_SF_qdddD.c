/*
 * XREFs of WPP_SF_qdddD @ 0x1C003CCC8
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C001B720 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_e288614d163b3ceea713389723084ed3_Traceguids);
}
