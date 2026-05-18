/*
 * XREFs of sub_180057AF8 @ 0x180057AF8
 * Callers:
 *     sub_180038370 @ 0x180038370 (sub_180038370.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001E104 @ 0x18001E104 (sub_18001E104.c)
 *     sub_1800547AC @ 0x1800547AC (sub_1800547AC.c)
 *     sub_180054858 @ 0x180054858 (sub_180054858.c)
 *     sub_1800584E0 @ 0x1800584E0 (sub_1800584E0.c)
 *     sub_18006986C @ 0x18006986C (sub_18006986C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180057AF8(__int64 a1)
{
  _QWORD *v1; // r15
  __int64 *j; // rbx
  __int64 **v4; // rax
  __int64 *i; // rax
  __int64 *v6; // rcx
  __int64 v7; // r14
  __int64 *m; // rbx
  __int64 **v9; // rax
  __int64 *k; // rax
  __int64 *v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 result; // rax
  __int64 n; // rbx
  _BYTE *v19; // rax
  __int64 ii; // rbx
  _BYTE *v21; // rax
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+28h] [rbp-30h]
  _OWORD v24[2]; // [rsp+30h] [rbp-28h] BYREF

  v1 = (_QWORD *)(a1 + 18560);
  j = **(__int64 ***)(a1 + 18560);
  while ( !*((_BYTE *)j + 25) )
  {
    sub_18006986C(j[8]);
    v4 = (__int64 **)j[2];
    if ( *((_BYTE *)v4 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v6 = *v4;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
        j = v6;
    }
  }
  v7 = a1 + 18592;
  m = **(__int64 ***)(a1 + 18592);
  while ( !*((_BYTE *)m + 25) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)m[8] + 8LL))(m[8]);
    v9 = (__int64 **)m[2];
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( k = (__int64 *)m[1]; !*((_BYTE *)k + 25) && m == (__int64 *)k[2]; k = (__int64 *)k[1] )
        m = k;
      m = k;
    }
    else
    {
      v11 = *v9;
      for ( m = (__int64 *)m[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
        m = v11;
    }
  }
  v12 = *(_QWORD *)(a1 + 18576);
  sub_1800547AC(a1 + 18576, a1 + 18576, *(char **)(v12 + 8));
  *(_QWORD *)(v12 + 8) = v12;
  *(_QWORD *)v12 = v12;
  *(_QWORD *)(v12 + 16) = v12;
  *(_QWORD *)(a1 + 18584) = 0LL;
  v13 = (_QWORD *)*v1;
  sub_180054858((__int64)v1, (__int64)v1, *(char **)(*v1 + 8LL));
  v13[1] = v13;
  *v13 = v13;
  v13[2] = v13;
  v1[1] = 0LL;
  v14 = *(_QWORD **)v7;
  sub_180054858(a1 + 18592, a1 + 18592, *(char **)(*(_QWORD *)v7 + 8LL));
  v14[1] = v14;
  *v14 = v14;
  v14[2] = v14;
  *(_QWORD *)(a1 + 18600) = 0LL;
  v15 = *(_QWORD *)(a1 + 16);
  sub_18001E104(a1 + 16, a1 + 16, *(char **)(v15 + 8));
  *(_QWORD *)(v15 + 8) = v15;
  *(_QWORD *)v15 = v15;
  *(_QWORD *)(v15 + 16) = v15;
  *(_QWORD *)(a1 + 24) = 0LL;
  v16 = *(_QWORD *)(a1 + 2088);
  sub_18001E104(a1 + 2088, a1 + 2088, *(char **)(v16 + 8));
  *(_QWORD *)(v16 + 8) = v16;
  *(_QWORD *)v16 = v16;
  *(_QWORD *)(v16 + 16) = v16;
  *(_QWORD *)(a1 + 2096) = 0LL;
  v22 = *(_QWORD *)(a1 + 18648);
  v23 = *(_QWORD *)(a1 + 18656);
  v24[0] = 0LL;
  *(_QWORD *)(a1 + 18648) = 0LL;
  *(_QWORD *)(a1 + 18656) = 0LL;
  sub_180010910((__int64)&v22);
  sub_180010910((__int64)v24);
  v22 = *(_QWORD *)(a1 + 18632);
  v23 = *(_QWORD *)(a1 + 18640);
  v24[0] = 0LL;
  *(_QWORD *)(a1 + 18632) = 0LL;
  *(_QWORD *)(a1 + 18640) = 0LL;
  sub_180010910((__int64)&v22);
  result = sub_180010910((__int64)v24);
  for ( n = a1 + 32; n != a1 + 2080; n += 32LL )
  {
    v19 = (_BYTE *)n;
    if ( *(_QWORD *)(n + 24) >= 0x10uLL )
      v19 = *(_BYTE **)n;
    *(_QWORD *)(n + 16) = 0LL;
    *v19 = 0;
    result = sub_1800584E0(n);
  }
  for ( ii = a1 + 2104; ii != a1 + 18488; ii += 32LL )
  {
    v21 = (_BYTE *)ii;
    if ( *(_QWORD *)(ii + 24) >= 0x10uLL )
      v21 = *(_BYTE **)ii;
    *(_QWORD *)(ii + 16) = 0LL;
    *v21 = 0;
    result = sub_1800584E0(ii);
  }
  return result;
}
