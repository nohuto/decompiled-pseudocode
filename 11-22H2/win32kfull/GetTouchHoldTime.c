/*
 * XREFs of GetTouchHoldTime @ 0x1C01F3A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetTouchHoldTime()
{
  return GetTouchTimeFromCPLValue(1000LL, 1000LL, 8LL);
}
