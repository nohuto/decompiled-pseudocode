/*
 * XREFs of sub_180037678 @ 0x180037678
 * Callers:
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18001FD9C @ 0x18001FD9C (sub_18001FD9C.c)
 *     sub_18001FEA4 @ 0x18001FEA4 (sub_18001FEA4.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_180034924 @ 0x180034924 (sub_180034924.c)
 *     sub_180034EC0 @ 0x180034EC0 (sub_180034EC0.c)
 *     sub_1800422EC @ 0x1800422EC (sub_1800422EC.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800E0830 @ 0x1800E0830 (sub_1800E0830.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall sub_180037678(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v22[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v24[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v26[8]; // [rsp+110h] [rbp+10h] BYREF

  sub_18002A0C4((__int64)(a1 + 1), (__int64)v23);
  sub_18002A0C4(*a2 + 16, (__int64)v22);
  sub_180034924(v4, &v14, a2);
  if ( (_QWORD)v14 )
    sub_1800E0830();
  if ( *((_QWORD *)&v14 + 1) )
    sub_180010530(*((__int64 *)&v14 + 1));
  v5 = sub_18001246C(&v15, a1 + 58);
  sub_18001FD9C(
    v26,
    v5,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    750,
    (__int64)"UpdateScene",
    (__int64)"PreUpdateScene");
  sub_180010DD0(v25, (__int64)"PreUpdateScene");
  v6 = sub_1800340DC((__int64)a1, &v16);
  sub_180015604(&v14, v6);
  sub_180030FD4(&v19, (__int64)&v14);
  if ( *((_QWORD *)&v14 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v14 + 1));
  if ( v17 )
    sub_180010530(v17);
  sub_180011B24((__int64)v25);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 96LL))(a1, a2);
  sub_180031CF0((__int64)&v19);
  sub_18001FEA4((__int64)v26);
  v7 = sub_18001246C(&v16, a1 + 58);
  sub_18001FD9C(
    v24,
    v7,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    765,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PreSceneUpdate");
  sub_180010DD0(v26, (__int64)"kSpectreRenderCB_PreSceneUpdate");
  v8 = sub_1800340DC((__int64)a1, &v19);
  sub_180015604(&v14, v8);
  sub_180030FD4(v25, (__int64)&v14);
  if ( *((_QWORD *)&v14 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v14 + 1));
  if ( v20 )
    sub_180010530(v20);
  sub_180011B24((__int64)v26);
  v16 = a1[121];
  LODWORD(v17) = 1;
  sub_180011CA0(&v18);
  sub_1800A0450(v16, &v16);
  v15 = 0LL;
  v14 = 0LL;
  sub_180034EC0((__int64)a1, 1u, (__int64)&v14, &v15);
  sub_180031CF0((__int64)v25);
  sub_18001FEA4((__int64)v24);
  v9 = sub_18001246C(&v19, a1 + 58);
  sub_18001FD9C(
    v24,
    v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    771,
    (__int64)"UpdateScene",
    (__int64)"Update Scene");
  sub_180010DD0(v26, (__int64)"Update Scene");
  v10 = sub_1800340DC((__int64)a1, &v16);
  sub_180015604(&v15, v10);
  sub_180030FD4(v25, (__int64)&v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v15 + 1));
  if ( v17 )
    sub_180010530(v17);
  sub_180011B24((__int64)v26);
  sub_1800422EC(*a2, a1 + 46);
  sub_180031CF0((__int64)v25);
  sub_18001FEA4((__int64)v24);
  v11 = sub_18001246C(&v19, a1 + 58);
  sub_18001FD9C(
    v24,
    v11,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    777,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PostSceneUpdate");
  sub_180010DD0(v26, (__int64)"kSpectreRenderCB_PostSceneUpdate");
  v12 = sub_1800340DC((__int64)a1, &v16);
  sub_180015604(&v15, v12);
  sub_180030FD4(v25, (__int64)&v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_180010574(*((volatile signed __int32 **)&v15 + 1));
  if ( v17 )
    sub_180010530(v17);
  sub_180011B24((__int64)v26);
  v19 = a1[121];
  LODWORD(v20) = 2;
  sub_180011CA0(&v21);
  sub_1800A0450(v19, &v19);
  v15 = 0LL;
  v14 = 0LL;
  sub_180034EC0((__int64)a1, 2u, (__int64)&v14, &v15);
  sub_180031CF0((__int64)v25);
  sub_18001FEA4((__int64)v24);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 104LL))(a1, a2);
  sub_180010F54((__int64)v22);
  return sub_180010F54((__int64)v23);
}
