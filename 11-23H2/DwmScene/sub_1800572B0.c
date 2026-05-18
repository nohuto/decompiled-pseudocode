/*
 * XREFs of sub_1800572B0 @ 0x1800572B0
 * Callers:
 *     sub_180057314 @ 0x180057314 (sub_180057314.c)
 *     sub_180057344 @ 0x180057344 (sub_180057344.c)
 * Callees:
 *     sub_180056EE0 @ 0x180056EE0 (sub_180056EE0.c)
 */

__int64 __fastcall sub_1800572B0(void **a1)
{
  sub_180056EE0((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_1800100E8(*a1, 0x48uLL);
}
