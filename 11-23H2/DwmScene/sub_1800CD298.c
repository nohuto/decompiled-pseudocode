/*
 * XREFs of sub_1800CD298 @ 0x1800CD298
 * Callers:
 *     sub_1800CD1B0 @ 0x1800CD1B0 (sub_1800CD1B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 *     sub_18001FC84 @ 0x18001FC84 (sub_18001FC84.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     sub_18002A4FC @ 0x18002A4FC (sub_18002A4FC.c)
 *     sub_18005524C @ 0x18005524C (sub_18005524C.c)
 *     sub_180055734 @ 0x180055734 (sub_180055734.c)
 *     sub_180056764 @ 0x180056764 (sub_180056764.c)
 *     sub_180056868 @ 0x180056868 (sub_180056868.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_18006EDE8 @ 0x18006EDE8 (sub_18006EDE8.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CB6E8 @ 0x1800CB6E8 (sub_1800CB6E8.c)
 *     sub_1800CC1C8 @ 0x1800CC1C8 (sub_1800CC1C8.c)
 *     sub_1800CC5C4 @ 0x1800CC5C4 (sub_1800CC5C4.c)
 *     sub_1800CC6D0 @ 0x1800CC6D0 (sub_1800CC6D0.c)
 *     sub_1800CC7B4 @ 0x1800CC7B4 (sub_1800CC7B4.c)
 *     sub_1800CCEFC @ 0x1800CCEFC (sub_1800CCEFC.c)
 *     sub_1800CDC58 @ 0x1800CDC58 (sub_1800CDC58.c)
 *     sub_1800CEBF8 @ 0x1800CEBF8 (sub_1800CEBF8.c)
 *     sub_1800CF0F4 @ 0x1800CF0F4 (sub_1800CF0F4.c)
 *     sub_1800CF4EC @ 0x1800CF4EC (sub_1800CF4EC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800CD298(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  double v9; // xmm0_8
  unsigned int v10; // r15d
  _OWORD *v11; // rsi
  unsigned int i; // ebx
  __int64 v13; // r10
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // r12d
  _QWORD *v17; // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // r11d
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  _OWORD *v27; // r12
  __int64 j; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, __int128 *, _OWORD *, __int64 *); // rbx
  int v33; // edi
  void **v34; // rax
  void **v35; // rax
  void **v36; // rax
  void **v37; // rbx
  _QWORD *v38; // rax
  unsigned __int64 v39; // r8
  void **v40; // rax
  void **v41; // rbx
  _QWORD *v42; // rdx
  __int128 *p_Src; // rdx
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 *v46; // rax
  __int64 **v47; // rax
  unsigned __int64 v49; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v51; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD *v52; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v53; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int128 v55; // [rsp+68h] [rbp-98h] BYREF
  __int128 v56; // [rsp+78h] [rbp-88h] BYREF
  double v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+90h] [rbp-70h]
  __int128 Src; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+B0h] [rbp-50h]
  _QWORD v61[4]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v63[7]; // [rsp+110h] [rbp+10h] BYREF

  v51 = 0LL;
  v52 = 0LL;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 && *(_DWORD *)(a2 + 16) == 17 )
  {
    sub_180010DD0(&Src, (__int64)"Unsupported texture options: Format::UInt8_RGBA cannot be used with BindToShader");
    v6 = sub_180010DD0(
           v61,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_18006ED7C(pExceptionObject, (__int64)v6, v7, (const char *)&Src, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v8 = sub_1800CCEFC((__int64)pExceptionObject, (_DWORD *)a2, *(_DWORD *)(a3 + 48));
  v55 = *(_OWORD *)v8;
  v56 = *(_OWORD *)(v8 + 16);
  v9 = *(double *)(v8 + 32);
  v57 = v9;
  v58 = *(_DWORD *)(v8 + 40);
  if ( *(_QWORD *)(a3 + 8) )
  {
    if ( DWORD2(v55) * HIDWORD(v55) )
      sub_1800CF4EC(&v51, (unsigned int)(DWORD2(v55) * HIDWORD(v55)));
    v10 = 0;
    v11 = (_OWORD *)*((_QWORD *)&v51 + 1);
    while ( v10 < HIDWORD(v55) )
    {
      for ( i = 0; i < DWORD2(v55); ++i )
      {
        v53 = __PAIR64__(i, v10);
        v13 = sub_180056868(a3, __SPAIR64__(i, v10));
        if ( v13 )
        {
          v14 = *(_QWORD *)(a3 + 8);
          if ( v14 )
            *(_QWORD *)&Src = v14 + *(_QWORD *)v13;
          else
            *(_QWORD *)&Src = 0LL;
          DWORD2(Src) = *(_DWORD *)(v13 + 20);
          v15 = *(_DWORD *)(v13 + 24);
        }
        else
        {
          if ( !i )
          {
            sub_180010DD0(&Src, (__int64)"Error, there is no top-level image available");
            v22 = sub_180010DD0(
                    v61,
                    (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
            sub_18006ED7C(pExceptionObject, (__int64)v22, v23, (const char *)&Src, 0);
            throw (Spectre::Engine::EngineException *)pExceptionObject;
          }
          sub_18005524C();
          v16 = 1;
          if ( (unsigned int)(int)((double)*(int *)(a2 + 4) / v9) > 1 )
            v16 = (int)((double)*(int *)(a2 + 4) / v9);
          v49 = v10;
          v17 = (_QWORD *)sub_180056868(a3, v10);
          if ( v17 && (v19 = *(_QWORD *)(a3 + 8)) != 0 )
            v20 = *v17 + v19;
          else
            v20 = v18;
          *(_QWORD *)&Src = v20;
          DWORD2(Src) = sub_180056764(*(_DWORD *)(a2 + 16));
          v15 = sub_1800CEBF8(*(unsigned int *)(a2 + 16), v21, v16, 0LL);
        }
        HIDWORD(Src) = v15;
        if ( v11 == v52 )
        {
          sub_1800CC5C4((__int64 *)&v51, (__int64)v11, &Src);
          v11 = (_OWORD *)*((_QWORD *)&v51 + 1);
        }
        else
        {
          v9 = *(double *)&Src;
          *v11++ = Src;
          *((_QWORD *)&v51 + 1) = v11;
        }
      }
      ++v10;
    }
  }
  else
  {
    v11 = (_OWORD *)*((_QWORD *)&v51 + 1);
  }
  sub_180011C50(a1 + 72, &Src);
  sub_18001FC84(&v53, (__int64 *)&Src);
  if ( *((_QWORD *)&Src + 1) )
    sub_180010530(*((__int64 *)&Src + 1));
  v24 = v53;
  if ( (*(_BYTE *)(a2 + 20) & 0x40) != 0 )
  {
    (*(void (__fastcall **)(unsigned __int64, char *, char *))(*(_QWORD *)v53 + 80LL))(
      v53,
      (char *)&v56 + 4,
      (char *)&v56 + 8);
    v25 = DWORD1(v56);
  }
  else
  {
    v25 = 1LL;
    *(_QWORD *)((char *)&v56 + 4) = 1LL;
  }
  v26 = 0LL;
  v27 = (_OWORD *)v51;
  for ( j = v51; (_OWORD *)j != v11; j += 16LL )
    v26 += *(unsigned int *)(j + 12);
  v29 = v26 * v25;
  *(_QWORD *)(a1 + 200) = v29;
  sub_1800297B0(a1, v29, (*(_DWORD *)(a2 + 20) & 6) != 0 ? 3 : 11);
  v50 = 0LL;
  v30 = sub_1800C589C(v24, &v49);
  v31 = *v30;
  v32 = *(__int64 (__fastcall **)(__int64, __int128 *, _OWORD *, __int64 *))(*(_QWORD *)*v30 + 40LL);
  sub_18000E72C(&v50);
  if ( v27 == v11 )
    v27 = 0LL;
  v33 = v32(v31, &v55, v27, &v50);
  sub_18000E72C((__int64 *)&v49);
  sub_1800C7750(v24, v33);
  if ( v33 < 0 )
  {
    sub_180010DD0(&Src, (__int64)"THROW_IF_FAILED_DETAILED. ");
    v34 = sub_18001DE60((void **)&Src, " File=", 6uLL);
    sub_18001DE60(
      v34,
      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
      0x5CuLL);
    v35 = sub_18001DE60((void **)&Src, " Line=", 6uLL);
    sub_18001DE60(v35, "626", 3uLL);
    v36 = sub_18001DE60((void **)&Src, " Message=", 9uLL);
    sub_18001DE60(v36, "\"TextureD3D11::CreateRendererResources2D(): unable to create texture(2D)\"", 0x49uLL);
    v37 = sub_18001DE60((void **)&Src, " Details=\"", 0xAuLL);
    v38 = (_QWORD *)sub_1800CF0F4(v61, &v55, &v51);
    v39 = v38[2];
    if ( v38[3] >= 0x10uLL )
      v38 = (_QWORD *)*v38;
    v40 = sub_18001DE60(v37, v38, v39);
    sub_18001DE60(v40, "\"", 1uLL);
    sub_180011B24((__int64)v61);
    v41 = sub_18001DE60((void **)&Src, " HRESULT=", 9uLL);
    sub_1800CC6D0((__int64)v61, v33);
    v42 = v61;
    if ( v61[3] >= 0x10uLL )
      v42 = (_QWORD *)v61[0];
    sub_18001DE60(v41, v42, v61[2]);
    sub_180011B24((__int64)v61);
    p_Src = &Src;
    if ( v60 >= 0x10 )
      p_Src = (__int128 *)Src;
    sub_180010DD0(pExceptionObject, (__int64)p_Src);
    v44 = sub_180010DD0(
            v61,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_18006EDE8(v63, (__int64)v44, v45, v33, (const char *)pExceptionObject, 0);
    throw (Spectre::Engine::EngineException *)v63;
  }
  v46 = (__int64 *)sub_1800CDC58(a1, (unsigned int)&v49, v50, *(_DWORD *)(a2 + 20), DWORD2(v55));
  sub_1800CB6E8((__int64 *)(a1 + 160), v46);
  sub_18000E72C((__int64 *)&v49);
  sub_1800CB6E8((__int64 *)(a1 + 168), &v50);
  v47 = sub_1800CC7B4((__int64 **)&v49, a2, (int *)&v55 + 2, (int *)&v56 + 1);
  sub_1800CC1C8((void ***)(a1 + 112), (void ***)v47);
  sub_180055734(&v49);
  *(_BYTE *)(a1 + 208) = (*(_DWORD *)(a2 + 20) & 0x20) != 0;
  sub_18000E72C(&v50);
  if ( v54 )
    sub_180010530(v54);
  return sub_18002A4FC((__int64)&v51);
}
