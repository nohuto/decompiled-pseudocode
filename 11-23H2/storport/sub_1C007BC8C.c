/*
 * XREFs of sub_1C007BC8C @ 0x1C007BC8C
 * Callers:
 *     sub_1C007A098 @ 0x1C007A098 (sub_1C007A098.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 __fastcall sub_1C007BC8C(int **a1, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v5; // r14d
  int v6; // edi
  __int64 v7; // rbx

  v3 = a3;
  v5 = (int)a1;
  v6 = 1;
  if ( a3 )
  {
    v7 = a3;
  }
  else
  {
    LOBYTE(a3) = 1;
    v7 = 0LL;
  }
  sub_1C0055B8C(*a1, "EraseBand", a3, 3, v7, 0LL);
  if ( v3 )
    v6 = v7 + 196608;
  return sub_1C007CF64(v5, a2, v6, 2051, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
}
