/*
 * XREFs of sub_180035F18 @ 0x180035F18
 * Callers:
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_18001FD9C @ 0x18001FD9C (sub_18001FD9C.c)
 *     sub_18001FEA4 @ 0x18001FEA4 (sub_18001FEA4.c)
 *     sub_180030FD4 @ 0x180030FD4 (sub_180030FD4.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 *     sub_1800340DC @ 0x1800340DC (sub_1800340DC.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_180034EC0 @ 0x180034EC0 (sub_180034EC0.c)
 *     sub_18004F704 @ 0x18004F704 (sub_18004F704.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_180035F18(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r9
  __int64 v22; // rax
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-48h]
  _BYTE v38[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v39; // [rsp+C8h] [rbp-38h]
  _QWORD v40[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v41[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v42[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v43[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v44[4]; // [rsp+190h] [rbp+90h] BYREF

  v8 = a1 + 58;
  v9 = sub_18001246C(&v29, a1 + 58);
  sub_18001FD9C(
    v42,
    v9,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
    1017,
    (__int64)"RenderContent",
    (__int64)"RenderContent");
  sub_180010DD0(v44, (__int64)"RenderContent");
  v10 = sub_1800340DC((__int64)a1, &v36);
  sub_180015604(&v29, v10);
  sub_180030FD4(v41, (__int64)&v29);
  if ( v30 )
    sub_180010574(v30);
  if ( v37 )
    sub_180010530(v37);
  sub_180011B24((__int64)v44);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 376LL))(*a4, v38);
  sub_180011C50(v11, &v29);
  if ( v39 )
    sub_180010574(v39);
  if ( v29 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29) )
  {
    v12 = sub_18001246C(&v24, v8);
    sub_18001FD9C(
      v40,
      v12,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1025,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_PreRender");
    sub_180010DD0(v43, (__int64)"kSpectreRenderCB_PreRender");
    v13 = sub_1800340DC((__int64)a1, &v33);
    sub_180015604(&v24, v13);
    sub_180030FD4(v35, (__int64)&v24);
    if ( v25 )
      sub_180010574(v25);
    if ( v34 )
      sub_180010530(v34);
    sub_180011B24((__int64)v43);
    v26 = a1[121];
    v27 = 3;
    sub_180011CA0(&v28);
    sub_1800A0450(v26, &v26);
    sub_18001246C(&v31, a4);
    v14 = sub_18001246C(&v26, &v29);
    sub_180034EC0((__int64)a1, 3u, (__int64)v14, v15);
    sub_180031CF0((__int64)v35);
    sub_18001FEA4((__int64)v40);
    v16 = sub_18001246C(&v26, v8);
    sub_18001FD9C(
      v40,
      v16,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1030,
      (__int64)"RenderContent",
      (__int64)"RenderScene");
    sub_180010DD0(v43, (__int64)"RenderScene");
    v17 = sub_1800340DC((__int64)a1, &v31);
    sub_180015604(&v24, v17);
    sub_180030FD4(v35, (__int64)&v24);
    if ( v25 )
      sub_180010574(v25);
    if ( v32 )
      sub_180010530(v32);
    sub_180011B24((__int64)v43);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64 *, _QWORD *))(*a1 + 128LL))(a1, a2, a3, &v29, a4);
    sub_180031CF0((__int64)v35);
    sub_18001FEA4((__int64)v40);
    v18 = sub_18001246C(&v26, v8);
    sub_18001FD9C(
      v40,
      v18,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\engine.cpp",
      1036,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_EndFrame");
    sub_180010DD0(v43, (__int64)"kSpectreRenderCB_EndFrame");
    v19 = sub_1800340DC((__int64)a1, &v31);
    sub_180015604(&v24, v19);
    sub_180030FD4(v35, (__int64)&v24);
    if ( v25 )
      sub_180010574(v25);
    if ( v32 )
      sub_180010530(v32);
    sub_180011B24((__int64)v43);
    v26 = a1[121];
    v27 = 5;
    sub_180011CA0(&v28);
    sub_1800A0450(v26, &v26);
    sub_18001246C(&v26, a4);
    v20 = sub_18001246C(&v33, &v29);
    sub_180034EC0((__int64)a1, 5u, (__int64)v20, v21);
    sub_180031CF0((__int64)v35);
    sub_18001FEA4((__int64)v40);
  }
  if ( v30 )
    sub_180010530((__int64)v30);
  v22 = sub_180034870((__int64)a1);
  sub_18004F704(v22);
  sub_180031CF0((__int64)v41);
  return sub_18001FEA4((__int64)v42);
}
