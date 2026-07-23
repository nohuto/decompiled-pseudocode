/*
 * XREFs of sub_1406D6A3C @ 0x1406D6A3C
 * Callers:
 *     sub_1406D5F3C @ 0x1406D5F3C (sub_1406D5F3C.c)
 *     sub_1406D6228 @ 0x1406D6228 (sub_1406D6228.c)
 *     sub_1406D6860 @ 0x1406D6860 (sub_1406D6860.c)
 *     sub_1409BA9F0 @ 0x1409BA9F0 (sub_1409BA9F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406D6A3C(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 > 0x11 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = qword_140015D10[a1];
    *a3 = HIDWORD(qword_140015D10[a1]);
  }
  return v3;
}
