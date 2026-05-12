/*
 * XREFs of WPP_SF_qdddD @ 0x1C003EE78
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C00170B0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_592e485cf0853391f184037ba0ea23e1_Traceguids);
}
