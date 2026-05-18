/*
 * XREFs of sub_1800EA210 @ 0x1800EA210
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_18005E30C @ 0x18005E30C (sub_18005E30C.c)
 *     sub_18005E428 @ 0x18005E428 (sub_18005E428.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 *     sub_1800E5DE4 @ 0x1800E5DE4 (sub_1800E5DE4.c)
 *     sub_1800E6288 @ 0x1800E6288 (sub_1800E6288.c)
 *     sub_1800E6A0C @ 0x1800E6A0C (sub_1800E6A0C.c)
 *     sub_1800E6B44 @ 0x1800E6B44 (sub_1800E6B44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
char __fastcall sub_1800EA210(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11)
{
  __int64 v11; // r13
  __int64 *v12; // rdx
  char v13; // bl
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // eax
  int v17; // r12d
  _QWORD *v18; // rax
  bool v19; // bl
  __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned int v22; // r15d
  __int64 v23; // rbx
  int v24; // r12d
  __int64 v25; // rdx
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  char *v28; // rdi
  char *v29; // rsi
  size_t v30; // r15
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rsi
  void (__fastcall *v34)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *); // rdi
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v38; // rax
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // r8
  __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v47; // [rsp+60h] [rbp-A0h]
  unsigned int v48; // [rsp+64h] [rbp-9Ch]
  int v49; // [rsp+68h] [rbp-98h]
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  int v52; // [rsp+80h] [rbp-80h]
  int v53; // [rsp+84h] [rbp-7Ch]
  unsigned int v54; // [rsp+88h] [rbp-78h]
  __int64 v55[2]; // [rsp+90h] [rbp-70h] BYREF
  char *v56; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v57; // [rsp+A8h] [rbp-58h]
  __int128 v58; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v59[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h]
  __int64 v61[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v62; // [rsp+F8h] [rbp-8h] BYREF
  int v63; // [rsp+100h] [rbp+0h]
  unsigned int v64; // [rsp+104h] [rbp+4h]
  unsigned int v65; // [rsp+108h] [rbp+8h]
  int v66; // [rsp+10Ch] [rbp+Ch]
  _QWORD v67[6]; // [rsp+110h] [rbp+10h] BYREF
  __int64 pExceptionObject; // [rsp+140h] [rbp+40h] BYREF
  int v69; // [rsp+148h] [rbp+48h]
  int v70; // [rsp+14Ch] [rbp+4Ch]
  int v71; // [rsp+150h] [rbp+50h]
  int v72; // [rsp+154h] [rbp+54h]
  int v73; // [rsp+158h] [rbp+58h]
  int v74; // [rsp+15Ch] [rbp+5Ch]
  int v75; // [rsp+160h] [rbp+60h]
  int v76; // [rsp+164h] [rbp+64h]
  int v77; // [rsp+168h] [rbp+68h]
  int v78; // [rsp+16Ch] [rbp+6Ch]
  int v79; // [rsp+170h] [rbp+70h]
  int v80; // [rsp+174h] [rbp+74h]
  int v81; // [rsp+178h] [rbp+78h]
  __m128i si128; // [rsp+17Ch] [rbp+7Ch]
  int v83; // [rsp+18Ch] [rbp+8Ch]
  int v84; // [rsp+190h] [rbp+90h]
  int v85; // [rsp+194h] [rbp+94h]
  int v86; // [rsp+198h] [rbp+98h]
  int v87; // [rsp+19Ch] [rbp+9Ch]
  int v88; // [rsp+1A0h] [rbp+A0h]

  v53 = a4;
  v54 = a3;
  v11 = a1;
  v51 = a1;
  v48 = a6;
  v60 = a7;
  v47 = a9;
  LODWORD(v46) = a10;
  v52 = a11;
  v49 = 0;
  if ( *a2 )
  {
    v12 = sub_18005E29C(*a2, v67, *(_DWORD *)(a1 + 88));
    v13 = 1;
    v14 = *v12;
  }
  else
  {
    v61[1] = 0LL;
    v12 = v61;
    v13 = 2;
    v14 = 0LL;
  }
  v59[0] = v14;
  v59[1] = v12[1];
  *v12 = 0LL;
  v12[1] = 0LL;
  if ( (v13 & 2) != 0 )
  {
    v13 &= ~2u;
    sub_180010910((__int64)v61);
  }
  if ( (v13 & 1) != 0 )
    sub_180010910((__int64)v67);
  sub_1800E6B44(v55, v59);
  v15 = v55[0];
  v16 = sub_18005E30C(v55[0]);
  pExceptionObject = 0x400000000LL;
  v69 = 4;
  v70 = 4;
  v71 = 8;
  v72 = 12;
  v73 = 16;
  v74 = 4;
  v75 = 4;
  v76 = 8;
  v77 = 12;
  v78 = 16;
  v79 = 2;
  v80 = 1;
  v81 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7F0);
  v83 = 2;
  v84 = 4;
  v85 = 8;
  v86 = 4;
  v87 = 1;
  v88 = 2;
  v17 = *((_DWORD *)&pExceptionObject + v16);
  v49 = v17;
  if ( (unsigned int)sub_18005E428(v15) != 1 )
  {
    sub_1800113D0(v61, "UpdateTexture2D can only be used with 2D textures");
    v40 = sub_1800113D0(
            v67,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180079B60(&pExceptionObject, (__int64)v40, v41, (const char *)v61, 0);
    throw (Spectre::Engine::EngineException *)&pExceptionObject;
  }
  v18 = sub_1800E6288(v15, &v50);
  v19 = sub_1800E2DE0(v18);
  v20 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v19 )
  {
    sub_1800113D0(v61, "UpdateTexture2D can only be used with a valid ID3D11Texture2D interface pointer");
    v42 = sub_1800113D0(
            v67,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180079B60(&pExceptionObject, (__int64)v42, v43, (const char *)v61, 0);
    throw (Spectre::Engine::EngineException *)&pExceptionObject;
  }
  v21 = (unsigned int)(v17 * a10);
  v22 = v47 * a11;
  if ( v47 * a11 + (unsigned int)v21 >= a8 )
  {
    sub_1800113D0(v61, "UpdateTexture2D: Src X/Y offset exceeds the size of the data buffer");
    v44 = sub_1800113D0(
            v67,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180079B60(&pExceptionObject, (__int64)v44, v45, (const char *)v61, 0);
    throw (Spectre::Engine::EngineException *)&pExceptionObject;
  }
  if ( v17 * (a5 + (_DWORD)v46) + v47 * (a6 + v52 - 1) > a8 )
  {
    sub_1800113D0(v61, "UpdateTexture2D: Src rectangle exceeds the size of the data buffer");
    v38 = sub_1800113D0(
            v67,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_180079B60(&pExceptionObject, (__int64)v38, v39, (const char *)v61, 0);
    throw (Spectre::Engine::EngineException *)&pExceptionObject;
  }
  sub_1800E5DE4(v15, &v46, a5, a6);
  v23 = v46;
  v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, char **))(**(_QWORD **)(v11 + 144) + 112LL))(
          *(_QWORD *)(v11 + 144),
          v46,
          0LL,
          4LL,
          0,
          &v56);
  v58 = 0LL;
  v25 = *(_QWORD *)(v11 + 80);
  if ( v25 )
  {
    v26 = *(_DWORD *)(v25 + 8);
    while ( v26 )
    {
      v27 = v26;
      v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26);
      if ( v27 == v26 )
      {
        v58 = *(_OWORD *)(v11 + 72);
        break;
      }
    }
    v15 = v55[0];
    v23 = v46;
  }
  sub_1800E6A0C(v61, &v58);
  sub_180010910((__int64)&v58);
  sub_1800DD668(v61[0], v24);
  if ( v24 >= 0 && (v28 = v56) != 0LL )
  {
    if ( !v57 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v23 + 80LL))(v23, v67);
      v57 = 4 * LODWORD(v67[0]);
      v28 = v56;
    }
    v29 = (char *)(v60 + v22 + v21);
    if ( v48 )
    {
      v30 = v49 * a5;
      v31 = v47;
      v32 = v48;
      do
      {
        sub_18001060C(v28, v30, v29, v30);
        v28 += v57;
        v29 += v31;
        --v32;
      }
      while ( v32 );
      v11 = v51;
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v11 + 144) + 120LL))(
      *(_QWORD *)(v11 + 144),
      v23,
      0LL);
    v62 = 0LL;
    v64 = a5;
    v65 = v48;
    v63 = 0;
    v66 = 1;
    v33 = *(_QWORD *)(v11 + 144);
    v34 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v33 + 368LL);
    v35 = sub_1800E6288(v15, &v50);
    v34(v33, *v35, 0LL, v54, v53, 0, v23, 0, &v62);
    v36 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    sub_180010910((__int64)v61);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    sub_180010910((__int64)v55);
    sub_180010910((__int64)v59);
    return 1;
  }
  else
  {
    sub_18001F2B4(&stru_1801EA548, 3, "Failed to update Texture2D with HRESULT error 0x%.8x", v24);
    sub_180010910((__int64)v61);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    sub_180010910((__int64)v55);
    sub_180010910((__int64)v59);
    return 0;
  }
}
