/*
 * XREFs of sub_1800D5EA0 @ 0x1800D5EA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18001FC84 @ 0x18001FC84 (sub_18001FC84.c)
 *     sub_180026618 @ 0x180026618 (sub_180026618.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180054130 @ 0x180054130 (sub_180054130.c)
 *     sub_1800543D0 @ 0x1800543D0 (sub_1800543D0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800C9EC8 @ 0x1800C9EC8 (sub_1800C9EC8.c)
 *     sub_1800CF0C8 @ 0x1800CF0C8 (sub_1800CF0C8.c)
 *     sub_1800D57BC @ 0x1800D57BC (sub_1800D57BC.c)
 *     sub_1800D58E4 @ 0x1800D58E4 (sub_1800D58E4.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 *     sub_1800D6AF4 @ 0x1800D6AF4 (sub_1800D6AF4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800D5EA0(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int16 v9; // cx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // r14
  __int64 v15; // rbx
  _QWORD *v16; // rax
  void **v17; // rax
  int v18; // r8d
  int v19; // r13d
  int v20; // r8d
  __int64 v21; // rbx
  void **v22; // rax
  _DWORD *v23; // rax
  _QWORD *v24; // rax
  void (__fastcall *v25)(__int64, _QWORD *); // r8
  __int64 v26; // r9
  BOOL v27; // edx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, __int64, int *, __int64); // rdi
  int v32; // eax
  const char *v33; // rax
  __int64 v34; // rdx
  __int64 result; // rax
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+38h] [rbp-C8h]
  _DWORD *v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+84h] [rbp-7Ch]
  __int128 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h]
  _QWORD pExceptionObject[9]; // [rsp+B8h] [rbp-48h] BYREF
  int v48; // [rsp+100h] [rbp+0h] BYREF
  char v49; // [rsp+104h] [rbp+4h]
  bool v50; // [rsp+105h] [rbp+5h]
  bool v51; // [rsp+106h] [rbp+6h]
  _BYTE v52[56]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v53; // [rsp+140h] [rbp+40h]
  int v54; // [rsp+1A8h] [rbp+A8h] BYREF
  int v55; // [rsp+1B0h] [rbp+B0h] BYREF

  v55 = a3;
  v54 = a2;
  sub_180011C50(a1 + 72, &v38);
  if ( v39 )
    sub_180010530(v39);
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    sub_180010DD0(&v45, (__int64)"Invalid format for DepthBuffer");
    v7 = sub_180010DD0(
           &v38,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v7, v8, (const char *)&v45, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180011C50(a1 + 72, &v36);
  sub_18001FC84(&v40, &v36);
  if ( v37 )
    sub_180010530(v37);
  v9 = a5;
  *(_BYTE *)(a1 + 256) = (a5 & 0x40) != 0;
  v53 = 0LL;
  v48 = a4;
  v49 = HIBYTE(v9) & 1;
  v50 = (v9 & 0x400) != 0;
  v51 = (v9 & 0x200) != 0;
  pExceptionObject[0] = a1;
  pExceptionObject[1] = &v54;
  pExceptionObject[2] = &v55;
  pExceptionObject[3] = &a5;
  pExceptionObject[4] = &v40;
  sub_1800D57BC((__int64)v52);
  a5 = a5 & 0xFFFFF8BA | 1;
  if ( v50 && a4 != 1 )
  {
    sub_180010DD0(&v45, (__int64)"Readable stencil requested for stencil-buffer format that does not support stencil");
    v10 = sub_180010DD0(
            &v38,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v10, v11, (__int64)&v45, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v12 = sub_180026618((__int64)v38);
  v13 = sub_180016268(v12, &v36);
  v14 = (__int64 *)(a1 + 128);
  sub_180011020((_QWORD *)(a1 + 128), v13);
  if ( v37 )
    sub_180010530(v37);
  v15 = *v14;
  v16 = sub_18002963C(a1, &v45);
  v17 = (void **)sub_18001C61C(&v36, v16, (__int64)"Shared Texture");
  sub_180029824(v15, v17);
  sub_180011B24((__int64)&v45);
  sub_180029870(*v14, 1, 0);
  v19 = v18 + 2;
  sub_180029870(*v14, v18 + 2, v18);
  sub_180029870(*v14, v20 + 4, v20);
  if ( v49 || v50 || v51 )
  {
    sub_180054130((__int64)v38, &v45);
    v21 = v45;
    v22 = (void **)sub_180010DD0(&v38, (__int64)"DepthBuffer Readable Sampler");
    sub_180029824(v21, v22);
    if ( v49 )
      sub_1800124F8((__int64 *)(a1 + 208), &v45);
    if ( v50 )
      sub_1800124F8((__int64 *)(a1 + 240), &v45);
    if ( v51 )
      sub_1800124F8((__int64 *)(a1 + 224), &v45);
    sub_1800543D0(&v38);
    v23 = v38;
    *v38 = 0;
    v23[1] = v19;
    v23[2] = v19;
    v23[3] = v19;
    v24 = sub_18001246C(&v36, &v38);
    v25(v26, v24);
    if ( v39 )
      sub_180010530(v39);
    if ( v46 )
      sub_180010530(v46);
  }
  v44 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v27 = v19;
  else
    v27 = (a5 & 8) != 0;
  v42 = sub_1800C9EC8(a4, v27);
  if ( *(_BYTE *)(a1 + 256) )
  {
    v43 = 5;
    v28 = sub_1800D58E4((__int64)pExceptionObject, (__int64)&v48);
    sub_1800D6AF4(a1, v28);
  }
  else
  {
    v43 = 3;
    v29 = sub_1800D58E4((__int64)pExceptionObject, (__int64)&v48);
    sub_1800D665C(a1, v29);
  }
  sub_1800C589C(v40, &v36);
  sub_18001246C(&v45, (_QWORD *)(a1 + 96));
  sub_180017600((__int64)&v38);
  sub_1800CF0C8((__int64)v38, &v45);
  v30 = v36;
  v31 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v36 + 80LL);
  sub_18000E72C((__int64 *)(a1 + 112));
  v32 = v31(v30, v45, &v42, a1 + 112);
  sub_1800C7750(v40, v32);
  v33 = (const char *)sub_18002963C(a1, pExceptionObject);
  if ( *((_QWORD *)v33 + 3) >= 0x10uLL )
    v33 = *(const char **)v33;
  sub_18001145C(*(_QWORD *)(a1 + 112), v33);
  sub_180011B24((__int64)pExceptionObject);
  sub_18000E72C(&v45);
  if ( v39 )
    sub_180010530(v39);
  sub_18000E72C(&v36);
  result = sub_18001DE1C((__int64)v52, v34);
  if ( v41 )
    return sub_180010530(v41);
  return result;
}
