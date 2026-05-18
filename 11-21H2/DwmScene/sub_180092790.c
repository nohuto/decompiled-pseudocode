/*
 * XREFs of sub_180092790 @ 0x180092790
 * Callers:
 *     sub_1800496F0 @ 0x1800496F0 (sub_1800496F0.c)
 *     sub_180051E80 @ 0x180051E80 (sub_180051E80.c)
 *     sub_180068BC0 @ 0x180068BC0 (sub_180068BC0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 *     sub_18002ABBC @ 0x18002ABBC (sub_18002ABBC.c)
 *     sub_18002B024 @ 0x18002B024 (sub_18002B024.c)
 */

__int64 __fastcall sub_180092790(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  _QWORD *v5; // r14
  _QWORD *v6; // rdi
  _QWORD *k; // rbx
  _QWORD *v8; // rsi
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 i; // rcx
  __int64 v14; // rdx
  char *v15; // rbx
  char *v16; // rcx
  __int64 ***v17; // r8
  __int64 *v18; // rdx
  __int64 **v19; // rax
  __int64 j; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rax
  __int64 m; // rcx
  __int64 *n; // rcx
  __int64 *v25; // rax
  unsigned int v26; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 128);
  if ( v3 )
  {
    v26 = a2;
    sub_18002B024((_QWORD *)(v3 + 112), &v26);
  }
  v5 = (_QWORD *)(a1 + 88);
  v6 = *(_QWORD **)(a1 + 88);
  k = v6;
  v8 = v6;
  v9 = (__int64 *)v6[1];
  v10 = v9;
  while ( !*((_BYTE *)v10 + 25) )
  {
    if ( *((_DWORD *)v10 + 7) >= a2 )
    {
      if ( *((_BYTE *)v8 + 25) && a2 < *((_DWORD *)v10 + 7) )
        v8 = v10;
      k = v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  if ( !*((_BYTE *)v8 + 25) )
    v9 = (__int64 *)*v8;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( a2 >= *((_DWORD *)v9 + 7) )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v8 = v9;
      v9 = (__int64 *)*v9;
    }
  }
  result = (__int64)k;
  while ( (_QWORD *)result != v8 )
  {
    v12 = *(_QWORD *)(result + 16);
    if ( *(_BYTE *)(v12 + 25) )
    {
      for ( i = *(_QWORD *)(result + 8); !*(_BYTE *)(i + 25) && result == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        result = i;
      result = i;
    }
    else
    {
      v14 = *(_QWORD *)v12;
      for ( result = *(_QWORD *)(result + 16); !*(_BYTE *)(v14 + 25); v14 = *(_QWORD *)v14 )
        result = v14;
    }
  }
  if ( k == (_QWORD *)*v6 && *((_BYTE *)v8 + 25) )
  {
    v15 = (char *)v6[1];
    while ( !v15[25] )
    {
      sub_1800299BC((__int64)v5, (__int64)v5, *((char **)v15 + 2));
      v16 = v15;
      v15 = *(char **)v15;
      result = sub_180010884(v16, 0x28uLL);
    }
    v6[1] = v6;
    *v6 = v6;
    v6[2] = v6;
    v5[1] = 0LL;
  }
  else
  {
    while ( k != v8 )
    {
      v17 = (__int64 ***)(k + 2);
      v18 = k;
      v19 = (__int64 **)k[2];
      if ( *((_BYTE *)v19 + 25) )
      {
        for ( j = k[1]; !*(_BYTE *)(j + 25) && k == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
          k = (_QWORD *)j;
        k = (_QWORD *)j;
      }
      else
      {
        v21 = *v19;
        for ( k = (_QWORD *)k[2]; !*((_BYTE *)v21 + 25); v21 = (__int64 *)*v21 )
          k = v21;
      }
      v22 = v18;
      if ( *((_BYTE *)*v17 + 25) )
      {
        for ( m = v18[1]; !*(_BYTE *)(m + 25) && v22 == *(__int64 **)(m + 16); m = *(_QWORD *)(m + 8) )
          v22 = (__int64 *)m;
      }
      else
      {
        for ( n = **v17; !*((_BYTE *)n + 25); n = (__int64 *)*n )
          ;
      }
      v25 = sub_18002ABBC(v5, v18);
      result = sub_180010884((char *)v25, 0x28uLL);
    }
  }
  return result;
}
