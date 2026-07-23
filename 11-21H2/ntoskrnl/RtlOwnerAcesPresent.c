/*
 * XREFs of RtlOwnerAcesPresent @ 0x14022A360
 * Callers:
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     sub_14022A380 @ 0x14022A380 (sub_14022A380.c)
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return sub_14022A380(0LL, pAcl);
}
