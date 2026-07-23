/*
 * XREFs of sub_14026ED30 @ 0x14026ED30
 * Callers:
 *     sub_140218310 @ 0x140218310 (sub_140218310.c)
 *     sub_14026ECFC @ 0x14026ECFC (sub_14026ECFC.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_1402D8F30 @ 0x1402D8F30 (sub_1402D8F30.c)
 *     sub_1405A2A48 @ 0x1405A2A48 (sub_1405A2A48.c)
 *     sub_1405A2F88 @ 0x1405A2F88 (sub_1405A2F88.c)
 *     sub_140B190F0 @ 0x140B190F0 (sub_140B190F0.c)
 *     sub_140B1A250 @ 0x140B1A250 (sub_140B1A250.c)
 * Callees:
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 */

__int64 __fastcall sub_14026ED30(__int64 a1, unsigned __int64 a2)
{
  return sub_14033A510(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL);
}
