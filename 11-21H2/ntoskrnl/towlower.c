/*
 * XREFs of towlower @ 0x1403E3150
 * Callers:
 *     sub_1409EF2FC @ 0x1409EF2FC (sub_1409EF2FC.c)
 *     sub_1409FCDF8 @ 0x1409FCDF8 (sub_1409FCDF8.c)
 *     sub_1409FE424 @ 0x1409FE424 (sub_1409FE424.c)
 *     sub_1409FE4F8 @ 0x1409FE4F8 (sub_1409FE4F8.c)
 *     sub_1409FE9A4 @ 0x1409FE9A4 (sub_1409FE9A4.c)
 *     sub_1409FEB28 @ 0x1409FEB28 (sub_1409FEB28.c)
 *     sub_1409FEBC8 @ 0x1409FEBC8 (sub_1409FEBC8.c)
 * Callees:
 *     sub_1403E3CE0 @ 0x1403E3CE0 (sub_1403E3CE0.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( (unsigned int)sub_1403E3CE0(C, 1LL) )
    v1 += 32;
  return v1;
}
