/*
 * XREFs of DefaultOverflowHandler @ 0x14050FCB0
 * Callers:
 *     HalpTimerProfileInterrupt @ 0x140521CB0 (HalpTimerProfileInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KeProfileInterruptWithSource @ 0x140571540 (KeProfileInterruptWithSource.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1)
{
  if ( HalpTimerProfilingCallback )
    return HalpTimerProfilingCallback();
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
