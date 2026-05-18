/*
 * XREFs of sub_1800F29D0 @ 0x1800F29D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18002ABBC @ 0x18002ABBC (sub_18002ABBC.c)
 *     sub_1800F26AC @ 0x1800F26AC (sub_1800F26AC.c)
 *     sub_1800F2C64 @ 0x1800F2C64 (sub_1800F2C64.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800F29D0(__int64 a1)
{
  _QWORD *v2; // r8
  __int64 ***v3; // r14
  __int64 *v4; // rax
  __int64 **v5; // rcx
  __int64 *i; // rcx
  __int64 *j; // rdx
  char *v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 **v14; // rcx
  __int64 *v15; // rdx
  __int64 *n; // rax
  __int64 *ii; // rcx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 jj; // rcx
  __int64 *kk; // rcx
  __int64 *v22; // rdi
  __int64 *k; // rax
  __int64 *m; // rcx
  __int128 v26; // [rsp+20h] [rbp-30h] BYREF
  char *v27; // [rsp+30h] [rbp-20h] BYREF
  char *v28; // [rsp+38h] [rbp-18h]
  __int64 v29; // [rsp+40h] [rbp-10h]

  if ( !sub_1800122C0((_QWORD *)(a1 + 536)) )
    return 0;
  v3 = (__int64 ***)(a1 + 552);
  v4 = **(__int64 ***)(a1 + 552);
  while ( !*((_BYTE *)v4 + 25) )
  {
    *(_BYTE *)v4[5] = 0;
    v5 = (__int64 **)v4[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v4 = i;
      v4 = i;
    }
    else
    {
      v4 = (__int64 *)v4[2];
      for ( j = *v5; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
  }
  (*(void (__fastcall **)(_QWORD, char **))(*(_QWORD *)*v2 + 16LL))(*v2, &v27);
  v8 = v27;
  v9 = (__int64)v28;
  if ( v27 != v28 )
  {
    do
    {
      v10 = (***(__int64 (__fastcall ****)(_QWORD))v8)(*(_QWORD *)v8);
      v11 = sub_1800F26AC(a1, v10);
      v26 = 0LL;
      v12 = v11[1];
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v26 = *(_OWORD *)v11;
      *(_BYTE *)v26 = 1;
      sub_1800F2C64(a1, v8, &v26);
      sub_180010910((__int64)&v26);
      v8 += 16;
    }
    while ( v8 != (char *)v9 );
    v9 = (__int64)v28;
    v8 = v27;
  }
  if ( v8 )
  {
    sub_1800126E8((__int64)v8, v9);
    sub_180010884(v27, (v29 - (_QWORD)v27) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  v13 = **v3;
  while ( v13 != (__int64 *)*v3 )
  {
    v14 = (__int64 **)v13[2];
    if ( *(_BYTE *)v13[5] )
    {
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( k = (__int64 *)v13[1]; !*((_BYTE *)k + 25) && v13 == (__int64 *)k[2]; k = (__int64 *)k[1] )
          v13 = k;
        v13 = k;
      }
      else
      {
        v13 = (__int64 *)v13[2];
        for ( m = *v14; !*((_BYTE *)m + 25); m = (__int64 *)*m )
          v13 = m;
      }
    }
    else
    {
      v15 = v13;
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( n = (__int64 *)v13[1]; !*((_BYTE *)n + 25) && v13 == (__int64 *)n[2]; n = (__int64 *)n[1] )
          v13 = n;
        v13 = n;
      }
      else
      {
        v13 = (__int64 *)v13[2];
        for ( ii = *v14; !*((_BYTE *)ii + 25); ii = (__int64 *)*ii )
          v13 = ii;
      }
      v18 = v15;
      v19 = v15[2];
      if ( *(_BYTE *)(v19 + 25) )
      {
        for ( jj = v15[1]; !*(_BYTE *)(jj + 25) && v18 == *(__int64 **)(jj + 16); jj = *(_QWORD *)(jj + 8) )
          v18 = (__int64 *)jj;
      }
      else
      {
        for ( kk = *(__int64 **)v19; !*((_BYTE *)kk + 25); kk = (__int64 *)*kk )
          ;
      }
      v22 = sub_18002ABBC(v3, v15);
      sub_180010910((__int64)(v22 + 5));
      sub_180010884((char *)v22, 0x38uLL);
    }
  }
  return 1;
}
