/*
 * XREFs of RtlGetLastNtStatus @ 0x1800844B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlGetLastNtStatus(void)
{
  return NtCurrentTeb()->LastStatusValue;
}
