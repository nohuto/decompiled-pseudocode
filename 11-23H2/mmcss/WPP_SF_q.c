/*
 * XREFs of WPP_SF_q @ 0x1C0005228
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000D730 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_q(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_37e2a5d79757317e233be7546541e116_Traceguids);
}
