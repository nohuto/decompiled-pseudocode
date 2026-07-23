/*
 * XREFs of PopSystemRequiredSet @ 0x1403B4C2C
 * Callers:
 *     NtSetThreadExecutionState @ 0x1407A8F10 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopResetIdleTime @ 0x1403B4C48 (PopResetIdleTime.c)
 */

__int64 PopSystemRequiredSet()
{
  return PopResetIdleTime(3LL);
}
