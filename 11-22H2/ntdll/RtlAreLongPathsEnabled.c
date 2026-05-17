/*
 * XREFs of RtlAreLongPathsEnabled @ 0x18007B0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlAreLongPathsEnabled()
{
  return NtCurrentPeb()->BitField >> 7;
}
