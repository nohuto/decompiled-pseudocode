/*
 * XREFs of sub_1800D2AA0 @ 0x1800D2AA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18000FF54 @ 0x18000FF54 (sub_18000FF54.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_180056744 @ 0x180056744 (sub_180056744.c)
 *     sub_1800568D8 @ 0x1800568D8 (sub_1800568D8.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CC258 @ 0x1800CC258 (sub_1800CC258.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 *     sub_1800CF0C8 @ 0x1800CF0C8 (sub_1800CF0C8.c)
 *     sub_1800CF7CC @ 0x1800CF7CC (sub_1800CF7CC.c)
 *     sub_1800CF8FC @ 0x1800CF8FC (sub_1800CF8FC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_1800D2AA0(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11)
{
  __int64 *v11; // rax
  char v12; // bl
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdi
  int v16; // eax
  int v17; // r13d
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rax
  bool v21; // bl
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rsi
  unsigned int v25; // r15d
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v31; // rbx
  int v32; // r12d
  char *v33; // rdi
  char *v34; // rsi
  unsigned int v35; // eax
  unsigned int v36; // r13d
  size_t v37; // r15
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rsi
  void (__fastcall *v42)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *); // rdi
  __int64 *v43; // rax
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+68h] [rbp-98h]
  int v48; // [rsp+6Ch] [rbp-94h]
  int v49; // [rsp+70h] [rbp-90h]
  unsigned int v50; // [rsp+74h] [rbp-8Ch]
  int v51; // [rsp+78h] [rbp-88h]
  unsigned int v52; // [rsp+7Ch] [rbp-84h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  char *v54; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h]
  _QWORD v58[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+108h] [rbp+8h] BYREF
  int v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+114h] [rbp+14h]
  unsigned int v66; // [rsp+118h] [rbp+18h]
  int v67; // [rsp+11Ch] [rbp+1Ch]
  _QWORD pExceptionObject[7]; // [rsp+120h] [rbp+20h] BYREF

  v51 = a4;
  v52 = a3;
  v53 = a1;
  v50 = a6;
  v46 = a7;
  v47 = a9;
  v48 = a10;
  v49 = a11;
  LODWORD(v45) = 0;
  if ( *a2 )
  {
    v11 = sub_1800566F0(*a2, &v61, *(_DWORD *)(a1 + 88));
    v12 = 1;
    v13 = *v11;
  }
  else
  {
    v60 = 0LL;
    v11 = &v59;
    v12 = 2;
    v13 = 0LL;
  }
  v58[0] = v13;
  v14 = v11[1];
  v58[1] = v14;
  *v11 = 0LL;
  v11[1] = 0LL;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    if ( v60 )
      sub_180010530(v60);
  }
  if ( (v12 & 1) != 0 && v62 )
    sub_180010530(v62);
  sub_1800CF8FC(&v56, v58);
  v15 = v56;
  v16 = sub_180056744(v56);
  v17 = sub_1800488C8(v16);
  if ( (unsigned int)sub_1800568D8(v15) != 1 )
  {
    sub_180010DD0(&v59, (__int64)"UpdateTexture2D can only be used with 2D textures");
    v18 = sub_180010DD0(
            &v61,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v18, v19, (const char *)&v59, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v20 = sub_1800CF0C8(v15, &v45);
  v21 = sub_1800CC258(v20);
  sub_18000E72C(&v45);
  if ( v21 )
  {
    sub_180010DD0(&v59, (__int64)"UpdateTexture2D can only be used with a valid ID3D11Texture2D interface pointer");
    v22 = sub_180010DD0(
            &v61,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v22, v23, (const char *)&v59, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v24 = a9 * a11;
  v25 = v17 * v48;
  if ( v17 * v48 + (int)v24 >= a8 )
  {
    sub_180010DD0(&v59, (__int64)"UpdateTexture2D: Src X/Y offset exceeds the size of the data buffer");
    v26 = sub_180010DD0(
            &v61,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v26, v27, (const char *)&v59, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v17 * (v48 + a5) + v47 * (a6 + v49 - 1) > a8 )
  {
    sub_180010DD0(&v59, (__int64)"UpdateTexture2D: Src rectangle exceeds the size of the data buffer");
    v28 = sub_180010DD0(
            &v61,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v28, v29, (const char *)&v59, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_1800CECC0(v15, &v45, a5, a6);
  v30 = v53;
  v31 = v45;
  v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, char **))(**(_QWORD **)(v53 + 144) + 112LL))(
          *(_QWORD *)(v53 + 144),
          v45,
          0LL,
          4LL,
          0,
          &v54);
  sub_180011C50(v30 + 72, &v61);
  sub_1800CF7CC(&v59, &v61);
  if ( v62 )
    sub_180010530(v62);
  sub_1800C7750(v59, v32);
  if ( v32 >= 0 && (v33 = v54) != 0LL )
  {
    if ( !v55 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 80LL))(v31, &v61);
      v55 = 4 * v61;
      v33 = v54;
    }
    v34 = (char *)(v46 + v25 + v24);
    v35 = v17 * a5;
    v36 = v50;
    if ( v50 )
    {
      v37 = v35;
      v38 = v50;
      v39 = v47;
      do
      {
        sub_18000FF54(v33, v37, v34, v37);
        v33 += v55;
        v34 += v39;
        --v38;
      }
      while ( v38 );
      v31 = v45;
    }
    v40 = v53;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v53 + 144) + 120LL))(
      *(_QWORD *)(v53 + 144),
      v31,
      0LL);
    v63 = 0LL;
    v65 = a5;
    v66 = v36;
    v64 = 0;
    v67 = 1;
    v41 = *(_QWORD *)(v40 + 144);
    v42 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v41 + 368LL);
    v43 = sub_1800CF0C8(v56, &v46);
    v42(v41, *v43, 0LL, v52, v51, 0, v31, 0, &v63);
    sub_18000E72C(&v46);
    if ( v60 )
      sub_180010530(v60);
    sub_18000E72C(&v45);
    if ( v57 )
      sub_180010530(v57);
    if ( v14 )
      sub_180010530(v14);
    return 1;
  }
  else
  {
    sub_18001DB68(&stru_1801C8548, 3, "Failed to update Texture2D with HRESULT error 0x%.8x", v32);
    if ( v60 )
      sub_180010530(v60);
    sub_18000E72C(&v45);
    if ( v57 )
      sub_180010530(v57);
    if ( v14 )
      sub_180010530(v14);
    return 0;
  }
}
