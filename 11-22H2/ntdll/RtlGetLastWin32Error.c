/*
 * XREFs of RtlGetLastWin32Error @ 0x1800AEA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG RtlGetLastWin32Error(void)
{
  return NtCurrentTeb()->LastErrorValue;
}
