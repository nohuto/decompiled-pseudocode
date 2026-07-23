/*
 * XREFs of KeIsForceIdleEngaged @ 0x1402501FC
 * Callers:
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KeClockInterruptNotify @ 0x1402C4930 (KeClockInterruptNotify.c)
 *     KePrepareClockTimerForIdle @ 0x1403475C4 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x14057D63C (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
