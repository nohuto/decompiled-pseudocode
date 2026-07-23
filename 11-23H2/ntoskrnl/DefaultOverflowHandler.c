/*
 * XREFs of DefaultOverflowHandler @ 0x14050D310
 * Callers:
 *     HalpTimerProfileInterrupt @ 0x14051F050 (HalpTimerProfileInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KeProfileInterruptWithSource @ 0x1405743D0 (KeProfileInterruptWithSource.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1)
{
  if ( HalpTimerProfilingCallback )
    return HalpTimerProfilingCallback();
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
