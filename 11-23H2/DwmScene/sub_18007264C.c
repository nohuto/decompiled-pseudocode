/*
 * XREFs of sub_18007264C @ 0x18007264C
 * Callers:
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_18004FA5C @ 0x18004FA5C (sub_18004FA5C.c)
 *     sub_18004FB08 @ 0x18004FB08 (sub_18004FB08.c)
 *     sub_180072560 @ 0x180072560 (sub_180072560.c)
 *     sub_180085154 @ 0x180085154 (sub_180085154.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18007264C(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 *v12; // rax
  _QWORD *v13; // rax
  void (__fastcall *v14)(__int64, _QWORD *); // r8
  __int64 v15; // r11
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 v19; // [rsp+30h] [rbp-41h] BYREF
  __int64 v20; // [rsp+38h] [rbp-39h]
  _QWORD *v21; // [rsp+48h] [rbp-29h]
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  __int64 v23; // [rsp+58h] [rbp-19h]

  v21 = a5;
  if ( byte_1801D3D88 )
  {
    v9 = sub_180026618(*a3);
    v10 = sub_180034870(v9);
    sub_180010DD0(&v22, (__int64)"Global/PlanarReflection");
    sub_18004FA5C(v10, &v22);
    sub_180011B24((__int64)&v22);
    v11 = (_QWORD *)sub_18004FB08(v10, &v22);
    v12 = (__int64 *)sub_180085154(*v11);
    sub_180011020(a5, v12);
    if ( v20 )
      sub_180010530(v20);
    if ( v23 )
      sub_180010530(v23);
  }
  v13 = sub_18001246C(&v22, a3);
  v14(v15, v13);
  v16 = sub_18001246C(&v22, a5);
  v17 = sub_180072560(a1, &v19, *a3, a4, v16);
  sub_180011020(a5, v17);
  if ( v20 )
    sub_180010530(v20);
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *a5;
  a2[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  return a2;
}
