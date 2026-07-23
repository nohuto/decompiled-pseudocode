/*
 * XREFs of RtlOwnerAcesPresent @ 0x18008CEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return RtlpOwnerAcesPresent(0, (__int64)pAcl);
}
