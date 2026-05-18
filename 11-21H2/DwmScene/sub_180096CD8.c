/*
 * XREFs of sub_180096CD8 @ 0x180096CD8
 * Callers:
 *     sub_180096B60 @ 0x180096B60 (sub_180096B60.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_18002BAAC @ 0x18002BAAC (sub_18002BAAC.c)
 *     sub_18009746C @ 0x18009746C (sub_18009746C.c)
 *     sub_18009A240 @ 0x18009A240 (sub_18009A240.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180096CD8(__int64 *a1, __int64 *a2)
{
  _DWORD *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r9d
  int v8; // r8d
  unsigned int v9; // esi
  _QWORD *v10; // rax
  __int128 v11; // kr00_16
  __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF

  sub_18002B740((__int64)a1, a2);
  (*(void (__fastcall **)(__int64 *, __int128 *, __int64))(*a1 + 56))(a1, &v14, *a2);
  v4 = (_DWORD *)a1[14];
  if ( v4 )
  {
    v5 = v4[5];
    v6 = v4[6];
    v7 = v4[4];
    v8 = v4[2];
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
  }
  sub_18009A240(v14, a1[17], v8, v7, v6, v5);
  v9 = sub_180028544(*a2);
  v10 = (_QWORD *)sub_180029E58(a1 + 15, v9);
  v11 = v14;
  v14 = 0LL;
  v15[0] = *v10;
  *v10 = v11;
  v15[1] = v10[1];
  v10[1] = *((_QWORD *)&v11 + 1);
  sub_180010910((__int64)v15);
  v12 = a1[14];
  if ( v12 && *(_DWORD *)(v12 + 24) == 2 )
    sub_18009746C(a1, *a2);
  sub_18002BAAC((__int64)a1, v9);
  return sub_180010910((__int64)&v14);
}
