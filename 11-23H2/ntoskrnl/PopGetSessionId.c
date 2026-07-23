/*
 * XREFs of PopGetSessionId @ 0x140822B8C
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403848D0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14036FBA0 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
