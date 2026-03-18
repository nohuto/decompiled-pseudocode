/*
 * XREFs of PpmPerfCommitPerformance @ 0x140356480
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x1403564BC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance);
}
