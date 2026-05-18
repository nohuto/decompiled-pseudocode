/*
 * XREFs of sub_1800CE190 @ 0x1800CE190
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18000BF9A (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 *     sub_180025AEC @ 0x180025AEC (sub_180025AEC.c)
 *     sub_18002A4FC @ 0x18002A4FC (sub_18002A4FC.c)
 *     sub_1800488C8 @ 0x1800488C8 (sub_1800488C8.c)
 *     sub_180051000 @ 0x180051000 (sub_180051000.c)
 *     sub_180055484 @ 0x180055484 (sub_180055484.c)
 *     sub_180056744 @ 0x180056744 (sub_180056744.c)
 *     sub_180056848 @ 0x180056848 (sub_180056848.c)
 *     sub_180056918 @ 0x180056918 (sub_180056918.c)
 *     sub_18006ED7C @ 0x18006ED7C (sub_18006ED7C.c)
 *     sub_18006EDE8 @ 0x18006EDE8 (sub_18006EDE8.c)
 *     sub_180097908 @ 0x180097908 (sub_180097908.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C58DC @ 0x1800C58DC (sub_1800C58DC.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CC200 @ 0x1800CC200 (sub_1800CC200.c)
 *     sub_1800CC518 @ 0x1800CC518 (sub_1800CC518.c)
 *     sub_1800CC6D0 @ 0x1800CC6D0 (sub_1800CC6D0.c)
 *     sub_1800CEBF8 @ 0x1800CEBF8 (sub_1800CEBF8.c)
 *     sub_1800CF0F4 @ 0x1800CF0F4 (sub_1800CF0F4.c)
 *     sub_1800CF560 @ 0x1800CF560 (sub_1800CF560.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
_QWORD *__fastcall sub_1800CE190(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _BYTE *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *, _QWORD, __int128 **); // rdi
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
  _QWORD *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, __int64 *, _QWORD, __int128 **); // rdi
  int v31; // eax
  ULONG_PTR v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rbx
  int v36; // eax
  unsigned int v37; // r13d
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  size_t v41; // r14
  __int64 v42; // rcx
  void *v43; // rdx
  void *v44; // r15
  unsigned __int64 v45; // rax
  _QWORD *v47; // rax
  __int64 v48; // r8
  __int128 *v49; // [rsp+40h] [rbp-C0h] BYREF
  void *v50; // [rsp+48h] [rbp-B8h] BYREF
  void *v51; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v52; // [rsp+58h] [rbp-A8h] BYREF
  void **v53; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  __int64 v57[2]; // [rsp+80h] [rbp-80h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h]
  void **v61; // [rsp+B8h] [rbp-48h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+C0h] [rbp-40h] BYREF
  EXCEPTION_RECORD v63; // [rsp+160h] [rbp+60h] BYREF
  void *v64[2]; // [rsp+200h] [rbp+100h] BYREF
  int v65; // [rsp+210h] [rbp+110h]
  int v66; // [rsp+214h] [rbp+114h]
  unsigned __int64 v67; // [rsp+218h] [rbp+118h]
  __int128 v68; // [rsp+220h] [rbp+120h] BYREF
  unsigned __int64 v69; // [rsp+230h] [rbp+130h]
  unsigned __int64 v70; // [rsp+238h] [rbp+138h]
  __int64 pExceptionObject; // [rsp+240h] [rbp+140h] BYREF
  int v72; // [rsp+24Ch] [rbp+14Ch]
  __int64 v73; // [rsp+254h] [rbp+154h]
  __int64 v74; // [rsp+25Ch] [rbp+15Ch]
  __int64 v75; // [rsp+264h] [rbp+164h]
  _QWORD v76[4]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v77[7]; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *retaddr; // [rsp+318h] [rbp+218h]

  v52 = a2;
  v4 = a1[14];
  if ( v4 )
  {
    v5 = *(_BYTE **)v4;
    v50 = v5;
    if ( v5 )
    {
      v50 = v5;
      if ( (v5[20] & 0x10) != 0 )
      {
        sub_180010DD0(
          &v68,
          (__int64)"TextureD3D11::GetDeviceBuffer() -- reading of texture data is not supported for cubemaps");
        v6 = sub_180010DD0(
               v64,
               (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
        sub_18006ED7C(&pExceptionObject, (__int64)v6, v7, (const char *)&v68, 0);
        throw (Spectre::Engine::EngineException *)&pExceptionObject;
      }
    }
  }
  else
  {
    v50 = 0LL;
  }
  if ( *(_DWORD *)(v4 + 12) > 1u )
  {
    sub_180010DD0(
      &v68,
      (__int64)"TextureD3D11::GetDeviceBuffer() -- reading of texture data is not supported for MSAA textures");
    v8 = sub_180010DD0(
           v64,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_18006ED7C(&pExceptionObject, (__int64)v8, v9, (const char *)&v68, 0);
    throw (Spectre::Engine::EngineException *)&pExceptionObject;
  }
  sub_180011C50((__int64)(a1 + 9), v57);
  sub_180097908(&v59, v57);
  v10 = v59;
  sub_1800C589C(v59, &v56);
  sub_1800C58DC(v10, &v52);
  v54 = 0LL;
  v55 = 0LL;
  v11 = a1[21];
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 80LL))(v11, &pExceptionObject);
    v74 = 3LL;
    v75 = 0x20000LL;
    v72 = 1;
    v49 = 0LL;
    v12 = v56;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int128 **))(*(_QWORD *)v56 + 40LL);
    sub_18000E72C((__int64 *)&v49);
    v14 = v13(v12, &pExceptionObject, 0LL, &v49);
    sub_1800C7750(v10, v14);
    if ( v14 < 0 )
    {
      sub_180010DD0(v64, (__int64)"THROW_IF_FAILED_DETAILED. ");
      v15 = sub_18001DE60(v64, " File=", 6uLL);
      sub_18001DE60(
        v15,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        0x5CuLL);
      v16 = sub_18001DE60(v64, " Line=", 6uLL);
      sub_18001DE60(v16, "384", 3uLL);
      v17 = sub_18001DE60(v64, " Message=", 9uLL);
      sub_18001DE60(v17, "\"TextureD3D11::GetDeviceBuffer(): unable to create texture (2D)\"", 0x40uLL);
      v18 = sub_18001DE60(v64, " Details=\"", 0xAuLL);
      v68 = 0LL;
      v69 = 0LL;
      v19 = (_QWORD *)sub_1800CF0F4(v76, &pExceptionObject, &v68);
      v20 = v19[2];
      if ( v19[3] >= 0x10uLL )
        v19 = (_QWORD *)*v19;
      v21 = sub_18001DE60(v18, v19, v20);
      sub_18001DE60(v21, "\"", 1uLL);
      sub_180011B24((__int64)v76);
      sub_18002A4FC((__int64)&v68);
      v22 = sub_18001DE60(v64, " HRESULT=", 9uLL);
      sub_1800CC6D0((__int64)&v68, v14);
      v23 = &v68;
      if ( v70 >= 0x10 )
        v23 = (__int128 *)v68;
      sub_18001DE60(v22, v23, v69);
      sub_180011B24((__int64)&v68);
      v24 = v64;
      if ( v67 >= 0x10 )
        v24 = (void **)v64[0];
      sub_180010DD0(v76, (__int64)v24);
      v25 = sub_180010DD0(
              &v68,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_18006EDE8(v77, (__int64)v25, v26, v14, (const char *)v76, 0);
      throw (Spectre::Engine::EngineException *)v77;
    }
    sub_1800CC200(&v54, a1 + 21);
    sub_1800CC200(&v55, (__int64 *)&v49);
    sub_18000E72C((__int64 *)&v49);
    v27 = a1 + 22;
  }
  else
  {
    v27 = a1 + 22;
    v28 = a1[22];
    if ( !v28 )
    {
      sub_180010DD0(&v68, (__int64)"TextureD3D11::GetDeviceBuffer - No valid D3D11 texture interface pointer");
      v47 = sub_180010DD0(
              v64,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_18006ED7C(v77, (__int64)v47, v48, (const char *)&v68, 0);
      throw (Spectre::Engine::EngineException *)v77;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 80LL))(v28, &pExceptionObject);
    v73 = 3LL;
    v74 = 0x20000LL;
    v49 = 0LL;
    v29 = v56;
    v30 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int128 **))(*(_QWORD *)v56 + 48LL);
    sub_18000E72C((__int64 *)&v49);
    v31 = v30(v29, &pExceptionObject, 0LL, &v49);
    v32 = v31;
    sub_1800C7750(v10, v31);
    if ( (v32 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v32;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_1800CC200(&v54, a1 + 22);
    sub_1800CC200(&v55, (__int64 *)&v49);
    sub_18000E72C((__int64 *)&v49);
  }
  v33 = (__int64)v52;
  v34 = v54;
  v35 = v55;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v52 + 376LL))(v52, v55, v54);
  *(_OWORD *)Src = 0LL;
  LODWORD(v51) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v33 + 112LL))(
                   v33,
                   v35,
                   0LL,
                   1LL,
                   0,
                   Src);
  sub_1800C7750(v10, (int)v51);
  if ( (int)v51 < 0 )
  {
    memset(&v63, 0, sizeof(v63));
    v63.ExceptionCode = -532265403;
    v63.ExceptionAddress = retaddr;
    v63.NumberParameters = 1;
    v63.ExceptionInformation[0] = (int)v51;
    RaiseFailFastException(&v63, 0LL, 0);
  }
  v36 = sub_180056744((__int64)a1);
  LODWORD(v53) = sub_1800488C8(v36);
  LODWORD(v49) = Src[1];
  LODWORD(v51) = Src[1];
  if ( *v27 )
  {
    v37 = HIDWORD(Src[1]);
  }
  else
  {
    sub_180056848((__int64)a1);
    sub_180056918((__int64)a1);
    v38 = sub_180056744((__int64)a1);
    v37 = sub_1800CEBF8(v38, v39, v40, &v51);
  }
  v41 = *((_DWORD *)v50 + 2) * v37;
  sub_180051000(&v50, v41);
  v43 = Src[0];
  v44 = v50;
  if ( v41 )
  {
    if ( v50 )
    {
      if ( Src[0] )
      {
        memcpy(v50, Src[0], (unsigned int)v41);
        goto LABEL_33;
      }
      memset(v50, 0, (unsigned int)v41);
    }
    *(_DWORD *)o__errno(v42, v43) = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_33:
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v33 + 120LL))(v33, v35, 0LL);
  v61 = &v51;
  v50 = 0LL;
  v51 = v44;
  v64[0] = 0LL;
  v64[1] = (void *)v41;
  v65 = (int)v53;
  v66 = (int)v49;
  v67 = v37;
  v76[0] = v64;
  v76[1] = &v68;
  v68 = 0LL;
  v69 = 0LL;
  v49 = &v68;
  v53 = v64;
  v45 = sub_1800CF560(v76);
  sub_1800CC518((__int64 *)&v68, v45, (_OWORD **)&v53, &v49);
  sub_180055484(a2, (__int64 *)&v68, &v51, v41);
  sub_180025AEC(&v50);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  sub_18000E72C((__int64 *)&v52);
  sub_18000E72C(&v56);
  if ( v60 )
    sub_180010530(v60);
  return a2;
}
