/*
 * XREFs of sub_1800356DC @ 0x1800356DC
 * Callers:
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
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
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_180034EC0 @ 0x180034EC0 (sub_180034EC0.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800356DC(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r9
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h]
  _QWORD v27[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v29[8]; // [rsp+F0h] [rbp-10h] BYREF

  v10 = (_QWORD *)(a1 + 464);
  v11 = sub_18001246C(&v18, (_QWORD *)(a1 + 464));
  sub_18001FD9C(
    v29,
    v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1050,
    (__int64)"PresentFrame",
    (__int64)"PresentFrame");
  sub_180010DD0(v28, (__int64)"PresentFrame");
  v12 = sub_1800340DC(a1, &v20);
  sub_180015604(&v18, v12);
  sub_180030FD4(&v22, (__int64)&v18);
  if ( v19 )
    sub_180010574(v19);
  if ( v21 )
    sub_180010530(v21);
  sub_180011B24((__int64)v28);
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)*a2 + 216LL))(*a2, a3, a4, a5, a6);
  sub_180031CF0((__int64)&v22);
  sub_18001FEA4((__int64)v29);
  v13 = sub_18001246C(&v20, v10);
  sub_18001FD9C(
    v27,
    v13,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1056,
    (__int64)"PresentFrame",
    (__int64)"kSpectreRenderCB_PostPresent");
  sub_180010DD0(v29, (__int64)"kSpectreRenderCB_PostPresent");
  v14 = sub_1800340DC(a1, &v25);
  sub_180015604(&v18, v14);
  sub_180030FD4(v28, (__int64)&v18);
  if ( v19 )
    sub_180010574(v19);
  if ( v26 )
    sub_180010530(v26);
  sub_180011B24((__int64)v29);
  v22 = *(_QWORD *)(a1 + 968);
  v23 = 6;
  sub_180011CA0(&v24);
  sub_1800A0450(v22, &v22);
  sub_18001246C(&v20, a3);
  v15 = sub_18001246C(&v22, a2);
  sub_180034EC0(a1, 6u, (__int64)v15, v16);
  sub_180031CF0((__int64)v28);
  return sub_18001FEA4((__int64)v27);
}
