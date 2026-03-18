/*
 * XREFs of WPP_SF_Zq @ 0x1C0005108
 * Callers:
 *     CiDispatchInitialize @ 0x1C000F490 (CiDispatchInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_37e2a5d79757317e233be7546541e116_Traceguids);
}
