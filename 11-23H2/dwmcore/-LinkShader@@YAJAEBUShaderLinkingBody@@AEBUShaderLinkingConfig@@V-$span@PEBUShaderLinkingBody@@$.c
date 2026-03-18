/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800BA9B0
 * Callers:
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800BC308 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 * Callees:
 *     AppendLights @ 0x18001B768 (AppendLights.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800B457C (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ??$_Find@W4ShaderLinkingArgument@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@1@AEBW4ShaderLinkingArgument@@_K@Z @ 0x1800B4AFC (--$_Find@W4ShaderLinkingArgument@@@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShade.c)
 *     DiscoverSamplers @ 0x1800BA900 (DiscoverSamplers.c)
 *     PrepareSamplers @ 0x1800BAF88 (PrepareSamplers.c)
 *     ??A?$span@USamplerPresenceEntry@@$0?0@gsl@@QEBAAEAUSamplerPresenceEntry@@_K@Z @ 0x1800BB084 (--A-$span@USamplerPresenceEntry@@$0-0@gsl@@QEBAAEAUSamplerPresenceEntry@@_K@Z.c)
 *     ?DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z @ 0x1800BB0A8 (-DoesSamplerRequireConstantBufferData@@YA_NAEBUShaderLinkingSamplerDesc@@@Z.c)
 *     AppendShaderBody @ 0x1800BB27C (AppendShaderBody.c)
 *     LoadShaderBody @ 0x1800BB3A0 (LoadShaderBody.c)
 *     HasWhiteNoise @ 0x1800BB638 (HasWhiteNoise.c)
 *     GetExpectedVertexShaderDesc @ 0x1800BB7E8 (GetExpectedVertexShaderDesc.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800BBE9C (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800BC0F0 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     UseFragmentsModuleNoRef @ 0x1800BC178 (UseFragmentsModuleNoRef.c)
 *     InitializeShaderLinkingInput @ 0x1800BC508 (InitializeShaderLinkingInput.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800BC80C (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800CDC08 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800DBD80 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180103C6C (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x180205434 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall LinkShader(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, struct ID3D10Blob **a5)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  unsigned int v9; // esi
  _QWORD **v10; // rax
  _QWORD **v11; // rbx
  _QWORD **v12; // r12
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // r15d
  unsigned int v17; // r12d
  unsigned int v18; // r14d
  bool v19; // al
  __int64 v20; // rdx
  char v21; // al
  _QWORD *v22; // r12
  char v23; // r15
  _QWORD *i; // rbx
  _DWORD *v25; // r12
  __int64 ExpectedVertexShaderDesc; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // ebx
  int v31; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // r14
  __int64 appended; // rax
  __int64 v35; // rax
  gsl::details *v36; // rcx
  int v37; // eax
  gsl::details *v38; // rcx
  int v39; // r15d
  __int64 v40; // rsi
  __int64 v41; // r12
  int v42; // r8d
  int ShaderBody; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // r8d
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  int v57; // ecx
  unsigned int v58; // eax
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  int ConversionShader; // eax
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rcx
  bool v73; // zf
  char *v74; // rax
  int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v78[8]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v79; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v80; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v81; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v82; // [rsp+60h] [rbp-A0h]
  __int64 v83; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v84; // [rsp+70h] [rbp-90h]
  _OWORD *v85; // [rsp+78h] [rbp-88h]
  _QWORD v86[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v87[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v88; // [rsp+A0h] [rbp-60h]
  struct ID3D10Blob **v89; // [rsp+A8h] [rbp-58h]
  struct ID3D11Linker *ppLinker[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v91[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v92; // [rsp+C8h] [rbp-38h]
  __int128 v93; // [rsp+110h] [rbp+10h]
  __int128 v94; // [rsp+120h] [rbp+20h]
  __int128 v95; // [rsp+130h] [rbp+30h]
  __int128 v96; // [rsp+140h] [rbp+40h]
  const char *v97; // [rsp+150h] [rbp+50h] BYREF
  __int128 v98; // [rsp+160h] [rbp+60h]
  __int128 v99; // [rsp+170h] [rbp+70h]
  __int128 v100; // [rsp+180h] [rbp+80h]
  __int128 v101; // [rsp+190h] [rbp+90h] BYREF
  __int128 v102; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v103; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v104; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v105; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v106; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v107; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v108; // [rsp+200h] [rbp+100h] BYREF
  _OWORD v109[2]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v110[2]; // [rsp+250h] [rbp+150h] BYREF
  char v111[16]; // [rsp+260h] [rbp+160h] BYREF
  _QWORD *v112; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v113[12]; // [rsp+278h] [rbp+178h] BYREF
  char v114; // [rsp+284h] [rbp+184h]
  char v115; // [rsp+285h] [rbp+185h]

  v85 = a3;
  v89 = a5;
  v110[0] = a4;
  v7 = a2;
  v83 = a2;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v81 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SHADER_LINK_Start);
  v8 = *a3;
  v86[1] = v109;
  v9 = 0;
  v79 = *(_DWORD *)(a1 + 48);
  v10 = (_QWORD **)a3[1];
  memset(v109, 0, sizeof(v109));
  v86[0] = 4LL;
  v11 = v10;
  v12 = &v10[v8];
  v84 = v10;
  v88 = v8;
  v112 = v12;
  if ( v10 != v12 )
  {
    v13 = v79;
    do
    {
      v13 += *((_DWORD *)*v11 + 12);
      v14 = DiscoverSamplers(*v11, (__int64)v86);
      if ( v9 <= v14 )
        v9 = v14;
      ++v11;
    }
    while ( v11 != v12 );
    v79 = v13;
    v7 = v83;
  }
  v15 = DiscoverSamplers((_QWORD *)a1, (__int64)v86);
  if ( v9 <= v15 )
    v9 = v15;
  if ( *(_BYTE *)(v7 + 156) && v9 <= 2 )
    v9 = 2;
  v16 = 0;
  v17 = v9;
  v18 = 0;
  do
  {
    gsl::span<SamplerPresenceEntry,-1>::operator[](v86, v18);
    v19 = DoesSamplerRequireConstantBufferData((const struct ShaderLinkingSamplerDesc *)(v7 + 32LL * v18++));
    *(_BYTE *)(v20 + 2) = v19;
    if ( v19 )
    {
      v57 = v16;
      v58 = v18;
      ++v16;
      *(_DWORD *)(v20 + 4) = v57;
      if ( v17 > v18 )
        v58 = v17;
      v17 = v58;
    }
  }
  while ( v18 < 4 );
  v82 = v17;
  v21 = HasWhiteNoise(a1);
  v22 = v112;
  v23 = v21;
  if ( !v21 )
  {
    for ( i = v84; i != v22; ++i )
    {
      if ( (unsigned __int8)HasWhiteNoise(*i) )
      {
        v23 = 1;
        break;
      }
    }
  }
  v25 = v85;
  v101 = *v85;
  ExpectedVertexShaderDesc = GetExpectedVertexShaderDesc(a1, (unsigned int)&v101, v7, v9, v23);
  *(_QWORD *)v110[0] = ExpectedVertexShaderDesc;
  v27 = InitializeShaderLinkingInput(ppLinker);
  v30 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x50Fu, 0LL);
  }
  else
  {
    LOBYTE(v29) = *(_BYTE *)(v7 + 156);
    v31 = UseFragmentsModuleNoRef(ppLinker, v79, v29, &v83);
    v30 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x510u, 0LL);
    }
    else
    {
      v33 = v83;
      if ( (v9 > 2 || v23)
        && (*(_QWORD *)&v93 = 3LL,
            WORD2(v112) = 258,
            LODWORD(v112) = 16843008,
            *((_QWORD *)&v93 + 1) = &v112,
            v102 = v93,
            v59 = CShaderLinkingGraphBuilder::AppendNode(
                    (__int64)ppLinker,
                    v23 != 0 ? 12 : 259,
                    (__int64)word_18033C470,
                    v83,
                    (__int64)"DecodeTexcoord3",
                    &v102),
            v30 = v59,
            v59 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v59, 0x51Cu, 0LL);
      }
      else
      {
        *(_WORD *)v78 = 1;
        appended = std::_Fnv1a_append_bytes(v32, v78, 2uLL);
        v35 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Find<enum ShaderLinkingArgument>(
                (__int64)v91,
                (__int64)v78,
                appended);
        if ( v35 != v92 && *(_DWORD *)(v7 + 144) > 1u )
        {
          *(_QWORD *)&v94 = 1LL;
          *((_QWORD *)&v94 + 1) = &v80;
          v60 = *(_QWORD *)(v7 + 136);
          v103 = v94;
          v80 = 1;
          v61 = CShaderLinkingGraphBuilder::AppendNode((__int64)ppLinker, 1, (__int64)word_18033C470, v33, v60, &v103);
          v30 = v61;
          if ( v61 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x528u, 0LL);
            goto LABEL_43;
          }
        }
        LOBYTE(v77) = 0;
        gsl::details::extent_type<-1>::extent_type<-1>(v87, v82);
        v87[1] = v109;
        if ( v87[0] == -1LL )
        {
          gsl::details::terminate(v36);
          __debugbreak();
        }
        v37 = PrepareSamplers((int)ppLinker, v7);
        v30 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v38, 0LL, 0, v37, 0x535u, 0LL);
          goto LABEL_43;
        }
        v39 = 0;
        v40 = 0LL;
        if ( *v25 )
        {
          while ( 1 )
          {
            if ( (unsigned int)v40 >= v88 )
            {
              gsl::details::terminate(v38);
              JUMPOUT(0x1800BAF81LL);
            }
            _mm_lfence();
            v41 = v84[v40];
            v114 = v40 + 48;
            qmemcpy(v113, "BodyFragment", sizeof(v113));
            v115 = 0;
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v81);
            ShaderBody = LoadShaderBody((unsigned int)ppLinker, v41, v42, v39, (__int64)v113, (__int64)&v81);
            v30 = ShaderBody;
            if ( ShaderBody < 0 )
              break;
            v33 = v83;
            v45 = AppendShaderBody((int)ppLinker, (__int64)v113, v81, v83, (__int64)&v77);
            v30 = v45;
            if ( v45 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((__int64)v38, 0LL, 0, v45, 0x541u, 0LL);
              goto LABEL_43;
            }
            v39 += *(_DWORD *)(v41 + 48);
            v40 = (unsigned int)(v40 + 1);
            if ( (unsigned int)v40 >= *(_DWORD *)v85 )
              goto LABEL_31;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, ShaderBody, 0x540u, 0LL);
        }
        else
        {
LABEL_31:
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v81);
          v47 = LoadShaderBody((unsigned int)ppLinker, a1, v46, v39, (__int64)word_18033C470, (__int64)&v81);
          v30 = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x547u, 0LL);
          }
          else
          {
            v49 = AppendShaderBody((int)ppLinker, (__int64)word_18033C470, v81, v33, (__int64)&v77);
            v30 = v49;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v49, 0x548u, 0LL);
            }
            else
            {
              if ( *(_BYTE *)(v7 + 153) )
              {
                *(_QWORD *)&v100 = 5LL;
                *((_QWORD *)&v100 + 1) = &unk_180357410;
                v104 = v100;
                v63 = CShaderLinkingGraphBuilder::AppendNode(
                        (__int64)ppLinker,
                        10,
                        (__int64)word_18033C470,
                        v33,
                        (__int64)"ApplyPSClipPlanes",
                        &v104);
                v30 = v63;
                if ( v63 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x559u, 0LL);
                  goto LABEL_43;
                }
              }
              if ( *(_BYTE *)(v7 + 155) )
              {
                *(_QWORD *)&v95 = 2LL;
                *((_QWORD *)&v95 + 1) = "\n";
                v105 = v95;
                v52 = CShaderLinkingGraphBuilder::AppendNode(
                        (__int64)ppLinker,
                        10,
                        (__int64)word_18033C470,
                        v33,
                        (__int64)"AlphaMultiply",
                        &v105);
                v30 = v52;
                if ( v52 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x567u, 0LL);
                  goto LABEL_43;
                }
              }
              if ( !(_BYTE)v77 && *(_DWORD *)(v7 + 128) != -1 )
              {
                v65 = AppendLights(0xAu, ppLinker, (_DWORD *)(v7 + 128), -1);
                v30 = v65;
                if ( v65 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0x56Eu, 0LL);
                  goto LABEL_43;
                }
              }
              if ( *(_BYTE *)(v7 + 158) && *(_BYTE *)(v7 + 157) )
              {
                v97 = "NoOp";
                ConversionShader = ColorConversion::GetConversionShader(
                                     DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                                     0,
                                     8u,
                                     DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709,
                                     (struct ColorConversion::Shader *)&v97,
                                     0LL);
                v30 = ConversionShader;
                if ( ConversionShader < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, ConversionShader, 0x57Bu, 0LL);
                  goto LABEL_43;
                }
                *(_QWORD *)&v96 = 1LL;
                *((_QWORD *)&v96 + 1) = "\n";
                v106 = v96;
                v69 = CShaderLinkingGraphBuilder::AppendNode(
                        (__int64)ppLinker,
                        10,
                        (__int64)word_18033C470,
                        v33,
                        (__int64)v97,
                        &v106);
                v30 = v69;
                if ( v69 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x57Cu, 0LL);
                  goto LABEL_43;
                }
              }
              if ( *(_BYTE *)(v7 + 159)
                && (*(_QWORD *)&v98 = 1LL,
                    *((_QWORD *)&v98 + 1) = "\n",
                    v107 = v98,
                    v71 = CShaderLinkingGraphBuilder::AppendNode(
                            (__int64)ppLinker,
                            10,
                            (__int64)word_18033C470,
                            v33,
                            (__int64)"BoostSDRLuminance",
                            &v107),
                    v30 = v71,
                    v71 < 0) )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x583u, 0LL);
              }
              else
              {
                if ( !*(_BYTE *)(v7 + 152) )
                  goto LABEL_41;
                v73 = *(_BYTE *)(v7 + 158) == 0;
                *((_QWORD *)&v99 + 1) = &v79;
                v74 = (char *)v110;
                *(_QWORD *)&v99 = 1LL;
                if ( !v73 )
                  v74 = v111;
                strcpy((char *)v110, "MinBlend");
                strcpy(v111, "MinBlend_HDR");
                LOWORD(v79) = 10;
                v108 = v99;
                v75 = CShaderLinkingGraphBuilder::AppendNode(
                        (__int64)ppLinker,
                        10,
                        (__int64)word_18033C470,
                        v33,
                        (__int64)v74,
                        &v108);
                v30 = v75;
                if ( v75 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v75, 0x58Du, 0LL);
                }
                else
                {
LABEL_41:
                  v54 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v50, v89);
                  v30 = v54;
                  if ( v54 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x590u, 0LL);
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_43:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SHADER_LINK_Stop);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v81);
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  return v30;
}
