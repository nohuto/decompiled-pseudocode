/*
 * XREFs of sub_140778B24 @ 0x140778B24
 * Callers:
 *     sub_140699E6C @ 0x140699E6C (sub_140699E6C.c)
 *     sub_140776EE8 @ 0x140776EE8 (sub_140776EE8.c)
 *     sub_14094A034 @ 0x14094A034 (sub_14094A034.c)
 * Callees:
 *     sub_140779680 @ 0x140779680 (sub_140779680.c)
 *     sub_14077D784 @ 0x14077D784 (sub_14077D784.c)
 */

__int64 __fastcall sub_140778B24(int a1, int a2, int a3, int a4, int a5, _WORD *a6, _OWORD *a7)
{
  __int64 v12; // rax
  __int64 result; // rax

  *a7 = 0LL;
  a7[1] = 0LL;
  a7[2] = 0LL;
  while ( *a6 )
  {
    result = sub_14077D784(a1, a2, a3, a4, a5, (__int64)a6, (__int64)a7);
    if ( (int)result < 0 || *((_DWORD *)a7 + 8) )
      return result;
    sub_140779680(a7, 1483763280LL);
    v12 = -1LL;
    do
      ++v12;
    while ( a6[v12] );
    a6 += v12 + 1;
  }
  return sub_14077D784(a1, a2, a3, a4, a5, 0LL, (__int64)a7);
}
