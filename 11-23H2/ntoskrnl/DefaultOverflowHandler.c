/*
 * XREFs of DefaultOverflowHandler @ 0x14050CDC0
 * Callers:
 *     HalpTimerProfileInterrupt @ 0x14051EB00 (HalpTimerProfileInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     KeProfileInterruptWithSource @ 0x140573E90 (KeProfileInterruptWithSource.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1)
{
  if ( HalpTimerProfilingCallback )
    return HalpTimerProfilingCallback();
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
