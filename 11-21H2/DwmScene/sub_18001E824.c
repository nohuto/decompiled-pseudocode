/*
 * XREFs of sub_18001E824 @ 0x18001E824
 * Callers:
 *     sub_1800FFDD4 @ 0x1800FFDD4 (sub_1800FFDD4.c)
 *     sub_1800FFDF8 @ 0x1800FFDF8 (sub_1800FFDF8.c)
 *     sub_18010D50D @ 0x18010D50D (sub_18010D50D.c)
 * Callees:
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 */

__int64 __fastcall sub_18001E824(char **a1)
{
  sub_18001E060((__int64)a1, (__int64)a1, *((char **)*a1 + 1));
  return sub_180010884(*a1, 0x68uLL);
}
