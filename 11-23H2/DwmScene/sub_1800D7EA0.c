/*
 * XREFs of sub_1800D7EA0 @ 0x1800D7EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800C8B38 @ 0x1800C8B38 (sub_1800C8B38.c)
 *     sub_1800D048C @ 0x1800D048C (sub_1800D048C.c)
 *     sub_1800D7BD0 @ 0x1800D7BD0 (sub_1800D7BD0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D7EA0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp+10h]
  _QWORD *v15; // [rsp+60h] [rbp+18h]

  v15 = a3;
  v14 = a2;
  v6 = sub_1800D7BD0(&v11, a3);
  sub_180011020((_QWORD *)(a1 + 120), v6);
  if ( v12 )
    sub_180010530(v12);
  if ( *(_DWORD *)(a1 + 140) == 1 || *(_DWORD *)(a1 + 140) == 3 )
  {
    v7 = sub_1800C8B38(&v11, a2);
    sub_180011020((_QWORD *)(a1 + 104), v7);
    if ( v12 )
      sub_180010530(v12);
  }
  sub_1800D048C(*(_QWORD *)(a1 + 104), &v13);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 224LL))(v13, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 1;
  result = sub_18000E72C(&v13);
  v9 = a2[1];
  if ( v9 )
    result = sub_180010530(v9);
  v10 = a3[1];
  if ( v10 )
    return sub_180010530(v10);
  return result;
}
