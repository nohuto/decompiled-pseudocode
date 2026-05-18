/*
 * XREFs of sub_180044208 @ 0x180044208
 * Callers:
 *     sub_180060148 @ 0x180060148 (sub_180060148.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18002A6F0 @ 0x18002A6F0 (sub_18002A6F0.c)
 *     sub_180060A34 @ 0x180060A34 (sub_180060A34.c)
 *     sub_180060CD0 @ 0x180060CD0 (sub_180060CD0.c)
 *     sub_1800829E4 @ 0x1800829E4 (sub_1800829E4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180044208(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  __int64 *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h]

  v4 = a1 + 17;
  sub_1800124F8(a1 + 17, a2);
  v5 = (_QWORD *)sub_180060CD0(*a2, 2LL);
  sub_18001246C(&v11, v5);
  v6 = (__int64 *)sub_1800829E4(v11, &v13);
  sub_180011020(a1 + 15, v6);
  if ( v14 )
    sub_180010530(v14);
  v7 = (_QWORD *)sub_180060A34(*v4, &v13);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v7 + 16LL))(*v7, a1);
  if ( v14 )
    sub_180010530(v14);
  v8 = (_QWORD *)sub_180011D4C((__int64)(a1 + 12), &v13);
  result = (__int64)sub_18002A6F0(a1 + 27, v8);
  if ( v14 )
    result = sub_180010530(v14);
  if ( v12 )
    result = sub_180010530(v12);
  v10 = a2[1];
  if ( v10 )
    return sub_180010530(v10);
  return result;
}
