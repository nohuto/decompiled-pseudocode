/*
 * XREFs of sub_18002B024 @ 0x18002B024
 * Callers:
 *     sub_18002A8E0 @ 0x18002A8E0 (sub_18002A8E0.c)
 *     sub_18004E8E0 @ 0x18004E8E0 (sub_18004E8E0.c)
 *     sub_18005C3E0 @ 0x18005C3E0 (sub_18005C3E0.c)
 *     sub_18005E1C0 @ 0x18005E1C0 (sub_18005E1C0.c)
 *     sub_180063A00 @ 0x180063A00 (sub_180063A00.c)
 *     sub_18007AAD0 @ 0x18007AAD0 (sub_18007AAD0.c)
 *     sub_180092790 @ 0x180092790 (sub_180092790.c)
 *     sub_1800952D4 @ 0x1800952D4 (sub_1800952D4.c)
 *     sub_180096DF0 @ 0x180096DF0 (sub_180096DF0.c)
 *     sub_180099BD0 @ 0x180099BD0 (sub_180099BD0.c)
 *     sub_18009B310 @ 0x18009B310 (sub_18009B310.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 *     sub_18002ABBC @ 0x18002ABBC (sub_18002ABBC.c)
 */

__int64 __fastcall sub_18002B024(_QWORD *a1, unsigned int *a2)
{
  _QWORD *v2; // rdi
  _QWORD *m; // rbx
  _QWORD *v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // r8
  unsigned int v8; // r9d
  _QWORD *j; // rax
  __int64 v10; // rbp
  __int64 **v11; // rcx
  __int64 i; // rcx
  __int64 *v13; // rdx
  char *v14; // rsi
  char *v15; // rbx
  __int64 ***v17; // r8
  __int64 *v18; // rdx
  __int64 **v19; // rax
  __int64 k; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rax
  __int64 n; // rcx
  __int64 *ii; // rcx
  __int64 *v25; // rdi

  v2 = (_QWORD *)*a1;
  m = (_QWORD *)*a1;
  v5 = (_QWORD *)*a1;
  v6 = *(__int64 **)(*a1 + 8LL);
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( *((_DWORD *)v7 + 8) >= v8 )
      {
        if ( *((_BYTE *)v5 + 25) && v8 < *((_DWORD *)v7 + 8) )
          v5 = v7;
        m = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = (__int64 *)*v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *a2 >= *((_DWORD *)v6 + 8) )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  j = m;
  v10 = 0LL;
  while ( j != v5 )
  {
    v11 = (__int64 **)j[2];
    ++v10;
    if ( *((_BYTE *)v11 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v13 = *v11;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v13 + 25); v13 = (__int64 *)*v13 )
        j = v13;
    }
  }
  if ( m == (_QWORD *)*v2 && *((_BYTE *)v5 + 25) )
  {
    v14 = (char *)v2[1];
    while ( !v14[25] )
    {
      sub_180029948((__int64)a1, (__int64)a1, *((char **)v14 + 2));
      v15 = v14;
      v14 = *(char **)v14;
      sub_180010910((__int64)(v15 + 40));
      sub_180010884(v15, 0x38uLL);
    }
    v2[1] = v2;
    *v2 = v2;
    v2[2] = v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( m != v5 )
    {
      v17 = (__int64 ***)(m + 2);
      v18 = m;
      v19 = (__int64 **)m[2];
      if ( *((_BYTE *)v19 + 25) )
      {
        for ( k = m[1]; !*(_BYTE *)(k + 25) && m == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
          m = (_QWORD *)k;
        m = (_QWORD *)k;
      }
      else
      {
        v21 = *v19;
        for ( m = (_QWORD *)m[2]; !*((_BYTE *)v21 + 25); v21 = (__int64 *)*v21 )
          m = v21;
      }
      v22 = v18;
      if ( *((_BYTE *)*v17 + 25) )
      {
        for ( n = v18[1]; !*(_BYTE *)(n + 25) && v22 == *(__int64 **)(n + 16); n = *(_QWORD *)(n + 8) )
          v22 = (__int64 *)n;
      }
      else
      {
        for ( ii = **v17; !*((_BYTE *)ii + 25); ii = (__int64 *)*ii )
          ;
      }
      v25 = sub_18002ABBC(a1, v18);
      sub_180010910((__int64)(v25 + 5));
      sub_180010884((char *)v25, 0x38uLL);
    }
  }
  return v10;
}
