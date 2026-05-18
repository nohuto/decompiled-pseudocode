/*
 * XREFs of sub_1800A0BF4 @ 0x1800A0BF4
 * Callers:
 *     sub_1800A0CDC @ 0x1800A0CDC (sub_1800A0CDC.c)
 *     sub_1800A0D88 @ 0x1800A0D88 (sub_1800A0D88.c)
 * Callees:
 *     sub_1800A0910 @ 0x1800A0910 (sub_1800A0910.c)
 */

__int64 __fastcall sub_1800A0BF4(void **a1)
{
  sub_1800A0910((__int64)a1, (__int64)a1, *((char **)*a1 + 1));
  return sub_1800100E8(*a1, 0x1D0uLL);
}
