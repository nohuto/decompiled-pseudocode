/*
 * XREFs of HvlGetQpcBias @ 0x140372700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HvlGetQpcBias()
{
  return *((_QWORD *)HvlpReferenceTscPage + 3);
}
