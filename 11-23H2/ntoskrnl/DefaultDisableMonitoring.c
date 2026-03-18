/*
 * XREFs of DefaultDisableMonitoring @ 0x14050CD20
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerStopProfileInterrupt @ 0x14050AB5C (HalpTimerStopProfileInterrupt.c)
 */

void __fastcall DefaultDisableMonitoring(int a1)
{
  if ( !a1 )
    HalpTimerStopProfileInterrupt();
}
