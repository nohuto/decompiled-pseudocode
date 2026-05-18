/*
 * XREFs of sub_18002B780 @ 0x18002B780
 * Callers:
 *     sub_18002A8E0 @ 0x18002A8E0 (sub_18002A8E0.c)
 *     sub_1800496F0 @ 0x1800496F0 (sub_1800496F0.c)
 *     sub_18004E8E0 @ 0x18004E8E0 (sub_18004E8E0.c)
 *     sub_18005C3E0 @ 0x18005C3E0 (sub_18005C3E0.c)
 *     sub_18005E1C0 @ 0x18005E1C0 (sub_18005E1C0.c)
 *     sub_18007AAD0 @ 0x18007AAD0 (sub_18007AAD0.c)
 *     sub_180096DF0 @ 0x180096DF0 (sub_180096DF0.c)
 *     sub_180099BD0 @ 0x180099BD0 (sub_180099BD0.c)
 *     sub_18009B310 @ 0x18009B310 (sub_18009B310.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 *     sub_18002ABBC @ 0x18002ABBC (sub_18002ABBC.c)
 */

__int64 __fastcall sub_18002B780(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rdi
  _QWORD *k; // rbx
  _QWORD *v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 i; // rcx
  __int64 v11; // rdx
  char *v12; // rbx
  char *v13; // rcx
  __int64 ***v14; // r8
  __int64 *v15; // rdx
  __int64 **v16; // rax
  __int64 j; // rax
  __int64 *v18; // rcx
  __int64 *v19; // rax
  __int64 m; // rcx
  __int64 *n; // rcx
  __int64 *v22; // rax

  v2 = (_QWORD *)(a1 + 80);
  v3 = *(_QWORD **)(a1 + 80);
  k = v3;
  v5 = v3;
  v6 = (__int64 *)v3[1];
  v7 = v6;
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( *((_DWORD *)v7 + 7) >= a2 )
    {
      if ( *((_BYTE *)v5 + 25) && a2 < *((_DWORD *)v7 + 7) )
        v5 = v7;
      k = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = (__int64 *)*v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( a2 >= *((_DWORD *)v6 + 7) )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  result = (__int64)k;
  while ( (_QWORD *)result != v5 )
  {
    v9 = *(_QWORD *)(result + 16);
    if ( *(_BYTE *)(v9 + 25) )
    {
      for ( i = *(_QWORD *)(result + 8); !*(_BYTE *)(i + 25) && result == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        result = i;
      result = i;
    }
    else
    {
      v11 = *(_QWORD *)v9;
      for ( result = *(_QWORD *)(result + 16); !*(_BYTE *)(v11 + 25); v11 = *(_QWORD *)v11 )
        result = v11;
    }
  }
  if ( k == (_QWORD *)*v3 && *((_BYTE *)v5 + 25) )
  {
    v12 = (char *)v3[1];
    while ( !v12[25] )
    {
      sub_1800299BC((__int64)v2, (__int64)v2, *((char **)v12 + 2));
      v13 = v12;
      v12 = *(char **)v12;
      result = sub_180010884(v13, 0x28uLL);
    }
    v3[1] = v3;
    *v3 = v3;
    v3[2] = v3;
    v2[1] = 0LL;
  }
  else
  {
    while ( k != v5 )
    {
      v14 = (__int64 ***)(k + 2);
      v15 = k;
      v16 = (__int64 **)k[2];
      if ( *((_BYTE *)v16 + 25) )
      {
        for ( j = k[1]; !*(_BYTE *)(j + 25) && k == *(_QWORD **)(j + 16); j = *(_QWORD *)(j + 8) )
          k = (_QWORD *)j;
        k = (_QWORD *)j;
      }
      else
      {
        v18 = *v16;
        for ( k = (_QWORD *)k[2]; !*((_BYTE *)v18 + 25); v18 = (__int64 *)*v18 )
          k = v18;
      }
      v19 = v15;
      if ( *((_BYTE *)*v14 + 25) )
      {
        for ( m = v15[1]; !*(_BYTE *)(m + 25) && v19 == *(__int64 **)(m + 16); m = *(_QWORD *)(m + 8) )
          v19 = (__int64 *)m;
      }
      else
      {
        for ( n = **v14; !*((_BYTE *)n + 25); n = (__int64 *)*n )
          ;
      }
      v22 = sub_18002ABBC(v2, v15);
      result = sub_180010884((char *)v22, 0x28uLL);
    }
  }
  return result;
}
