/*
 * XREFs of sub_1800D665C @ 0x1800D665C
 * Callers:
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015EE4 @ 0x180015EE4 (sub_180015EE4.c)
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18001FC84 @ 0x18001FC84 (sub_18001FC84.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_180055DE8 @ 0x180055DE8 (sub_180055DE8.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CD128 @ 0x1800CD128 (sub_1800CD128.c)
 *     sub_1800CF0C8 @ 0x1800CF0C8 (sub_1800CF0C8.c)
 *     sub_1800D5C60 @ 0x1800D5C60 (sub_1800D5C60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800D665C(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 *v5; // rax
  __int64 v6; // r13
  _QWORD *v7; // rax
  int v8; // r8d
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rax
  _QWORD *v12; // rax
  int v13; // r8d
  int v14; // r9d
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, __int64, int *, __int64 *); // rdi
  _QWORD *v21; // rax
  __int64 v22; // r8
  const char *v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rax
  __int64 v26; // r9
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h]
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+7Ch] [rbp-84h]
  int v39; // [rsp+84h] [rbp-7Ch]
  __int64 v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 *v42; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-40h]
  _BYTE v46[8]; // [rsp+D8h] [rbp-28h] BYREF
  int v47; // [rsp+E0h] [rbp-20h]
  _QWORD pExceptionObject[7]; // [rsp+108h] [rbp+8h] BYREF

  v41 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v5 = sub_180016268(v4, &v28);
  sub_180011020((_QWORD *)(a1 + 128), v5);
  if ( v29 )
    sub_180010530(v29);
  v6 = a2 + 8;
  v7 = sub_18001246C(&v28, (_QWORD *)(a1 + 128));
  sub_1800D5C60(a2 + 8, (__int64)v7, v8, 4);
  v9 = sub_1800566F0(*(_QWORD *)(a1 + 128), &v28, *(_DWORD *)(a1 + 88));
  sub_180011020((_QWORD *)(a1 + 96), v9);
  if ( v29 )
    sub_180010530(v29);
  sub_180011C50(a1 + 72, &v42);
  sub_18001FC84(&v35, (__int64 *)&v42);
  if ( v43 )
    sub_180010530(v43);
  if ( *(_BYTE *)(a2 + 4) )
  {
    v11 = sub_180016268(v4, &v28);
    sub_180011020((_QWORD *)(a1 + 144), v11);
    if ( v29 )
      sub_180010530(v29);
    sub_180029870(*(_QWORD *)(a1 + 144), 2, 0);
    v12 = sub_18001246C(&v28, (_QWORD *)(a1 + 144));
    v14 = 256;
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 5) )
      goto LABEL_33;
    v15 = sub_180016268(v4, &v28);
    sub_180011020((_QWORD *)(a1 + 192), v15);
    if ( v29 )
      sub_180010530(v29);
    sub_180029870(*(_QWORD *)(a1 + 192), 2, 0);
    v12 = sub_18001246C(&v28, (_QWORD *)(a1 + 192));
    v14 = 1024;
  }
  sub_1800D5C60(a2 + 8, (__int64)v12, v13, v14);
  if ( *(_BYTE *)(a2 + 5) && sub_180011DD0((_QWORD *)(a1 + 192)) )
  {
    sub_1800566F0(*(_QWORD *)(a1 + 144), &v28, *(_DWORD *)(a1 + 88));
    sub_18001246C(&v42, &v28);
    v16 = (__int64 *)sub_180017600((__int64)&v30);
    sub_1800CF0C8(*v16, &v32);
    if ( v31 )
      sub_180010530(v31);
    v17 = v32;
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v32 + 80LL))(v32, v46);
    v40 = 0LL;
    v37 = 47;
    v38 = 4LL;
    v39 = v47;
    v33 = 0LL;
    v18 = sub_1800C589C(v35, &v30);
    v19 = *v18;
    v20 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64 *))(*(_QWORD *)*v18 + 56LL);
    sub_18000E72C(&v33);
    LODWORD(v20) = v20(v19, v17, &v37, &v33);
    sub_18000E72C(&v30);
    sub_1800C7750(v35, (int)v20);
    if ( (int)v20 < 0 )
    {
      sub_180010DD0(&v42, (__int64)"Failed to create ShaderResourceView for stencil buffer");
      v21 = sub_180010DD0(
              &v44,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
      sub_18006ED7C(pExceptionObject, (__int64)v21, v22, (const char *)&v42, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v23 = (const char *)sub_18002963C(a1, &v44);
    if ( *((_QWORD *)v23 + 3) >= 0x10uLL )
      v23 = *(const char **)v23;
    sub_18001145C(v33, v23);
    sub_180011B24((__int64)&v44);
    v24 = sub_180015EE4(v35, &v44);
    sub_18001FC84(&v42, v24);
    if ( v45 )
      sub_180010530(v45);
    v34 = v33;
    sub_180011520(&v34);
    v30 = v17;
    sub_180011520(&v30);
    sub_1800CD128(v42, &v30, &v34, 0x400u);
    v25 = sub_180016268(v4, &v30);
    sub_180011020((_QWORD *)(a1 + 192), v25);
    if ( v31 )
      sub_180010530(v31);
    sub_180029870(*(_QWORD *)(a1 + 192), 2, 0);
    sub_180011DA0(&v30, &v42);
    sub_180055DE8(v26, &v30);
    if ( v31 )
      sub_180010530(v31);
    if ( v43 )
      sub_180010530(v43);
    sub_18000E72C(&v33);
    sub_18000E72C(&v32);
    if ( v29 )
      sub_180010530(v29);
  }
LABEL_33:
  if ( v36 )
    sub_180010530(v36);
  return sub_18001DE1C(v6, v10);
}
