/*
 * XREFs of sub_18001217C @ 0x18001217C
 * Callers:
 *     sub_1800130E8 @ 0x1800130E8 (sub_1800130E8.c)
 *     sub_18001E228 @ 0x18001E228 (sub_18001E228.c)
 *     sub_18001EA48 @ 0x18001EA48 (sub_18001EA48.c)
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 *     sub_18001EC48 @ 0x18001EC48 (sub_18001EC48.c)
 *     sub_180030B74 @ 0x180030B74 (sub_180030B74.c)
 *     sub_180038950 @ 0x180038950 (sub_180038950.c)
 *     sub_18008CB70 @ 0x18008CB70 (sub_18008CB70.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 */

__int64 __fastcall sub_18001217C(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFFLL )
    sub_180011AC4();
  return 2 * a1;
}
