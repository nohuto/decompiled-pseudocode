/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800381B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180039534 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180039660 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1800F445C (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180101100 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180101168 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801ED9EC (-IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // r12d
  __int64 v8; // rax
  CCommonRenderingEffect *v9; // r8
  int *v10; // rax
  __m128i *v11; // rax
  int v12; // eax
  unsigned int v13; // r14d
  __int64 i; // rbx
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 (__fastcall ***v17)(_QWORD, char *); // rcx
  __int64 v18; // rax
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  CD3DDevice *v23; // r9
  char *v24; // r10
  unsigned int v25; // ecx
  _QWORD *v26; // r11
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  bool v30; // zf
  unsigned int ColorChannelDepth; // eax
  unsigned int v32; // r11d
  __int64 v33; // rcx
  char v34; // al
  char v35; // r9
  DXGI_COLOR_SPACE_TYPE v36; // ecx
  int CommonOrCubeMapRenderingShadersNoRefInternal; // r15d
  bool v38; // r10
  int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // eax
  __int128 v42; // xmm0
  CD3DDevice *v43; // rbx
  unsigned int v44; // ecx
  DXGI_COLOR_SPACE_TYPE v45; // r14d
  void (__fastcall *v46)(__int64, __int64, _QWORD, _QWORD); // r12
  int v47; // ecx
  __int64 v48; // r8
  __int64 v49; // rdx
  _DWORD *v50; // rax
  __int64 v51; // rbx
  __int64 (__fastcall ***v53)(_QWORD, char *); // rcx
  __int64 (__fastcall ***v54)(_QWORD, char *); // rcx
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  __int64 v59; // r10
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // r9
  __int64 *v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // r11
  int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // ebx
  unsigned int v69; // ecx
  int v70; // [rsp+30h] [rbp-D0h]
  DXGI_COLOR_SPACE_TYPE v71; // [rsp+34h] [rbp-CCh] BYREF
  CCommonRenderingEffect *v72; // [rsp+38h] [rbp-C8h]
  __int16 v73; // [rsp+40h] [rbp-C0h]
  __int16 v74; // [rsp+50h] [rbp-B0h]
  __int64 v75; // [rsp+60h] [rbp-A0h]
  __int64 *v76; // [rsp+68h] [rbp-98h] BYREF
  __int16 v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+80h] [rbp-80h] BYREF
  __int128 v79; // [rsp+88h] [rbp-78h]
  __m128i v80; // [rsp+98h] [rbp-68h]
  int v81; // [rsp+A8h] [rbp-58h]
  int v82; // [rsp+ACh] [rbp-54h]
  CD3DDevice *v83; // [rsp+B0h] [rbp-50h]
  struct ID3D11PixelShader *v84; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v85; // [rsp+C0h] [rbp-40h]
  _QWORD *v86; // [rsp+D0h] [rbp-30h]
  char *v87; // [rsp+D8h] [rbp-28h]
  unsigned int *v88; // [rsp+E0h] [rbp-20h]
  DXGI_FORMAT v89[2]; // [rsp+E8h] [rbp-18h]
  DXGI_COLOR_SPACE_TYPE v90; // [rsp+F0h] [rbp-10h]
  __int128 v91; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v92; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v93[3]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v94; // [rsp+124h] [rbp+24h]
  int v95; // [rsp+12Ch] [rbp+2Ch]
  int v96; // [rsp+130h] [rbp+30h]
  __int128 v97; // [rsp+134h] [rbp+34h]
  int v98; // [rsp+144h] [rbp+44h]
  int v99; // [rsp+148h] [rbp+48h]
  char v100[16]; // [rsp+150h] [rbp+50h] BYREF
  char v101[16]; // [rsp+160h] [rbp+60h] BYREF
  char v102[16]; // [rsp+170h] [rbp+70h] BYREF

  v3 = 0LL;
  v4 = *((_QWORD *)a2 + 2);
  v5 = *((_QWORD *)a2 + 4);
  v6 = *((_DWORD *)a2 + 30);
  v83 = (CD3DDevice *)*((_QWORD *)a2 + 1);
  v78 = 0LL;
  *(_QWORD *)&v79 = "NoOp";
  v80.m128i_i64[0] = (__int64)"NoOp";
  v82 = 0;
  v8 = *((_QWORD *)a2 + 6);
  v88 = a3;
  v9 = this;
  v72 = this;
  v84 = 0LL;
  DWORD2(v79) = 0;
  v80.m128i_i32[2] = 0;
  v91 = 0LL;
  v92 = 0LL;
  if ( v8 )
  {
    v10 = (int *)(v8 + 16);
  }
  else
  {
    LODWORD(this) = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL);
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > (int)this )
    {
      Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
      {
        `CLightsMask::NoLights'::`2'::noLights = -1;
        Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      }
      v9 = v72;
    }
    v10 = &`CLightsMask::NoLights'::`2'::noLights;
  }
  v81 = *v10;
  BYTE1(v82) = v6 == 1;
  BYTE2(v82) = *((_BYTE *)a2 + 82) == 2;
  if ( v6 == 1 && !ColorConversion::IsHDRColorSpace(DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709) )
  {
    LOBYTE(v82) = 1;
LABEL_78:
    v11 = (__m128i *)&off_1803D1010;
    goto LABEL_7;
  }
  LOBYTE(v82) = 0;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292288, 0x98u, 0LL);
      return 2291675008LL;
    }
    goto LABEL_78;
  }
  v11 = (__m128i *)&ColorConversion::g_rgShaders;
LABEL_7:
  if ( (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*v11, 8)) > 1 )
    v80 = *v11;
  v12 = v78;
  if ( *(_BYTE *)(v5 + 368) )
  {
    v12 = v78 | 0x10;
    LODWORD(v78) = v78 | 0x10;
  }
  v70 = v12;
  if ( *((_DWORD *)a2 + 16) == 22 )
  {
    v70 = v12 | 8;
    LODWORD(v78) = v12 | 8;
  }
  v13 = 0;
  v71 = v90;
  for ( i = 0LL; ; ++i )
  {
    while ( 1 )
    {
      v15 = (__int64 *)*((_QWORD *)v9 + 3 * i + 3);
      if ( v15 )
        break;
LABEL_44:
      ++v13;
      ++i;
      if ( v13 >= 2 )
      {
        v43 = v83;
        v71 = 0x80000000;
        CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDevice::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                         v83,
                                                         (const struct CommonRenderingShaderDesc *)&v78,
                                                         0,
                                                         (unsigned int *)&v71,
                                                         &v84);
        if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0xE6u, 0LL);
        }
        else
        {
          v45 = v71;
          v46 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 88LL);
          v47 = 0;
          if ( *((int *)v43 + 382) > 0 )
          {
            v48 = *((int *)v43 + 382);
            v49 = 0LL;
            v50 = (_DWORD *)*((_QWORD *)v43 + 189);
            while ( *v50 != v71 )
            {
              ++v47;
              ++v49;
              ++v50;
              if ( v49 >= v48 )
                goto LABEL_52;
            }
            if ( v47 != -1 )
            {
              v51 = *(_QWORD *)(*((_QWORD *)v43 + 190) + 8LL * v47);
              if ( v51 )
              {
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v51 + 8LL))(v51, v49, v48);
                v3 = v51;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
              }
            }
          }
LABEL_52:
          v46(v4, v3, 0LL, 0LL);
          (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v4 + 72LL))(
            v4,
            v84,
            0LL,
            0LL);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v4 + 64LL))(v4, 0LL, 2LL, &v91);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v4 + 80LL))(v4, 0LL, 2LL, &v92);
          *v88 = v45;
        }
        return (unsigned int)CommonOrCubeMapRenderingShadersNoRefInternal;
      }
    }
    v16 = *v15;
    v76 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 **))(v16 + 48))(v15, *((_QWORD *)a2 + 14), &v76) < 0 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v76);
      v21 = 0LL;
    }
    else
    {
      v17 = (__int64 (__fastcall ***)(_QWORD, char *))((char *)v76 + *(int *)(v76[1] + 12) + 8);
      v18 = (**v17)(v17, v100);
      v19 = *(_QWORD *)v18;
      v71 = *(_DWORD *)(v18 + 8);
      v20 = *v76;
      *(_QWORD *)v89 = v19;
      v21 = (*(__int64 (__fastcall **)(__int64 *))(v20 + 8))(v76);
      v75 = v21;
      if ( v76 )
      {
        v22 = (__int64)v76 + *(int *)(v76[1] + 4) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        v21 = v75;
      }
    }
    v9 = v72;
    v23 = v83;
    *((_QWORD *)&v91 + i) = v21;
    v24 = (char *)v9 + 2 * i;
    v25 = (unsigned __int8)*(_WORD *)&v24[i + 64];
    v73 = *(_WORD *)&v24[i + 64];
    v87 = v24;
    v26 = (_QWORD *)((char *)v23 + 128 * v25 + 32 * HIBYTE(v73) + 8 * (unsigned __int8)v24[i + 66] + 1880);
    v86 = v26;
    if ( *v26 )
      goto LABEL_19;
    v77 = *(_WORD *)&v24[i + 64];
    if ( HIBYTE(v77) && v24[i + 66] )
      v56 = 37120;
    else
      v56 = 37632;
    if ( *((_DWORD *)v23 + 146) < v56 )
      break;
    v74 = *(_WORD *)&v24[i + 64];
    if ( (_BYTE)v74 )
      v57 = 21;
    else
      v57 = 0;
    v93[0] = v57;
    v58 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v74));
    v60 = *(unsigned __int8 *)(i + v59 + 66);
    v93[1] = v58;
    v61 = ExtendMode::ToD3D11TextureAddressMode(v60);
    v63 = *(__int64 **)(v62 + 552);
    v93[2] = v61;
    v94 = 3LL;
    v95 = 1;
    v96 = 8;
    v97 = 0LL;
    v98 = 0;
    v99 = 2139095039;
    v64 = *v63;
    *v65 = 0LL;
    v66 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD *))(v64 + 184))(v63, v93, v65);
    if ( v66 < 0 )
    {
      v68 = v66;
      MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0xC21u, 0LL);
      goto LABEL_122;
    }
    v9 = v72;
    v26 = v86;
LABEL_19:
    *(_QWORD *)&v93[2 * i - 4] = *v26;
    v27 = v70;
    if ( v13 )
    {
      v70 |= 2u;
      LODWORD(v78) = v27 | 2;
      goto LABEL_44;
    }
    v28 = v70 | 1;
    v70 = v28;
    LODWORD(v78) = v28;
    if ( *((_BYTE *)v9 + 24 * i + 32) )
      goto LABEL_54;
    v29 = *((_QWORD *)v9 + 3 * i + 2);
    if ( v29 )
    {
      v30 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29) == 0;
      v28 = v70;
      if ( v30 )
        goto LABEL_23;
LABEL_54:
      v28 |= 4u;
      v70 = v28;
      LODWORD(v78) = v28;
      goto LABEL_23;
    }
    v53 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)v9 + 3 * i + 3)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)v9 + 3 * i + 3) + 8LL) + 8LL));
    v30 = *(_DWORD *)((**v53)(v53, v101) + 4) == 3;
    v28 = v70;
    if ( v30 )
      goto LABEL_54;
LABEL_23:
    if ( v87[i + 64] == 2 )
    {
      v70 = v28 | 0x20;
      LODWORD(v78) = v28 | 0x20;
    }
    *(_QWORD *)&v85 = "NoOp";
    DWORD2(v85) = 0;
    ColorChannelDepth = GetColorChannelDepth(v89[0]);
    v9 = v72;
    v32 = ColorChannelDepth;
    LODWORD(v75) = ColorChannelDepth;
    if ( *((_BYTE *)v72 + 24 * i + 32) )
      goto LABEL_55;
    v33 = *((_QWORD *)v72 + 3 * i + 2);
    if ( !v33 )
    {
      v54 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)v72 + 3 * i + 3)
                                                     + 8LL
                                                     + *(int *)(*(_QWORD *)(*((_QWORD *)v72 + 3 * i + 3) + 8LL) + 8LL));
      v55 = (**v54)(v54, v102);
      v9 = v72;
      v32 = v75;
      if ( *(_DWORD *)(v55 + 4) != 3 )
      {
        v35 = 0;
        goto LABEL_28;
      }
LABEL_55:
      v35 = 1;
      goto LABEL_28;
    }
    v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
    v9 = v72;
    v35 = v34;
    v32 = v75;
LABEL_28:
    v36 = v71;
    CommonOrCubeMapRenderingShadersNoRefInternal = -2003292288;
    v38 = v6 == 1 && !ColorConversion::IsHDRColorSpace(v71);
    v39 = 0;
    if ( v36 )
    {
      switch ( v36 )
      {
        case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
          if ( v6 )
          {
            v39 = 40;
            v40 = 40;
            goto LABEL_33;
          }
          v39 = 2;
          CommonOrCubeMapRenderingShadersNoRefInternal = 0;
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709:
          if ( v6 )
          {
            if ( v32 == 8 )
            {
              v39 = 16;
              v40 = 16;
              goto LABEL_33;
            }
            if ( v32 == 10 )
            {
              v39 = 24;
              v40 = 24;
              goto LABEL_33;
            }
          }
          else
          {
            if ( v32 == 8 )
            {
              v39 = 14;
              v40 = 14;
              goto LABEL_33;
            }
            if ( v32 == 10 )
            {
LABEL_98:
              v39 = 22;
              CommonOrCubeMapRenderingShadersNoRefInternal = 0;
            }
          }
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020:
          if ( !v6 )
            goto LABEL_98;
          v39 = 24;
          v40 = 24;
          goto LABEL_33;
        case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
          if ( v6 )
          {
            v39 = 12;
            v40 = 12;
            goto LABEL_33;
          }
          v39 = 10;
          CommonOrCubeMapRenderingShadersNoRefInternal = 0;
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020:
          if ( v6 )
          {
            v39 = 36;
            v40 = 36;
            goto LABEL_33;
          }
          v39 = 34;
          CommonOrCubeMapRenderingShadersNoRefInternal = 0;
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P709:
          if ( v6 )
          {
            if ( v32 == 8 )
            {
              v39 = 20;
              v40 = 20;
              goto LABEL_33;
            }
            if ( v32 == 10 )
            {
              v39 = 28;
              v40 = 28;
              goto LABEL_33;
            }
          }
          else
          {
            if ( v32 == 8 )
            {
              v39 = 18;
              v40 = 18;
              goto LABEL_33;
            }
            if ( v32 == 10 )
            {
              v39 = 26;
              CommonOrCubeMapRenderingShadersNoRefInternal = 0;
            }
          }
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020:
          if ( v6 )
          {
            v39 = 32;
            v40 = 32;
            goto LABEL_33;
          }
          v39 = 30;
          CommonOrCubeMapRenderingShadersNoRefInternal = 0;
LABEL_73:
          v40 = v39;
          if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
          {
            v42 = v85;
            goto LABEL_37;
          }
          break;
        default:
          goto LABEL_73;
      }
    }
    else
    {
      if ( v6 )
      {
        v39 = 6;
        v40 = 6;
      }
      else
      {
        v40 = 0;
      }
LABEL_33:
      CommonOrCubeMapRenderingShadersNoRefInternal = 0;
    }
    v41 = v39 + 1;
    if ( !v35 )
      v41 = v40;
    v40 = 2 * v41;
    v42 = *((_OWORD *)&ColorConversion::g_rgShaders + v41);
    v85 = v42;
LABEL_37:
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0xCAu, 0LL);
      return (unsigned int)CommonOrCubeMapRenderingShadersNoRefInternal;
    }
    if ( DWORD2(v85) > 1 )
      v79 = v42;
    if ( !v38 )
      LOBYTE(v82) = 0;
    v13 = 1;
  }
  v68 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024809, 0xC1Cu, 0LL);
LABEL_122:
  MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0xB1u, 0LL);
  return v68;
}
