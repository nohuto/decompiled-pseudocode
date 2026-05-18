/*
 * XREFs of sub_1800D7D00 @ 0x1800D7D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800C8B38 @ 0x1800C8B38 (sub_1800C8B38.c)
 *     sub_1800D048C @ 0x1800D048C (sub_1800D048C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D7D00(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v4 = sub_1800C8B38(&v7, a2);
  sub_180011020((_QWORD *)(a1 + 104), v4);
  if ( v8 )
    sub_180010530(v8);
  sub_1800D048C(*(_QWORD *)(a1 + 104), &v9);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 216LL))(v9, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 0;
  result = sub_18000E72C(&v9);
  v6 = a2[1];
  if ( v6 )
    return sub_180010530(v6);
  return result;
}
