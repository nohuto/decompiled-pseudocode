/*
 * XREFs of sub_1406D404C @ 0x1406D404C
 * Callers:
 *     sub_1406D3BF0 @ 0x1406D3BF0 (sub_1406D3BF0.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 * Callees:
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 */

__int64 __fastcall sub_1406D404C(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( a1 == a2 )
    v2 = a1;
  else
    sub_140AB4484(a1);
  return sub_140AB4484(v2);
}
