/*
 * XREFs of PopSystemRequiredSet @ 0x1403B6DF8
 * Callers:
 *     NtSetThreadExecutionState @ 0x1407EDD60 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x140368F70 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3u);
}
