/*
 * XREFs of sub_180032C3C @ 0x180032C3C
 * Callers:
 *     sub_18010091D @ 0x18010091D (sub_18010091D.c)
 *     sub_180100C35 @ 0x180100C35 (sub_180100C35.c)
 * Callees:
 *     sub_180030D80 @ 0x180030D80 (sub_180030D80.c)
 */

__int64 __fastcall sub_180032C3C(char **a1)
{
  sub_180030D80((__int64)a1, (__int64)a1, *((char **)*a1 + 1));
  return sub_180010884(*a1, 0x40uLL);
}
