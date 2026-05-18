/*
 * XREFs of sub_180060C88 @ 0x180060C88
 * Callers:
 *     sub_18006039C @ 0x18006039C (sub_18006039C.c)
 * Callees:
 *     sub_18001DA38 @ 0x18001DA38 (sub_18001DA38.c)
 */

char __fastcall sub_180060C88(__int64 *j, __int64 *a2, __int64 *m)
{
  char v6; // bp
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 *k; // rax
  __int64 *v12; // rcx

  v6 = 0;
  while ( j != a2 )
  {
    if ( *((_DWORD *)j + 8) != *((_DWORD *)m + 8)
      || !sub_18001DA38(j + 5, m + 5)
      || _mm_movemask_ps(_mm_cmpeq_ps(*(__m128 *)(m + 9), *(__m128 *)(j + 9))) != 15 )
    {
      return v6;
    }
    v7 = (__int64 **)j[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v9 = *v7;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
        j = v9;
    }
    v10 = (__int64 **)m[2];
    if ( *((_BYTE *)v10 + 25) )
    {
      for ( k = (__int64 *)m[1]; !*((_BYTE *)k + 25) && m == (__int64 *)k[2]; k = (__int64 *)k[1] )
        m = k;
      m = k;
    }
    else
    {
      v12 = *v10;
      for ( m = (__int64 *)m[2]; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
        m = v12;
    }
  }
  return 1;
}
