/*
 * XREFs of sub_1800354F0 @ 0x1800354F0
 * Callers:
 *     sub_1800671B0 @ 0x1800671B0 (sub_1800671B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18001FD9C @ 0x18001FD9C (sub_18001FD9C.c)
 *     sub_18001FEA4 @ 0x18001FEA4 (sub_18001FEA4.c)
 *     sub_180026580 @ 0x180026580 (sub_180026580.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_180034EC0 @ 0x180034EC0 (sub_180034EC0.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800A1674 @ 0x1800A1674 (sub_1800A1674.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800354F0(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v15; // [rsp+48h] [rbp-B8h]
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+58h] [rbp-A8h]
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h] BYREF
  __int64 v22[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v23[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v24[4]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = sub_18001246C(&v14, (_QWORD *)(a1 + 464));
  sub_18001FD9C(
    v23,
    v7,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1511,
    (__int64)"PostRenderScene",
    (__int64)"kSpectreRenderCB_PostRender");
  sub_180010DD0(v24, (__int64)"kSpectreRenderCB_PostRender");
  v8 = sub_1800340DC(a1, &v19);
  sub_180015604(&v14, v8);
  sub_180030FD4(v22, (__int64)&v14);
  if ( v15 )
    sub_180010574(v15);
  if ( v20 )
    sub_180010530(v20);
  sub_180011B24((__int64)v24);
  v16 = *(_QWORD *)(a1 + 968);
  v17 = 4;
  sub_180011CA0(&v18);
  sub_1800A0450(v16, &v16);
  sub_18001246C(&v21, a4);
  v9 = sub_18001246C(&v16, a3);
  sub_180034EC0(a1, 4u, (__int64)v9, v10);
  sub_180031CF0((__int64)v22);
  sub_18001FEA4((__int64)v23);
  v11 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 184LL))(*a4);
  v12 = sub_180026580(*a3);
  return sub_1800A1674(v11, v12);
}
