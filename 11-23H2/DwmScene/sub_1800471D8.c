/*
 * XREFs of sub_1800471D8 @ 0x1800471D8
 * Callers:
 *     sub_180044C60 @ 0x180044C60 (sub_180044C60.c)
 *     sub_180044CE4 @ 0x180044CE4 (sub_180044CE4.c)
 *     sub_180081E00 @ 0x180081E00 (sub_180081E00.c)
 * Callees:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 */

unsigned __int64 __fastcall sub_1800471D8(__int64 *a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  return sub_18001B57C(a1, a2);
}
