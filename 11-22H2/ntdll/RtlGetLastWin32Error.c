/*
 * XREFs of RtlGetLastWin32Error @ 0x1800AEA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetLastWin32Error()
{
  return NtCurrentTeb()->LastErrorValue;
}
