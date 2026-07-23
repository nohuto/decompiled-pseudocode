/*
 * XREFs of sub_14027E128 @ 0x14027E128
 * Callers:
 *     sub_1406CCD8C @ 0x1406CCD8C (sub_1406CCD8C.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     sub_14075C330 @ 0x14075C330 (sub_14075C330.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140761604 @ 0x140761604 (sub_140761604.c)
 *     sub_140971708 @ 0x140971708 (sub_140971708.c)
 *     sub_1409766B0 @ 0x1409766B0 (sub_1409766B0.c)
 * Callees:
 *     sub_14033EF50 @ 0x14033EF50 (sub_14033EF50.c)
 */

__int64 __fastcall sub_14027E128(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  return sub_14033EF50(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + (unsigned int)(a3 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           a4);
}
