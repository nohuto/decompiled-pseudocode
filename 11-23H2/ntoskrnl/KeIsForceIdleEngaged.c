/*
 * XREFs of KeIsForceIdleEngaged @ 0x14025012C
 * Callers:
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     KeClockInterruptNotify @ 0x1402C46A0 (KeClockInterruptNotify.c)
 *     KePrepareClockTimerForIdle @ 0x140347334 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x14057D14C (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  return !KiForceIdleDisabled && KiForceIdleState == 4;
}
