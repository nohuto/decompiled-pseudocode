/*
 * XREFs of KiPollFreezeExecution @ 0x140576C70
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140A9EF40 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
