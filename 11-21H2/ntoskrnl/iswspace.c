/*
 * XREFs of iswspace @ 0x1403E1C10
 * Callers:
 *     sub_1409D09E4 @ 0x1409D09E4 (sub_1409D09E4.c)
 *     sub_1409D1D04 @ 0x1409D1D04 (sub_1409D1D04.c)
 *     sub_1409D23E8 @ 0x1409D23E8 (sub_1409D23E8.c)
 * Callees:
 *     sub_1403E3CE0 @ 0x1403E3CE0 (sub_1403E3CE0.c)
 */

int __cdecl iswspace(wint_t C)
{
  return sub_1403E3CE0(C, 8LL);
}
