/*
 * XREFs of RtlAreLongPathsEnabled @ 0x18007B750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlAreLongPathsEnabled(void)
{
  return NtCurrentPeb()->BitField >> 7;
}
