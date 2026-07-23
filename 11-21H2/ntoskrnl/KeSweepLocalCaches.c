/*
 * XREFs of KeSweepLocalCaches @ 0x140389F70
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 *     sub_14041B4C0 @ 0x14041B4C0 (sub_14041B4C0.c)
 *     sub_140A621FC @ 0x140A621FC (sub_140A621FC.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
