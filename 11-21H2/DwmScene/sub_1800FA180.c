/*
 * XREFs of sub_1800FA180 @ 0x1800FA180
 * Callers:
 *     sub_1800F9810 @ 0x1800F9810 (sub_1800F9810.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 *     sub_18002ABBC @ 0x18002ABBC (sub_18002ABBC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FA180(__int64 **a1, int *a2)
{
  __int64 *v2; // rdi
  __int64 *m; // rbx
  __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // r8
  int v8; // r9d
  __int64 *j; // rax
  __int64 v10; // r14
  __int64 **v11; // rcx
  __int64 *i; // rcx
  __int64 *v13; // rdx
  __int64 ***v15; // r8
  __int64 *v16; // rdx
  __int64 **v17; // rax
  __int64 *k; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 n; // rcx
  __int64 *ii; // rcx
  __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 *v25; // rcx

  v2 = *a1;
  m = *a1;
  v5 = *a1;
  v6 = (__int64 *)(*a1)[1];
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
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v13 = *v11;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v13 + 25); v13 = (__int64 *)*v13 )
        j = v13;
    }
  }
  if ( m == (__int64 *)*v2 && *((_BYTE *)v5 + 25) )
  {
    sub_18001E060((__int64)a1, (__int64)a1, (char *)v2[1]);
    v2[1] = (__int64)v2;
    *v2 = (__int64)v2;
    v2[2] = (__int64)v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( m != v5 )
    {
      v15 = (__int64 ***)(m + 2);
      v16 = m;
      v17 = (__int64 **)m[2];
      if ( *((_BYTE *)v17 + 25) )
      {
        for ( k = (__int64 *)m[1]; !*((_BYTE *)k + 25) && m == (__int64 *)k[2]; k = (__int64 *)k[1] )
          m = k;
        m = k;
      }
      else
      {
        v19 = *v17;
        for ( m = (__int64 *)m[2]; !*((_BYTE *)v19 + 25); v19 = (__int64 *)*v19 )
          m = v19;
      }
      v20 = v16;
      if ( *((_BYTE *)*v15 + 25) )
      {
        for ( n = v16[1]; !*(_BYTE *)(n + 25) && v20 == *(__int64 **)(n + 16); n = *(_QWORD *)(n + 8) )
          v20 = (__int64 *)n;
      }
      else
      {
        for ( ii = **v15; !*((_BYTE *)ii + 25); ii = (__int64 *)*ii )
          ;
      }
      v24 = sub_18002ABBC(a1, v16);
      v25 = (__int64 *)v24[12];
      if ( v25 )
      {
        LOBYTE(v23) = v25 != v24 + 5;
        (*(void (__fastcall **)(__int64 *, __int64))(*v25 + 32))(v25, v23);
        v24[12] = 0LL;
      }
      sub_180010884((char *)v24, 0x68uLL);
    }
  }
  return v10;
}
