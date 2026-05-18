/*
 * XREFs of sub_1800E3D8C @ 0x1800E3D8C
 * Callers:
 *     sub_1800E3C50 @ 0x1800E3C50 (sub_1800E3C50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180011570 @ 0x180011570 (sub_180011570.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     unknown_libname_3 @ 0x1800142CC (unknown_libname_3.c)
 *     sub_18001F5AC @ 0x18001F5AC (sub_18001F5AC.c)
 *     sub_18001F640 @ 0x18001F640 (sub_18001F640.c)
 *     sub_180020FCC @ 0x180020FCC (sub_180020FCC.c)
 *     sub_18002BBC0 @ 0x18002BBC0 (sub_18002BBC0.c)
 *     sub_18004E9D8 @ 0x18004E9D8 (sub_18004E9D8.c)
 *     sub_18005C81C @ 0x18005C81C (sub_18005C81C.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_180079BE8 @ 0x180079BE8 (sub_180079BE8.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E31D8 @ 0x1800E31D8 (sub_1800E31D8.c)
 *     sub_1800E3210 @ 0x1800E3210 (sub_1800E3210.c)
 *     sub_1800E3250 @ 0x1800E3250 (sub_1800E3250.c)
 *     sub_1800E38CC @ 0x1800E38CC (sub_1800E38CC.c)
 *     sub_1800E4AE8 @ 0x1800E4AE8 (sub_1800E4AE8.c)
 *     sub_1800E5D28 @ 0x1800E5D28 (sub_1800E5D28.c)
 *     sub_1800E62C8 @ 0x1800E62C8 (sub_1800E62C8.c)
 *     sub_1800E67E4 @ 0x1800E67E4 (sub_1800E67E4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_1800E3D8C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  char *v6; // rbx
  __int64 v7; // rax
  double v8; // xmm0_8
  int v9; // ecx
  unsigned __int64 v10; // r15
  char *v11; // rsi
  char *v12; // rdi
  unsigned int v13; // eax
  unsigned int i; // edx
  unsigned int v15; // r8d
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r15
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r12
  void *v31; // rax
  __int64 v32; // rdx
  signed __int32 v33; // eax
  signed __int32 v34; // ett
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // r8
  char *j; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // r12
  __int64 (__fastcall *v42)(__int64, __int128 *, __int64, __int64 *); // r11
  __int64 v43; // rax
  int v44; // edi
  __int64 v45; // rcx
  __int128 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 **v52; // rax
  LPVOID **v53; // rcx
  __int64 *v54; // rdx
  LPVOID *v55; // rdi
  void *v56; // rdi
  __int64 v57; // rcx
  __int64 result; // rax
  __int64 v59; // r8
  const void **v60; // rax
  __int64 v61; // r8
  __int64 v62; // r8
  const void **v63; // rax
  __int64 v64; // r8
  __int64 v65; // r8
  const void **v66; // rax
  __int64 v67; // r8
  __int64 v68; // r8
  const void **v69; // rbx
  _QWORD *v70; // rax
  __int64 v71; // r8
  const void **v72; // rax
  __int64 v73; // r8
  __int64 v74; // r8
  const void **v75; // rbx
  _QWORD *v76; // rax
  __int64 v77; // r8
  _BYTE *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // r8
  _QWORD *v81; // rax
  __int64 v82; // r8
  _QWORD *v83; // rax
  __int64 v84; // r8
  unsigned int v85; // [rsp+30h] [rbp-D0h]
  __int64 v86; // [rsp+38h] [rbp-C8h] BYREF
  int v87; // [rsp+40h] [rbp-C0h]
  __int128 v88; // [rsp+48h] [rbp-B8h] BYREF
  char *v89; // [rsp+58h] [rbp-A8h]
  __int128 v90; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID lpMem; // [rsp+70h] [rbp-90h] BYREF
  __int64 v92; // [rsp+78h] [rbp-88h] BYREF
  __int64 v93; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v94; // [rsp+88h] [rbp-78h]
  __int64 v95; // [rsp+90h] [rbp-70h]
  _QWORD v96[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v97; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v98; // [rsp+C8h] [rbp-38h] BYREF
  double v99; // [rsp+D8h] [rbp-28h]
  int v100; // [rsp+E0h] [rbp-20h]
  _OWORD v101[2]; // [rsp+E8h] [rbp-18h] BYREF
  const void *Src[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v103[7]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v104[32]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v105[32]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+1A0h] [rbp+A0h] BYREF

  v3 = a3;
  *(_QWORD *)&v90 = a3;
  v88 = 0LL;
  v6 = 0LL;
  v89 = 0LL;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 && *(_DWORD *)(a2 + 16) == 17 )
  {
    sub_1800113D0(v101, "Unsupported texture options: Format::UInt8_RGBA cannot be used with BindToShader");
    v81 = sub_1800113D0(
            Src,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_180079B60(v103, (__int64)v81, v82, (const char *)v101, 0);
    throw (Spectre::Engine::EngineException *)v103;
  }
  v7 = sub_1800E38CC((__int64)v103, (_DWORD *)a2, *(_DWORD *)(a3 + 48));
  v97 = *(_OWORD *)v7;
  v98 = *(_OWORD *)(v7 + 16);
  v8 = *(double *)(v7 + 32);
  v99 = v8;
  v100 = *(_DWORD *)(v7 + 40);
  if ( *(_QWORD *)(v3 + 8) )
  {
    v9 = DWORD2(v97);
    if ( DWORD2(v97) * HIDWORD(v97) )
    {
      v10 = 16LL * (unsigned int)(DWORD2(v97) * HIDWORD(v97));
      v11 = (char *)sub_180011088(v10);
      sub_1800E3210(0LL, 0LL, v11);
      *(_QWORD *)&v88 = v11;
      v12 = v11;
      *((_QWORD *)&v88 + 1) = v11;
      v6 = &v11[v10];
      v89 = &v11[v10];
      v9 = DWORD2(v97);
    }
    else
    {
      v12 = (char *)*((_QWORD *)&v88 + 1);
      v11 = (char *)v88;
    }
    v13 = 0;
    v85 = 0;
    for ( i = HIDWORD(v97); v13 < i; v85 = v13 )
    {
      v15 = 0;
      v87 = 0;
      if ( v9 )
      {
        LODWORD(v92) = v13;
        do
        {
          HIDWORD(v92) = v15;
          v94 = v13 * *(_DWORD *)(v3 + 48);
          v16 = v15 + v94;
          v17 = (__int64)(*(_QWORD *)(v3 + 32) - *(_QWORD *)(v3 + 24)) >> 5;
          if ( v16 < v17 && (v18 = *(_QWORD *)(v3 + 24) + 32 * v16, *(_DWORD *)(v18 + 28) == HIDWORD(v92)) && v18 )
          {
            v19 = *(_QWORD *)(v3 + 8);
            if ( v19 )
              *(_QWORD *)&v101[0] = *(_QWORD *)v18 + v19;
            else
              *(_QWORD *)&v101[0] = 0LL;
            DWORD2(v101[0]) = *(_DWORD *)(v18 + 20);
            v20 = *(_DWORD *)(v18 + 24);
          }
          else
          {
            if ( !v15 )
            {
              sub_1800113D0(v101, "Error, there is no top-level image available");
              v83 = sub_1800113D0(
                      Src,
                      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
              sub_180079B60(v103, (__int64)v83, v84, (const char *)v101, 0);
              throw (Spectre::Engine::EngineException *)v103;
            }
            sub_18005C81C();
            v21 = 1;
            if ( (unsigned int)(int)((double)*(int *)a2 / v8) > 1 )
              v21 = (int)((double)*(int *)a2 / v8);
            LODWORD(lpMem) = v21;
            v22 = 1;
            if ( (unsigned int)(int)((double)*(int *)(a2 + 4) / v8) > 1 )
              v22 = (int)((double)*(int *)(a2 + 4) / v8);
            LODWORD(v95) = v22;
            v93 = v85;
            if ( v94 < v17
              && (v23 = *(_QWORD *)(v3 + 24) + 32LL * v94, !*(_DWORD *)(v23 + 28))
              && v23
              && (v24 = *(_QWORD *)(v3 + 8)) != 0 )
            {
              v25 = *(_QWORD *)v23 + v24;
            }
            else
            {
              v25 = 0LL;
            }
            *(_QWORD *)&v101[0] = v25;
            DWORD2(v101[0]) = sub_18004E9D8(*(_DWORD *)(a2 + 16), v21);
            v20 = sub_1800E5D28(*(unsigned int *)(a2 + 16), (unsigned int)lpMem, (unsigned int)v95, 0LL);
            v15 = v87;
          }
          HIDWORD(v101[0]) = v20;
          if ( v12 == v6 )
          {
            v26 = (v12 - v11) >> 4;
            if ( v26 == 0xFFFFFFFFFFFFFFFLL )
              sub_180012170();
            v95 = v26 + 1;
            v27 = (v6 - v11) >> 4;
            v28 = v27 >> 1;
            if ( v27 <= 0xFFFFFFFFFFFFFFFLL - (v27 >> 1) )
            {
              v29 = v26 + 1;
              if ( v28 + v27 >= v26 + 1 )
                v29 = v28 + v27;
              if ( v29 > 0xFFFFFFFFFFFFFFFLL )
                sub_1800120D4();
            }
            else
            {
              v29 = 0xFFFFFFFFFFFFFFFLL;
            }
            v30 = 16 * v29;
            v31 = (void *)sub_180011088(v30);
            lpMem = v31;
            v8 = *(double *)v101;
            *((_OWORD *)v31 + v26) = v101[0];
            sub_1800E3210(v11, (__int64)v12, (char *)v31);
            if ( v11 )
              sub_180010884(v11, 16 * v27);
            v11 = (char *)lpMem;
            *(_QWORD *)&v88 = lpMem;
            v12 = (char *)lpMem + 16 * v95;
            v6 = (char *)lpMem + v30;
            v89 = (char *)lpMem + v30;
            v3 = v90;
            v15 = v87;
          }
          else
          {
            v8 = *(double *)v101;
            *(_OWORD *)v12 = v101[0];
            v12 += 16;
          }
          *((_QWORD *)&v88 + 1) = v12;
          v87 = ++v15;
          v9 = DWORD2(v97);
          v13 = v85;
        }
        while ( v15 < DWORD2(v97) );
        i = HIDWORD(v97);
      }
      ++v13;
    }
  }
  else
  {
    v12 = (char *)*((_QWORD *)&v88 + 1);
    v11 = (char *)v88;
  }
  v90 = 0LL;
  v32 = *(_QWORD *)(a1 + 80);
  if ( v32 )
  {
    v33 = *(_DWORD *)(v32 + 8);
    while ( v33 )
    {
      v34 = v33;
      v33 = _InterlockedCompareExchange((volatile signed __int32 *)(v32 + 8), v33 + 1, v33);
      if ( v34 == v33 )
      {
        v90 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
    v6 = v89;
    v12 = (char *)*((_QWORD *)&v88 + 1);
    v11 = (char *)v88;
  }
  sub_180020FCC(v101, (__int64 *)&v90);
  sub_180010910((__int64)&v90);
  v35 = *(_QWORD *)&v101[0];
  if ( (*(_BYTE *)(a2 + 20) & 0x40) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, char *, char *))(**(_QWORD **)&v101[0] + 80LL))(
      *(_QWORD *)&v101[0],
      (char *)&v98 + 4,
      (char *)&v98 + 8);
    v36 = DWORD1(v98);
  }
  else
  {
    v36 = 1LL;
    *(_QWORD *)((char *)&v98 + 4) = 1LL;
  }
  v37 = 0LL;
  for ( j = v11; j != v12; j += 16 )
    v37 += *((unsigned int *)j + 3);
  v39 = v37 * v36;
  *(_QWORD *)(a1 + 200) = v39;
  sub_18002BBC0(a1, v39);
  v86 = 0LL;
  v40 = sub_1800DA968(v35, &v93);
  v41 = *v40;
  v42 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *))(*(_QWORD *)*v40 + 40LL);
  *(_QWORD *)&v90 = v42;
  if ( v11 == v12 )
    v43 = 0LL;
  else
    v43 = sub_1800E31D8((__int64)v11);
  v44 = v42(v41, &v97, v43, &v86);
  v45 = v93;
  if ( v93 )
  {
    v93 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  sub_1800DD668(v35, v44);
  if ( v44 < 0 )
  {
    sub_1800113D0(Src, "THROW_IF_FAILED_DETAILED. ");
    v60 = sub_18001F640(Src, " File=", v59);
    sub_18001F640(
      v60,
      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
      v61);
    v63 = sub_18001F640(Src, " Line=", v62);
    sub_18001F640(v63, "626", v64);
    v66 = sub_18001F640(Src, " Message=", v65);
    sub_18001F640(v66, "\"TextureD3D11::CreateRendererResources2D(): unable to create texture(2D)\"", v67);
    v69 = sub_18001F640(Src, " Details=\"", v68);
    v70 = (_QWORD *)sub_1800E62C8(v104, &v97, &v88);
    v72 = sub_18001F5AC((__int64)v69, v70, v71);
    sub_18001F640(v72, "\"", v73);
    sub_180011570((__int64)v104);
    v75 = sub_18001F640(Src, " HRESULT=", v74);
    v76 = (_QWORD *)sub_1800E67E4(v105, (unsigned int)v44);
    sub_18001F5AC((__int64)v75, v76, v77);
    sub_180011570((__int64)v105);
    v78 = unknown_libname_3(Src);
    sub_1800113D0(v103, v78);
    v79 = sub_1800113D0(
            v96,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_180079BE8(pExceptionObject, (__int64)v79, v80, v44, (const char *)v103, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v46 = (__int128 *)sub_1800E4AE8(a1, (unsigned int)&v92, v86, *(_DWORD *)(a2 + 20), DWORD2(v97));
  v47 = 0LL;
  if ( &v90 != v46 )
  {
    v47 = *(_QWORD *)v46;
    *(_QWORD *)v46 = 0LL;
  }
  v48 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = v47;
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  v49 = v92;
  if ( v92 )
  {
    v92 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  v50 = v86;
  v86 = 0LL;
  v51 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = v50;
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  v52 = sub_1800E3250((__int64 **)&lpMem, a2, (int *)&v97 + 2, (int *)&v98 + 1);
  v53 = (LPVOID **)(a1 + 112);
  if ( (__int64 **)(a1 + 112) != v52 )
  {
    v54 = *v52;
    *v52 = 0LL;
    v55 = *v53;
    *v53 = (LPVOID *)v54;
    if ( v55 )
    {
      if ( *v55 )
        sub_18000B998(*v55);
      sub_18000B998(v55);
    }
  }
  v56 = lpMem;
  if ( lpMem )
  {
    if ( *(_QWORD *)lpMem )
      sub_18000B998(*(LPVOID *)lpMem);
    sub_18000B998(v56);
  }
  *(_BYTE *)(a1 + 208) = (*(_DWORD *)(a2 + 20) & 0x20) != 0;
  v57 = v86;
  if ( v86 )
  {
    v86 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  }
  result = sub_180010910((__int64)v101);
  if ( v11 )
    return sub_180010884(v11, (v6 - v11) & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
