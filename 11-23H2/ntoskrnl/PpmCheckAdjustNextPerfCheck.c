/*
 * XREFs of PpmCheckAdjustNextPerfCheck @ 0x14035C110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmCheckAdjustNextPerfCheck()
{
  if ( PpmCheckCurrentPipelineId == 5 && PpmCheckLastEffectiveExecutionTime )
    _InterlockedExchange64(&PpmCheckLastEffectiveExecutionTime, MEMORY[0xFFFFF78000000008]);
  return 1;
}
