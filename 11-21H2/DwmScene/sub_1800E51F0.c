/*
 * XREFs of sub_1800E51F0 @ 0x1800E51F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18000BFAA (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180011570 @ 0x180011570 (sub_180011570.c)
 *     unknown_libname_3 @ 0x1800142CC (unknown_libname_3.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_18001F5AC @ 0x18001F5AC (sub_18001F5AC.c)
 *     sub_18001F640 @ 0x18001F640 (sub_18001F640.c)
 *     unknown_libname_5 @ 0x180031D40 (unknown_libname_5.c)
 *     sub_180058850 @ 0x180058850 (sub_180058850.c)
 *     sub_18005CA40 @ 0x18005CA40 (sub_18005CA40.c)
 *     sub_18005E30C @ 0x18005E30C (sub_18005E30C.c)
 *     sub_18005E3D8 @ 0x18005E3D8 (sub_18005E3D8.c)
 *     sub_18005E468 @ 0x18005E468 (sub_18005E468.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_180079BE8 @ 0x180079BE8 (sub_180079BE8.c)
 *     sub_180089078 @ 0x180089078 (sub_180089078.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DA9A8 @ 0x1800DA9A8 (sub_1800DA9A8.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E31E4 @ 0x1800E31E4 (sub_1800E31E4.c)
 *     sub_1800E5D28 @ 0x1800E5D28 (sub_1800E5D28.c)
 *     sub_1800E62C8 @ 0x1800E62C8 (sub_1800E62C8.c)
 *     sub_1800E67E4 @ 0x1800E67E4 (sub_1800E67E4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
_QWORD *__fastcall sub_1800E51F0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _BYTE *v5; // rax
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // edi
  __int64 v13; // rbx
  LPVOID v14; // rcx
  LPVOID v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  ULONG_PTR v18; // rbx
  LPVOID v19; // rcx
  _QWORD *v20; // rsi
  int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  size_t v26; // r15
  void *v27; // r12
  __int64 v29; // r8
  const void **v30; // rax
  __int64 v31; // r8
  __int64 v32; // r8
  const void **v33; // rax
  __int64 v34; // r8
  __int64 v35; // r8
  const void **v36; // rax
  __int64 v37; // r8
  __int64 v38; // r8
  const void **v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // r8
  const void **v42; // rax
  __int64 v43; // r8
  __int64 v44; // r8
  const void **v45; // rbx
  _QWORD *v46; // rax
  __int64 v47; // r8
  _BYTE *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // r8
  _QWORD *v51; // rax
  __int64 v52; // r8
  _QWORD *v53; // rax
  __int64 v54; // r8
  _QWORD *v55; // rax
  __int64 v56; // r8
  LPVOID v57; // [rsp+40h] [rbp-C0h] BYREF
  void *v58; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v60; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v61; // [rsp+60h] [rbp-A0h]
  __int128 v62; // [rsp+70h] [rbp-90h] BYREF
  __int64 v63; // [rsp+80h] [rbp-80h]
  LPVOID *v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  __int64 v66; // [rsp+98h] [rbp-68h]
  void *Src[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68[2]; // [rsp+B0h] [rbp-50h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+C0h] [rbp-40h] BYREF
  EXCEPTION_RECORD v70; // [rsp+160h] [rbp+60h] BYREF
  __int128 v71; // [rsp+200h] [rbp+100h] BYREF
  __int128 v72; // [rsp+210h] [rbp+110h]
  _OWORD v73[2]; // [rsp+220h] [rbp+120h] BYREF
  __int128 v74; // [rsp+240h] [rbp+140h] BYREF
  __int64 v75; // [rsp+254h] [rbp+154h]
  __int64 v76; // [rsp+25Ch] [rbp+15Ch]
  __int64 v77; // [rsp+268h] [rbp+168h] BYREF
  int v78; // [rsp+274h] [rbp+174h]
  __int64 v79; // [rsp+284h] [rbp+184h]
  __int64 v80; // [rsp+28Ch] [rbp+18Ch]
  _QWORD v81[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v82[32]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 pExceptionObject; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v84; // [rsp+2E8h] [rbp+1E8h]
  int v85; // [rsp+2ECh] [rbp+1ECh]
  int v86; // [rsp+2F0h] [rbp+1F0h]
  int v87; // [rsp+2F4h] [rbp+1F4h]
  int v88; // [rsp+2F8h] [rbp+1F8h]
  int v89; // [rsp+2FCh] [rbp+1FCh]
  int v90; // [rsp+300h] [rbp+200h]
  int v91; // [rsp+304h] [rbp+204h]
  int v92; // [rsp+308h] [rbp+208h]
  int v93; // [rsp+30Ch] [rbp+20Ch]
  int v94; // [rsp+310h] [rbp+210h]
  int v95; // [rsp+314h] [rbp+214h]
  int v96; // [rsp+318h] [rbp+218h]
  __m128i si128; // [rsp+31Ch] [rbp+21Ch]
  int v98; // [rsp+32Ch] [rbp+22Ch]
  int v99; // [rsp+330h] [rbp+230h]
  int v100; // [rsp+334h] [rbp+234h]
  int v101; // [rsp+338h] [rbp+238h]
  int v102; // [rsp+33Ch] [rbp+23Ch]
  int v103; // [rsp+340h] [rbp+240h]
  void *retaddr; // [rsp+398h] [rbp+298h]

  v60 = a2;
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    v5 = *(_BYTE **)v4;
    v58 = v5;
    if ( v5 )
    {
      v58 = v5;
      if ( (v5[20] & 0x10) != 0 )
      {
        sub_1800113D0(&v71, "TextureD3D11::GetDeviceBuffer() -- reading of texture data is not supported for cubemaps");
        v51 = sub_1800113D0(
                v73,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
        sub_180079B60(&v77, (__int64)v51, v52, (const char *)&v71, 0);
        throw (Spectre::Engine::EngineException *)&v77;
      }
    }
  }
  else
  {
    v58 = 0LL;
  }
  if ( *(_DWORD *)(v4 + 12) > 1u )
  {
    sub_1800113D0(&v71, "TextureD3D11::GetDeviceBuffer() -- reading of texture data is not supported for MSAA textures");
    v55 = sub_1800113D0(
            v73,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_180079B60(&v77, (__int64)v55, v56, (const char *)&v71, 0);
    throw (Spectre::Engine::EngineException *)&v77;
  }
  v61 = 0LL;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    while ( v7 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
      if ( v8 == v7 )
      {
        v61 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_180018704((__int64)v68);
  v9 = v68[0];
  sub_1800DA968(v68[0], &v65);
  sub_1800DA9A8(v9, &v60);
  v66 = 0LL;
  *(_QWORD *)&v61 = 0LL;
  v10 = *(_QWORD *)(a1 + 168);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 80LL))(v10, &v77);
    v79 = 3LL;
    v80 = 0x20000LL;
    v78 = 1;
    v57 = 0LL;
    v11 = v65;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, LPVOID *))(*(_QWORD *)v65 + 40LL))(
            v65,
            &v77,
            0LL,
            &v57);
    sub_1800DD668(v9, v12);
    if ( v12 < 0 )
    {
      sub_1800113D0(&v71, "THROW_IF_FAILED_DETAILED. ");
      v30 = sub_18001F640((const void **)&v71, " File=", v29);
      sub_18001F640(
        v30,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        v31);
      v33 = sub_18001F640((const void **)&v71, " Line=", v32);
      sub_18001F640(v33, "384", v34);
      v36 = sub_18001F640((const void **)&v71, " Message=", v35);
      sub_18001F640(v36, "\"TextureD3D11::GetDeviceBuffer(): unable to create texture (2D)\"", v37);
      v39 = sub_18001F640((const void **)&v71, " Details=\"", v38);
      unknown_libname_5(&v62);
      v40 = (_QWORD *)sub_1800E62C8(v73, &v77, &v62);
      v42 = sub_18001F5AC((__int64)v39, v40, v41);
      sub_18001F640(v42, "\"", v43);
      sub_180011570((__int64)v73);
      sub_180089078((__int64)&v62);
      v45 = sub_18001F640((const void **)&v71, " HRESULT=", v44);
      v46 = (_QWORD *)sub_1800E67E4(v82, (unsigned int)v12);
      sub_18001F5AC((__int64)v45, v46, v47);
      sub_180011570((__int64)v82);
      v48 = unknown_libname_3(&v71);
      sub_1800113D0(&v74, v48);
      v49 = sub_1800113D0(
              v81,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_180079BE8(&pExceptionObject, (__int64)v49, v50, v12, (const char *)&v74, 0);
      throw (Spectre::Engine::EngineException *)&pExceptionObject;
    }
    v13 = *(_QWORD *)(a1 + 168);
    if ( v13 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(a1 + 168));
    v66 = v13;
    v14 = v57;
    v15 = v57;
    if ( v57 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v57 + 8LL))(v57);
      v14 = v57;
    }
    *(_QWORD *)&v61 = v15;
    if ( v14 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 176);
    if ( !v16 )
    {
      sub_1800113D0(v81, "TextureD3D11::GetDeviceBuffer - No valid D3D11 texture interface pointer");
      v53 = sub_1800113D0(
              &v74,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_180079B60(&pExceptionObject, (__int64)v53, v54, (const char *)v81, 0);
      throw (Spectre::Engine::EngineException *)&pExceptionObject;
    }
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v16 + 80LL))(v16, &v74);
    v75 = 3LL;
    v76 = 0x20000LL;
    v57 = 0LL;
    v11 = v65;
    v17 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, LPVOID *))(*(_QWORD *)v65 + 48LL))(
            v65,
            &v74,
            0LL,
            &v57);
    v18 = v17;
    sub_1800DD668(v9, v17);
    if ( (v18 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v18;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v13 = *(_QWORD *)(a1 + 176);
    if ( v13 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(a1 + 176));
    v66 = v13;
    v19 = v57;
    v15 = v57;
    if ( v57 )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v57 + 8LL))(v57);
      v19 = v57;
    }
    *(_QWORD *)&v61 = v15;
    if ( v19 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  v20 = v60;
  (*(void (__fastcall **)(_QWORD *, LPVOID, __int64))(*v60 + 376LL))(v60, v15, v13);
  *(_OWORD *)Src = 0LL;
  v59 = (*(__int64 (__fastcall **)(_QWORD *, LPVOID, _QWORD, __int64, _DWORD, void **))(*v20 + 112LL))(
          v20,
          v15,
          0LL,
          1LL,
          0,
          Src);
  sub_1800DD668(v9, v59);
  if ( (v59 & 0x80000000) != 0 )
  {
    memset(&v70, 0, sizeof(v70));
    v70.ExceptionCode = -532265403;
    v70.ExceptionAddress = retaddr;
    v70.NumberParameters = 1;
    v70.ExceptionInformation[0] = (int)v59;
    RaiseFailFastException(&v70, 0LL, 0);
  }
  v21 = sub_18005E30C(a1);
  pExceptionObject = 0x400000000LL;
  v84 = 4;
  v85 = 4;
  v86 = 8;
  v87 = 12;
  v88 = 16;
  v89 = 4;
  v90 = 4;
  v91 = 8;
  v92 = 12;
  v93 = 16;
  v94 = 2;
  v95 = 1;
  v96 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7F0);
  v98 = 2;
  v99 = 4;
  v100 = 8;
  v101 = 4;
  v102 = 1;
  v103 = 2;
  LODWORD(v64) = *((_DWORD *)&pExceptionObject + v21);
  LODWORD(v57) = Src[1];
  v59 = (unsigned int)Src[1];
  if ( *(_QWORD *)(a1 + 176) )
  {
    v22 = HIDWORD(Src[1]);
  }
  else
  {
    sub_18005E3D8(a1);
    sub_18005E468(a1);
    v23 = sub_18005E30C(a1);
    v22 = sub_1800E5D28(v23, v24, v25, &v59);
  }
  v59 = v22;
  v26 = (unsigned int)(v22 * *((_DWORD *)v58 + 2));
  sub_180058850(&v58, v26);
  v27 = v58;
  if ( v26 )
  {
    if ( v58 )
    {
      if ( Src[0] )
      {
        memcpy(v58, Src[0], (unsigned int)v26);
        goto LABEL_42;
      }
      memset(v58, 0, (unsigned int)v26);
    }
    *(_DWORD *)o__errno() = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_42:
  (*(void (__fastcall **)(_QWORD *, LPVOID, _QWORD))(*v20 + 120LL))(v20, v15, 0LL);
  *(_QWORD *)&v71 = 0LL;
  *((_QWORD *)&v71 + 1) = v26;
  *(_QWORD *)&v72 = __PAIR64__((unsigned int)v57, (unsigned int)v64);
  *((_QWORD *)&v72 + 1) = v59;
  v64 = &v57;
  v58 = 0LL;
  v57 = v27;
  v73[0] = v71;
  v73[1] = v72;
  v62 = 0LL;
  v63 = 0LL;
  *(_QWORD *)&v62 = sub_180011088(0x20uLL);
  *((_QWORD *)&v62 + 1) = v62;
  v63 = v62 + 32;
  *((_QWORD *)&v62 + 1) = sub_1800E31E4(v73, &v74, (_OWORD *)v62);
  sub_18005CA40(a2, (__int64)&v62, &v57);
  if ( v15 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  sub_180010910((__int64)v68);
  return a2;
}
