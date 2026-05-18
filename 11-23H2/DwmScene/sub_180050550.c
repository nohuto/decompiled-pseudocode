/*
 * XREFs of sub_180050550 @ 0x180050550
 * Callers:
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001CA2C @ 0x18001CA2C (sub_18001CA2C.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18004D8F4 @ 0x18004D8F4 (sub_18004D8F4.c)
 *     sub_18004D968 @ 0x18004D968 (sub_18004D968.c)
 *     sub_180050C00 @ 0x180050C00 (sub_180050C00.c)
 *     sub_180050D34 @ 0x180050D34 (sub_180050D34.c)
 *     sub_18006102C @ 0x18006102C (sub_18006102C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180050550(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 *j; // rbx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // rbx
  __int64 result; // rax
  __int64 k; // rbx
  _BYTE *v15; // rax
  __int64 m; // rbx
  _BYTE *v17; // rax
  __int64 v18[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 + 18560;
  v3 = **(_QWORD **)(a1 + 18560);
  v19 = v3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    sub_18006102C(*(_QWORD *)(v3 + 64));
    sub_18001D3F8(&v19);
    v3 = v19;
  }
  v4 = a1 + 18592;
  j = **(__int64 ***)(a1 + 18592);
  while ( !*((_BYTE *)j + 25) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)j[8] + 8LL))(j[8]);
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v8 = *v6;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
  v9 = *(_QWORD *)(a1 + 18576);
  sub_18004D8F4(a1 + 18576, a1 + 18576, *(char **)(v9 + 8));
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *(_QWORD *)(a1 + 18584) = 0LL;
  sub_180050C00(v1);
  v10 = *(_QWORD **)v4;
  sub_18004D968(a1 + 18592, a1 + 18592, *(char **)(*(_QWORD *)v4 + 8LL));
  v10[1] = v10;
  *v10 = v10;
  v10[2] = v10;
  *(_QWORD *)(a1 + 18600) = 0LL;
  v11 = *(_QWORD **)(a1 + 16);
  sub_18001CA2C(a1 + 16, a1 + 16, v11[1]);
  v11[1] = v11;
  *v11 = v11;
  v11[2] = v11;
  *(_QWORD *)(a1 + 24) = 0LL;
  v12 = *(_QWORD **)(a1 + 2088);
  sub_18001CA2C(a1 + 2088, a1 + 2088, v12[1]);
  v12[1] = v12;
  *v12 = v12;
  v12[2] = v12;
  *(_OWORD *)v18 = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  sub_180011020((_QWORD *)(a1 + 18648), v18);
  if ( v18[1] )
    sub_180010530(v18[1]);
  *(_OWORD *)v18 = 0LL;
  result = (__int64)sub_180011020((_QWORD *)(a1 + 18632), v18);
  if ( v18[1] )
    result = sub_180010530(v18[1]);
  for ( k = a1 + 32; k != a1 + 2080; k += 32LL )
  {
    v15 = (_BYTE *)k;
    if ( *(_QWORD *)(k + 24) >= 0x10uLL )
      v15 = *(_BYTE **)k;
    *(_QWORD *)(k + 16) = 0LL;
    *v15 = 0;
    result = sub_180050D34(k);
  }
  for ( m = a1 + 2104; m != a1 + 18488; m += 32LL )
  {
    v17 = (_BYTE *)m;
    if ( *(_QWORD *)(m + 24) >= 0x10uLL )
      v17 = *(_BYTE **)m;
    *(_QWORD *)(m + 16) = 0LL;
    *v17 = 0;
    result = sub_180050D34(m);
  }
  return result;
}
