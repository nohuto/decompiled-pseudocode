/*
 * XREFs of sub_1800CECC0 @ 0x1800CECC0
 * Callers:
 *     sub_1800D2AA0 @ 0x1800D2AA0 (sub_1800D2AA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001070C @ 0x18001070C (sub_18001070C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 *     sub_18001FC84 @ 0x18001FC84 (sub_18001FC84.c)
 *     sub_18002A4FC @ 0x18002A4FC (sub_18002A4FC.c)
 *     sub_1800566B0 @ 0x1800566B0 (sub_1800566B0.c)
 *     sub_180056744 @ 0x180056744 (sub_180056744.c)
 *     sub_18006EDE8 @ 0x18006EDE8 (sub_18006EDE8.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CC258 @ 0x1800CC258 (sub_1800CC258.c)
 *     sub_1800CC6D0 @ 0x1800CC6D0 (sub_1800CC6D0.c)
 *     sub_1800CCAE4 @ 0x1800CCAE4 (sub_1800CCAE4.c)
 *     sub_1800CEA10 @ 0x1800CEA10 (sub_1800CEA10.c)
 *     sub_1800CF0F4 @ 0x1800CF0F4 (sub_1800CF0F4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *__fastcall sub_1800CECC0(__int64 a1, __int64 *a2, int a3, int a4)
{
  int v8; // eax
  char v9; // dl
  int v10; // r15d
  __int64 *v11; // rsi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, int *, _QWORD, __int64 *); // rdi
  int v14; // edi
  void **v15; // rax
  void **v16; // rax
  void **v17; // rax
  void **v18; // rbx
  _QWORD *v19; // rax
  unsigned __int64 v20; // r8
  void **v21; // rax
  void **v22; // rbx
  __int128 *v23; // rdx
  void **v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int128 v32; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-98h]
  unsigned __int64 v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+78h] [rbp-88h] BYREF
  int v36; // [rsp+7Ch] [rbp-84h]
  int v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+84h] [rbp-7Ch]
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h]
  int v41; // [rsp+90h] [rbp-70h]
  int v42; // [rsp+94h] [rbp-6Ch]
  int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+9Ch] [rbp-64h]
  int v45; // [rsp+A0h] [rbp-60h]
  void *Src[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v47[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v48[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+108h] [rbp+8h] BYREF

  v29[0] = (__int64)a2;
  sub_1800566B0(a1);
  v8 = sub_180056744(a1);
  v10 = sub_1800CEA10(v8, v9);
  v11 = (__int64 *)(a1 + 184);
  if ( sub_18001070C((_QWORD *)(a1 + 184)) )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)*v11 + 80LL))(*v11, &v35);
    if ( v35 != a3 || v36 != a4 || v39 != v10 )
      sub_18000E72C((__int64 *)(a1 + 184));
  }
  if ( sub_1800CC258((_QWORD *)(a1 + 184)) )
  {
    v45 = 0;
    v35 = a3;
    v36 = a4;
    v37 = 1;
    v42 = 2;
    v44 = 0x10000;
    v39 = v10;
    v40 = 1;
    v41 = 0;
    v38 = 1;
    v43 = 8;
    sub_180011C50(a1 + 72, &v32);
    sub_18001FC84(&v30, (__int64 *)&v32);
    if ( *((_QWORD *)&v32 + 1) )
      sub_180010530(*((__int64 *)&v32 + 1));
    sub_1800C589C(v30, v29);
    v28 = 0LL;
    v12 = v29[0];
    v13 = *(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v29[0] + 40LL);
    sub_18000E72C(&v28);
    v14 = v13(v12, &v35, 0LL, &v28);
    sub_1800C7750(v30, v14);
    if ( v14 < 0 )
    {
      sub_180010DD0(Src, (__int64)"THROW_IF_FAILED_DETAILED. ");
      v15 = sub_18001DE60(Src, " File=", 6uLL);
      sub_18001DE60(
        v15,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        0x5CuLL);
      v16 = sub_18001DE60(Src, " Line=", 6uLL);
      sub_18001DE60(v16, "929", 3uLL);
      v17 = sub_18001DE60(Src, " Message=", 9uLL);
      sub_18001DE60(v17, "\"TextureD3D11::GetOrCreateCPUStagingTexture(): unable to create texture (2D)\"", 0x4DuLL);
      v18 = sub_18001DE60(Src, " Details=\"", 0xAuLL);
      v32 = 0LL;
      v33 = 0LL;
      v19 = (_QWORD *)sub_1800CF0F4(v47, &v35, &v32);
      v20 = v19[2];
      if ( v19[3] >= 0x10uLL )
        v19 = (_QWORD *)*v19;
      v21 = sub_18001DE60(v18, v19, v20);
      sub_18001DE60(v21, "\"", 1uLL);
      sub_180011B24((__int64)v47);
      sub_18002A4FC((__int64)&v32);
      v22 = sub_18001DE60(Src, " HRESULT=", 9uLL);
      sub_1800CC6D0((__int64)&v32, v14);
      v23 = &v32;
      if ( v34 >= 0x10 )
        v23 = (__int128 *)v32;
      sub_18001DE60(v22, v23, v33);
      sub_180011B24((__int64)&v32);
      v24 = Src;
      if ( Src[3] >= (void *)0x10 )
        v24 = (void **)Src[0];
      sub_180010DD0(v48, (__int64)v24);
      v25 = sub_180010DD0(
              v47,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_18006EDE8(pExceptionObject, (__int64)v25, v26, v14, (const char *)v48, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_1800CCAE4(v11, &v28);
    sub_18000E72C(&v28);
    sub_18000E72C(v29);
    if ( v31 )
      sub_180010530(v31);
  }
  *a2 = *v11;
  sub_180011520(a2);
  return a2;
}
