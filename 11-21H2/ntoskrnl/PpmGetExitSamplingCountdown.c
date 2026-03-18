/*
 * XREFs of PpmGetExitSamplingCountdown @ 0x140224E64
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140224C34 (PoFxSendSystemLatencyUpdate.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetExitSamplingCountdown()
{
  unsigned int v0; // ecx
  __int64 result; // rax

  v0 = PpmExitLatencySamplingPercentage;
  result = 0LL;
  if ( (unsigned int)PpmExitLatencySamplingPercentage > 0x64 )
  {
    v0 = 100;
    return 0x64 / v0;
  }
  if ( PpmExitLatencySamplingPercentage )
    return 0x64 / v0;
  return result;
}
