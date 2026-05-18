/*
 * XREFs of sub_1800F90A0 @ 0x1800F90A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043FDC @ 0x180043FDC (sub_180043FDC.c)
 *     sub_1800FA93C @ 0x1800FA93C (sub_1800FA93C.c)
 */

_QWORD *__fastcall sub_1800F90A0(__int64 a1, _QWORD *a2, char *a3)
{
  __int64 *v3; // rsi
  __int64 *v7; // rbp
  char *v8; // rdi

  v3 = *(__int64 **)(a1 + 144);
  v7 = v3;
  v8 = (char *)v3[1];
  if ( !v8[25] )
  {
    do
    {
      if ( (unsigned __int8)sub_180043FDC(v8 + 32, a3) )
      {
        v8 = (char *)*((_QWORD *)v8 + 2);
      }
      else
      {
        v3 = (__int64 *)v8;
        v8 = *(char **)v8;
      }
    }
    while ( !v8[25] );
    v7 = *(__int64 **)(a1 + 144);
  }
  if ( *((_BYTE *)v3 + 25) || (unsigned __int8)sub_180043FDC(a3, v3 + 4) || v3 == v7 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  else
  {
    sub_1800FA93C(v3 + 8, a2);
  }
  return a2;
}
