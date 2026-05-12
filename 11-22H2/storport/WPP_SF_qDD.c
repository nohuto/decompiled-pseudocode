/*
 * XREFs of WPP_SF_qdd @ 0x1C003EA3C
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0007490 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids);
}
