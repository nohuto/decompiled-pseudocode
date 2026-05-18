/*
 * XREFs of sub_1800DE1E8 @ 0x1800DE1E8
 * Callers:
 *     sub_1800DE2E4 @ 0x1800DE2E4 (sub_1800DE2E4.c)
 *     sub_1800DFF4C @ 0x1800DFF4C (sub_1800DFF4C.c)
 *     sub_1800DFF6C @ 0x1800DFF6C (sub_1800DFF6C.c)
 *     sub_1800E0100 @ 0x1800E0100 (sub_1800E0100.c)
 * Callees:
 *     sub_18001C9D4 @ 0x18001C9D4 (sub_18001C9D4.c)
 */

__int64 __fastcall sub_1800DE1E8(void **a1)
{
  sub_18001C9D4((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_1800100E8(*a1, 0x68uLL);
}
