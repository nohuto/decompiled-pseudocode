/*
 * XREFs of sub_1800601A0 @ 0x1800601A0
 * Callers:
 *     sub_18005F4C0 @ 0x18005F4C0 (sub_18005F4C0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18002ABBC @ 0x18002ABBC (sub_18002ABBC.c)
 *     sub_18005E678 @ 0x18005E678 (sub_18005E678.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800601A0(__int64 **a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 *m; // rbx
  __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // r8
  unsigned __int64 v8; // r9
  __int64 *j; // rax
  __int64 v10; // rbp
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
  __int64 *v23; // rdi
  volatile signed __int32 *v24; // rcx

  v2 = *a1;
  m = *a1;
  v5 = *a1;
  v6 = (__int64 *)(*a1)[1];
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *(_QWORD *)(a2 + 8);
    do
    {
      if ( v7[5] >= v8 )
      {
        if ( *((_BYTE *)v5 + 25) && v8 < v7[5] )
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
    if ( *(_QWORD *)(a2 + 8) >= (unsigned __int64)v6[5] )
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
    sub_18005E678((__int64)a1, (__int64)a1, (char *)v2[1]);
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
      v23 = sub_18002ABBC(a1, v16);
      v24 = (volatile signed __int32 *)v23[5];
      if ( v24 && _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      sub_180010884((char *)v23, 0x48uLL);
    }
  }
  return v10;
}
