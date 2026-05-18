/*
 * XREFs of sub_1800DABC8 @ 0x1800DABC8
 * Callers:
 *     sub_1800DB0F0 @ 0x1800DB0F0 (sub_1800DB0F0.c)
 * Callees:
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 *     sub_1800DAF68 @ 0x1800DAF68 (sub_1800DAF68.c)
 *     sub_1800DB030 @ 0x1800DB030 (sub_1800DB030.c)
 *     sub_1800DB070 @ 0x1800DB070 (sub_1800DB070.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DABC8(__int64 *a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v8; // r15
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int128 v13; // xmm6
  char v15[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h]
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]

  v8 = *a1;
  sub_1800DB030(v15, a1);
  v9 = v16;
  *(_DWORD *)(v16 + 32) = *a3;
  v10 = *a4;
  *(_QWORD *)(v9 + 40) = *a4;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)v16 = v8;
  *(_QWORD *)(v16 + 8) = v8;
  *(_QWORD *)(v16 + 16) = v8;
  *(_BYTE *)(v16 + 24) = 0;
  *(_BYTE *)(v16 + 25) = 0;
  v11 = v16;
  v12 = sub_1800DAF68(a1, &v17, v16 + 32);
  v13 = *(_OWORD *)v12;
  v18 = *(_QWORD *)(v12 + 16);
  if ( a1[1] == 0x555555555555555LL )
    sub_18001DDFC();
  v16 = 0LL;
  sub_1800DB070(v15);
  v17 = v13;
  *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v17, v11);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
