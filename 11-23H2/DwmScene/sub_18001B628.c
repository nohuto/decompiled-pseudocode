/*
 * XREFs of sub_18001B628 @ 0x18001B628
 * Callers:
 *     sub_180016C68 @ 0x180016C68 (sub_180016C68.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 */

unsigned __int64 __fastcall sub_18001B628(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  void *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9

  v2 = 0x3FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v5 = (void *)*a1;
  v6 = (a1[2] - (__int64)v5) >> 2;
  v7 = v6 >> 1;
  if ( v6 <= 0x3FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  if ( v5 )
  {
    sub_1800100E8(v5, 4 * v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_18001B57C(a1, v2);
}
