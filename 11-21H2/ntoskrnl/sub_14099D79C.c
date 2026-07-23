/*
 * XREFs of sub_14099D79C @ 0x14099D79C
 * Callers:
 *     sub_140855034 @ 0x140855034 (sub_140855034.c)
 *     sub_14099D500 @ 0x14099D500 (sub_14099D500.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14099D79C(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[1073];
  a1[1077] += v2;
  if ( a1[1075] < v2 )
    a1[1075] = v2;
  if ( a1[1076] > v2 )
    a1[1076] = v2;
  ++a1[1074];
  a1[1073] = 0LL;
}
