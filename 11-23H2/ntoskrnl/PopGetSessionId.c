/*
 * XREFs of PopGetSessionId @ 0x14082288C
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403846F0 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14036FA00 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
