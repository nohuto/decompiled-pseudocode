/*
 * XREFs of PpmPerfReadFeedback @ 0x1403564A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x1403564BC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfReadFeedback()
{
  return PpmPerfControlExecuteAction(PpmPerfControlReadFeedback);
}
