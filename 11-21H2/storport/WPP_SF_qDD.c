/*
 * XREFs of WPP_SF_qdd @ 0x1C003C6A8
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000BAC0 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids);
}
