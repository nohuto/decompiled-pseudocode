/*
 * XREFs of sub_18002D72C @ 0x18002D72C
 * Callers:
 *     sub_18010071C @ 0x18010071C (sub_18010071C.c)
 *     sub_180103081 @ 0x180103081 (sub_180103081.c)
 *     sub_1801030AD @ 0x1801030AD (sub_1801030AD.c)
 *     sub_180103B28 @ 0x180103B28 (sub_180103B28.c)
 * Callees:
 *     sub_18001E104 @ 0x18001E104 (sub_18001E104.c)
 */

__int64 __fastcall sub_18002D72C(char **a1)
{
  sub_18001E104((__int64)a1, (__int64)a1, *((char **)*a1 + 1));
  return sub_180010884(*a1, 0x48uLL);
}
