/*
 * XREFs of KeQueryActiveProcessors @ 0x1404600F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_140D1EFF8[0];
}
