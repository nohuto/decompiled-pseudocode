/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800388E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x180018E78 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ @ 0x180032DAC (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@IEAAXXZ.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180039534 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x180039560 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180039A40 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x180039CF8 (-GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA-AUConstantBufferRequirements@1@XZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180039D9C (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18003A12C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18003C50C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1800F445C (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x1800FC018 (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180101100 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180101168 (_Init_thread_header.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     memcmp_0 @ 0x180105173 (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ @ 0x1801ED4F0 (-SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18026C098 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // rax
  CD3DBatchExecutionContext *v4; // r14
  __int64 v5; // r13
  struct CLinkedShader *v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdi
  ShaderLinkingSamplerDesc *v9; // rbx
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rax
  int *v13; // rax
  float v14; // xmm7_4
  __int64 v15; // rax
  unsigned int v16; // ebx
  int v17; // esi
  __int64 v18; // r13
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, char *); // rcx
  __int64 v22; // rax
  __int64 v23; // xmm0_8
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r11
  char *v28; // r8
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rbx
  _DWORD *v33; // rax
  char v34; // r14
  __int64 v35; // rdx
  unsigned int v36; // ecx
  unsigned int ColorChannelDepth; // ebx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // rcx
  __int16 *v45; // rcx
  float v46; // xmm1_4
  __int64 v47; // rax
  __int16 v48; // ax
  char v49; // r8
  float *v50; // r14
  __int64 v51; // r15
  __int64 v52; // rcx
  float v53; // xmm0_4
  char v54; // dl
  bool v55; // al
  __int64 v56; // rbx
  CRenderingTechnique *v57; // r14
  __int64 v58; // rdx
  char v59; // si
  __int64 v60; // rbx
  __int64 v61; // rdx
  unsigned int v62; // r9d
  CRenderingTechnique **v63; // r8
  unsigned int i; // esi
  int *v65; // r15
  int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // r9
  volatile signed __int32 *v69; // rbx
  int v70; // eax
  unsigned int v71; // ecx
  int v72; // esi
  unsigned int v73; // r14d
  void (__fastcall *v74)(__int64, __int64, _QWORD, _QWORD); // r15
  int v75; // eax
  __int64 v76; // r8
  __int64 v77; // rdx
  _DWORD *v78; // rcx
  __int64 v79; // rsi
  __int64 v80; // rbx
  CRenderingTechnique *v81; // rsi
  __int64 v82; // rcx
  int v83; // eax
  unsigned int v84; // ecx
  unsigned int v85; // ebx
  int updated; // eax
  unsigned int v87; // ecx
  __int64 v88; // rcx
  __int64 v89; // rcx
  CD3DBatchExecutionContext *v90; // rsi
  __int64 (__fastcall ***v92)(_QWORD, char *); // rcx
  __int64 (__fastcall ***v93)(_QWORD, char *, __int64, __int16 *); // rcx
  int v94; // eax
  unsigned int v95; // ecx
  int v96; // eax
  unsigned __int8 v97; // r10
  int v98; // eax
  __int64 v99; // r11
  __int64 *v100; // rcx
  int v101; // r9d
  int v102; // r8d
  __int64 v103; // rax
  unsigned int v104; // ecx
  int v105; // r14d
  unsigned int v106; // ecx
  int v107; // eax
  int v108; // r12d
  BOOL v109; // eax
  CHAR v110; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  unsigned int v113; // ecx
  unsigned int v114; // ecx
  unsigned int v115; // ecx
  CHAR Response[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v117; // [rsp+78h] [rbp-90h] BYREF
  __int16 v118; // [rsp+80h] [rbp-88h] BYREF
  char v119; // [rsp+82h] [rbp-86h]
  __int16 v120; // [rsp+88h] [rbp-80h]
  __int16 v121; // [rsp+98h] [rbp-70h]
  unsigned int v122; // [rsp+A8h] [rbp-60h]
  struct CLinkedShader *v123; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v124[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int16 v125; // [rsp+C8h] [rbp-40h]
  __int64 v126; // [rsp+D8h] [rbp-30h]
  __int64 v127; // [rsp+E0h] [rbp-28h]
  CD3DBatchExecutionContext *v128; // [rsp+E8h] [rbp-20h]
  enum DXGI_FORMAT v129[2]; // [rsp+F0h] [rbp-18h]
  int v130; // [rsp+F8h] [rbp-10h]
  unsigned int *v131; // [rsp+100h] [rbp-8h]
  __int64 v132; // [rsp+114h] [rbp+Ch]
  int v133; // [rsp+11Ch] [rbp+14h]
  __int64 v134; // [rsp+120h] [rbp+18h]
  int v135; // [rsp+138h] [rbp+30h]
  __int64 v136; // [rsp+140h] [rbp+38h] BYREF
  __int64 v137; // [rsp+148h] [rbp+40h]
  __int128 v138; // [rsp+158h] [rbp+50h] BYREF
  _OWORD v139[7]; // [rsp+168h] [rbp+60h]
  __int128 v140; // [rsp+1D8h] [rbp+D0h]
  _BYTE v141[24]; // [rsp+1E8h] [rbp+E0h]
  _DWORD v142[3]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v143; // [rsp+214h] [rbp+10Ch]
  int v144; // [rsp+21Ch] [rbp+114h]
  int v145; // [rsp+220h] [rbp+118h]
  __int128 v146; // [rsp+224h] [rbp+11Ch]
  int v147; // [rsp+234h] [rbp+12Ch]
  int v148; // [rsp+238h] [rbp+130h]
  char v149[16]; // [rsp+240h] [rbp+138h] BYREF
  char v150[16]; // [rsp+250h] [rbp+148h] BYREF
  char v151[24]; // [rsp+260h] [rbp+158h] BYREF
  _OWORD v152[8]; // [rsp+278h] [rbp+170h] BYREF
  __int128 v153; // [rsp+2F8h] [rbp+1F0h]
  __int128 v154; // [rsp+308h] [rbp+200h]
  __int64 v155; // [rsp+318h] [rbp+210h]
  _QWORD v156[4]; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v157[4]; // [rsp+348h] [rbp+240h] BYREF

  v3 = *((_QWORD *)a2 + 1);
  v4 = a2;
  v5 = *((_QWORD *)a2 + 2);
  v6 = this;
  v7 = *((_QWORD *)a2 + 4);
  v8 = 0LL;
  v131 = a3;
  v128 = a2;
  v123 = this;
  v127 = v3;
  v126 = v5;
  v117 = v7;
  memset_0(&v138, 0, 0x80uLL);
  v9 = (ShaderLinkingSamplerDesc *)&v138;
  v10 = 4LL;
  do
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(v9);
    v9 = (ShaderLinkingSamplerDesc *)((char *)v9 + 32);
    --v10;
  }
  while ( v10 );
  LODWORD(v140) = -1;
  v11 = *((_DWORD *)v4 + 30) == 1;
  *((_QWORD *)&v140 + 1) = "NoOp";
  *(_DWORD *)v141 = 0;
  *(_OWORD *)&v141[8] = 0LL;
  if ( v11 )
    *(_WORD *)&v141[14] = 257;
  else
    *(_WORD *)&v141[14] = 0;
  v11 = *((_DWORD *)v4 + 16) == 22;
  v141[13] = 1;
  v141[8] = v11;
  v12 = *((_QWORD *)v4 + 6);
  if ( v12 )
  {
    v13 = (int *)(v12 + 16);
  }
  else
  {
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                       + (unsigned int)tls_index)
                                                                     + 4LL) )
    {
      Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
      {
        `CLightsMask::NoLights'::`2'::noLights = -1;
        Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      }
    }
    v13 = &`CLightsMask::NoLights'::`2'::noLights;
  }
  v14 = *(float *)&FLOAT_1_0;
  LODWORD(v140) = *v13;
  v141[9] = *(_BYTE *)(v7 + 368);
  v15 = *((_QWORD *)v6 + 2);
  v118 = 257;
  v119 = 1;
  LODWORD(v136) = 0;
  v16 = *(_DWORD *)(v15 + 60);
  v122 = v16;
  if ( !v16 )
  {
LABEL_57:
    if ( (*(_DWORD *)(v15 + 64) & 0x10) == 0 || v16 >= 4 )
      v14 = 0.0;
    if ( *(float *)(v7 + 192) != v14 )
    {
      *(float *)(v7 + 192) = v14;
      *(_BYTE *)(v7 + 168) = 1;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v5 + 64LL))(v5, 0LL, v16, v156);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v5 + 80LL))(v5, 0LL, v16, v157);
    v57 = (CRenderingTechnique *)*((_QWORD *)v6 + 2);
    v58 = *(_QWORD *)v57;
    v152[0] = v138;
    v152[1] = v139[0];
    v152[2] = v139[1];
    v152[3] = v139[2];
    v152[4] = v139[3];
    v152[5] = v139[4];
    v152[6] = v139[5];
    v152[7] = v139[6];
    v153 = v140;
    v154 = *(_OWORD *)v141;
    v155 = *(_QWORD *)&v141[16];
    BYTE10(v154) = 1;
    if ( *(_QWORD *)(v58 + 184) )
    {
      v59 = 0;
      if ( *(CRenderingTechnique **)(*(_QWORD *)(v58 + 144) + 8LL * (unsigned int)(*(_DWORD *)(v58 + 168) - 1)) == v57 )
      {
        BYTE11(v154) = 1;
LABEL_64:
        ShaderLinkingConfig::GetConstantBufferRequirements(v152, &v117);
        v60 = v117;
        if ( (_DWORD)v117 != *((_DWORD *)v57 + 61) )
        {
          if ( HIDWORD(v117) != *((_DWORD *)v57 + 62) )
          {
            CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::ReleaseResources((CRenderingTechnique *)((char *)v57 + 16));
            *((_BYTE *)v57 + 264) = 1;
          }
          *(_QWORD *)((char *)v57 + 244) = v60;
        }
        if ( v59 )
        {
          i = 0;
          v65 = *(int **)(*((_QWORD *)v57 + 1) + 8LL);
        }
        else
        {
          v61 = *(_QWORD *)v57;
          v62 = *(_DWORD *)(*(_QWORD *)v57 + 168LL);
          v63 = *(CRenderingTechnique ***)(*(_QWORD *)v57 + 144LL);
          if ( v63[v62 - 1] == v57 )
          {
            i = *(_DWORD *)(v61 + 192) | (v62 - 1);
          }
          else
          {
            for ( i = 0; i < v62; ++v63 )
            {
              if ( v57 == *v63 )
                break;
              ++i;
            }
          }
          v65 = *(int **)(v61 + 184);
        }
        ShaderLinkingConfig::GetLookupKey(v152, &v136, i);
        v66 = 0;
        if ( v65[4] <= 0 )
          goto LABEL_127;
        v67 = *(_QWORD *)v65;
        v68 = 0LL;
        while ( *(_QWORD *)v67 != v136 || *(_DWORD *)(v67 + 8) != (_DWORD)v137 )
        {
          ++v66;
          ++v68;
          v67 += 16LL;
          if ( v68 >= v65[4] )
            goto LABEL_127;
        }
        if ( v66 == -1 )
        {
LABEL_127:
          v123 = 0LL;
        }
        else
        {
          v69 = *(volatile signed __int32 **)(*((_QWORD *)v65 + 1) + 8LL * v66);
          if ( v69 )
          {
            if ( *((int *)v69 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
            {
              while ( 1 )
              {
                v107 = IsKernelDebuggerPresent();
                strcpy(Response, "?");
                v108 = v107;
                if ( !v107 )
                {
                  v109 = IsDebuggerPresent();
                  v110 = Response[0];
                  if ( v109 )
                    v110 = 103;
                  Response[0] = v110;
                }
                DbgPrintEx(
                  0x65u,
                  0,
                  "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
                  L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
                  word_18032C468,
                  word_18032C468,
                  "Function: ",
                  L"CMILRefCountImpl::AddReference",
                  ", ",
                  L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                  23);
                if ( v108 )
                {
                  DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
                }
                else
                {
                  DbgPrintEx(
                    0x65u,
                    0,
                    "(No kernel debugger is present.) Respond with:\n"
                    "  g                    -- Go (continue)\n"
                    "  eb 0x%p 'p';g  -- terminate Process\n"
                    "  eb 0x%p 't';g  -- terminate Thread\n"
                    " or regular debugging.\n",
                    Response,
                    Response);
                  __debugbreak();
                }
                switch ( Response[0] )
                {
                  case 'B':
                  case 'b':
                    __debugbreak();
                    goto LABEL_76;
                  case 'G':
                  case 'g':
                    goto LABEL_76;
                  case 'I':
                  case 'i':
                    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                    continue;
                  case 'P':
                  case 'p':
                    CurrentProcess = GetCurrentProcess();
                    TerminateProcess(CurrentProcess, 0xC0000001);
                    goto LABEL_185;
                  case 'T':
                  case 't':
                    CurrentThread = GetCurrentThread();
                    TerminateThread(CurrentThread, 0xC0000001);
                    goto LABEL_185;
                  default:
LABEL_185:
                    DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                    break;
                }
              }
            }
LABEL_76:
            _InterlockedIncrement(v69 + 2);
            if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
            {
              CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v69 + 2));
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 24LL))(v69);
              if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
              {
                --*((_DWORD *)v69 + 2);
                (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v69 + 16LL))(v69, 1LL);
                v6 = v123;
                v5 = v126;
                goto LABEL_79;
              }
            }
            v5 = v126;
            v6 = v123;
          }
          v123 = (struct CLinkedShader *)v69;
          if ( v69 )
          {
LABEL_79:
            v117 = 0LL;
            v70 = CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::FindOrCreateResourceNoRef(
                    v69 + 8,
                    v127,
                    &v117,
                    v68);
            v72 = v70;
            if ( v70 >= 0 )
            {
              v8 = *(_QWORD *)(v117 + 96);
              v73 = *((_DWORD *)v69 + 6);
              if ( v8 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(v117 + 96));
              v74 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 88LL);
              v75 = 0;
              if ( *(int *)(v127 + 1528) <= 0 )
                goto LABEL_86;
              v76 = *(int *)(v127 + 1528);
              v77 = 0LL;
              v78 = *(_DWORD **)(v127 + 1512);
              while ( *v78 != v73 )
              {
                ++v75;
                ++v77;
                ++v78;
                if ( v77 >= v76 )
                  goto LABEL_86;
              }
              if ( v75 == -1 || (v80 = *(_QWORD *)(*(_QWORD *)(v127 + 1520) + 8LL * v75)) == 0 )
              {
LABEL_86:
                v79 = 0LL;
              }
              else
              {
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v80 + 8LL))(v80, v77, v76);
                v79 = v80;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
              }
              v74(v5, v79, 0LL, 0LL);
              (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, v8, 0LL, 0LL);
              v81 = (CRenderingTechnique *)*((_QWORD *)v6 + 2);
              v136 = 0LL;
              v82 = 0LL;
              if ( !*((_DWORD *)v81 + 14) && !*((_DWORD *)v81 + 62) )
              {
LABEL_95:
                v136 = v82;
                if ( v82 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
                  v82 = v136;
                }
                v85 = 0;
                if ( v82 )
                {
                  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v5 + 128LL))(
                    v5,
                    0LL,
                    1LL,
                    &v136);
                  v88 = v136;
                  if ( v136 )
                  {
                    v136 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
                  }
                }
                v89 = *((_QWORD *)v6 + 2);
                v90 = v128;
                if ( (*(_DWORD *)(v89 + 64) & 2) != 0 )
                {
                  if ( *(_DWORD *)CD3DBatchExecutionContext::GetLightsMask(v128) == -1 )
                    goto LABEL_190;
                  v89 = *((_QWORD *)v6 + 2);
                }
                if ( (*(_DWORD *)(v89 + 64) & 4) == 0 )
                {
LABEL_102:
                  *v131 = v73;
                  goto LABEL_103;
                }
LABEL_190:
                CD3DBatchExecutionContext::SetNoOpLightingConstantBuffers(v90);
                goto LABEL_102;
              }
              v117 = 0LL;
              v83 = CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::FindOrCreateResourceNoRef(
                      (char *)v81 + 16,
                      v127,
                      &v117);
              v85 = v83;
              if ( v83 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v84, 0LL, 0, v83, 0x1D8u, 0LL);
              }
              else
              {
                updated = CRenderingTechnique::UpdateConstantBuffers(v81);
                v85 = updated;
                if ( updated >= 0 )
                {
                  v82 = *(_QWORD *)(v117 + 96);
                  goto LABEL_95;
                }
                MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, updated, 0x1DAu, 0LL);
              }
              MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, v85, 0xB4u, 0LL);
              Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v136);
LABEL_103:
              if ( v8 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
              return v85;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x15u, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(v115, 0LL, 0, v72, 0x1C2u, 0LL);
LABEL_195:
            v85 = v72;
            MilInstrumentationCheckHR_MaybeFailFast(v113, 0LL, 0, v72, 0xACu, 0LL);
            goto LABEL_103;
          }
        }
        v94 = CRenderingTechnique::AddShaderToCache(
                v57,
                (struct CCompiledEffectCache *)v65,
                i,
                (const struct ShaderLinkingConfig *)v152,
                &v123);
        v72 = v94;
        if ( v94 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v94, 0x1BFu, 0LL);
          goto LABEL_195;
        }
        v69 = (volatile signed __int32 *)v123;
        goto LABEL_79;
      }
    }
    else
    {
      v59 = 1;
    }
    BYTE8(v154) = 0;
    LODWORD(v153) = -1;
    goto LABEL_64;
  }
  v17 = v130;
  v18 = 0LL;
  while ( 1 )
  {
    v19 = (__int64 *)*((_QWORD *)v6 + 3 * v18 + 4);
    if ( !v19 )
    {
      v156[v18] = 0LL;
      v41 = 2 * v18;
      v45 = &v118;
      v157[v18] = 0LL;
      BYTE7(v139[2 * v18]) = 1;
      goto LABEL_37;
    }
    v20 = *v19;
    v124[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, _QWORD *))(v20 + 48))(v19, *((_QWORD *)v4 + 14), v124) < 0 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v124);
      v25 = 0LL;
    }
    else
    {
      v21 = (__int64 (__fastcall ***)(_QWORD, char *))(*(int *)(*(_QWORD *)(v124[0] + 8LL) + 12LL) + v124[0] + 8LL);
      v22 = (**v21)(v21, v149);
      v23 = *(_QWORD *)v22;
      v17 = *(_DWORD *)(v22 + 8);
      v24 = *(_QWORD *)v124[0];
      *(_QWORD *)v129 = v23;
      v130 = v17;
      v25 = (*(__int64 (__fastcall **)(_QWORD))(v24 + 8))(v124[0]);
      if ( v124[0] )
      {
        v26 = *(int *)(*(_QWORD *)(v124[0] + 8LL) + 4LL) + v124[0] + 8LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
    v27 = v127;
    v28 = (char *)v6 + 2 * v18;
    v29 = (unsigned __int8)*(_WORD *)&v28[v18 + 120];
    *(_WORD *)Response = *(_WORD *)&v28[v18 + 120];
    v30 = (unsigned __int8)Response[1];
    v156[v18] = v25;
    v31 = (unsigned int)(unsigned __int8)v28[v18 + 122] + 4 * (v30 + 4 * v29);
    v32 = v27 + 8 * v31;
    if ( !*(_QWORD *)(v32 + 1880) )
      break;
LABEL_17:
    v157[v18] = *(_QWORD *)(v32 + 1880);
    v33 = &unk_18032C0F8;
    while ( *v33 != v17 )
    {
      if ( ++v33 == (_DWORD *)&unk_18032C110 )
        goto LABEL_20;
    }
    if ( v33 == (_DWORD *)&unk_18032C110 )
    {
LABEL_20:
      v34 = 0;
      goto LABEL_21;
    }
    v34 = 1;
LABEL_21:
    ColorChannelDepth = GetColorChannelDepth(v129[0]);
    if ( *((_BYTE *)v6 + 24 * v18 + 40) )
    {
LABEL_148:
      LOBYTE(v35) = 1;
      goto LABEL_24;
    }
    v39 = *((_QWORD *)v6 + 3 * v18 + 3);
    if ( v39 )
    {
      v35 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
    }
    else
    {
      v92 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)v6 + 3 * v18 + 4)
                                                     + 8LL
                                                     + *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 3 * v18 + 4) + 8LL) + 8LL));
      if ( *(_DWORD *)((**v92)(v92, v150) + 4) == 3 )
        goto LABEL_148;
      LOBYTE(v35) = 0;
    }
LABEL_24:
    if ( v17 )
    {
      switch ( v17 )
      {
        case 1:
          v40 = 2LL;
          break;
        case 2:
          if ( ColorChannelDepth == 8 )
          {
            v40 = 14LL;
          }
          else
          {
            if ( ColorChannelDepth != 10 )
              goto LABEL_165;
LABEL_154:
            v40 = 22LL;
          }
          break;
        case 3:
          goto LABEL_154;
        case 12:
          v40 = 10LL;
          break;
        case 14:
          v40 = 34LL;
          break;
        case 20:
          if ( ColorChannelDepth == 8 )
          {
            v40 = 18LL;
          }
          else
          {
            if ( ColorChannelDepth != 10 )
            {
LABEL_165:
              MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2003292288, 0x76u, 0LL);
              return 2291675008LL;
            }
            v40 = 26LL;
          }
          break;
        case 21:
          v40 = 30LL;
          break;
        default:
          goto LABEL_165;
      }
    }
    else
    {
      v40 = 0LL;
    }
    if ( (_BYTE)v35 )
      v40 = (unsigned int)(v40 + 1);
    if ( (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*((__m128i *)&ColorConversion::g_rgShaders + v40), 8)) > 1 )
      v139[2 * v18 - 1] = *((_OWORD *)&ColorConversion::g_rgShaders + v40);
    v41 = 2 * v18;
    BYTE9(v139[2 * v18]) = v34;
    if ( *((_BYTE *)v6 + 24 * v18 + 40) )
      goto LABEL_162;
    v42 = *((_QWORD *)v6 + 3 * v18 + 3);
    if ( v42 )
    {
      v43 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int16 *))(*(_QWORD *)v42 + 8LL))(
              v42,
              v35,
              v38,
              &_ImageBase);
      goto LABEL_33;
    }
    v93 = (__int64 (__fastcall ***)(_QWORD, char *, __int64, __int16 *))(*((_QWORD *)v6 + 3 * v18 + 4)
                                                                       + 8LL
                                                                       + *(int *)(*(_QWORD *)(*((_QWORD *)v6
                                                                                              + 3 * v18
                                                                                              + 4)
                                                                                            + 8LL)
                                                                                + 8LL));
    if ( *(_DWORD *)((**v93)(v93, v151, v38, &_ImageBase) + 4) == 3 )
LABEL_162:
      v43 = 1;
    else
      v43 = 0;
LABEL_33:
    v44 = (unsigned int)v136 + 40LL;
    BYTE8(v139[2 * v18]) = v43;
    BYTE6(v139[2 * v18]) = *((_BYTE *)v6 + v18 + 264);
    v45 = (__int16 *)((char *)v6 + 2 * v44 + v44);
    if ( *((_BYTE *)v6 + v18 + 260) )
      v46 = 0.0;
    else
      v46 = *(float *)&FLOAT_1_0;
    v47 = v117;
    if ( *(float *)(v117 + 4 * v18 + 272) != v46 )
    {
      *(_BYTE *)(v117 + 168) = 1;
      *(float *)(v47 + 4 * v18 + 272) = v46;
    }
LABEL_37:
    v48 = *v45;
    v49 = *((_BYTE *)v45 + 2);
    v50 = (float *)((char *)v6 + v41 * 16 + 132);
    v51 = *((_QWORD *)v6 + 2);
    v52 = 44 * v18;
    v121 = v48;
    if ( BYTE7(v139[v41]) )
      goto LABEL_53;
    v53 = *v50;
    v54 = v121;
    BYTE3(v139[v41]) = *(_BYTE *)(v52 + v51 + 79);
    if ( (v53 != 0.0 || v50[1] != 0.0 || v50[2] != 0.0 || v50[3] != 0.0)
      && (*(_BYTE *)(v52 + v51 + 78) || BYTE6(v139[v41])) )
    {
      BYTE2(v139[v41]) = 1;
      if ( BYTE6(v139[v41]) )
      {
        LOBYTE(v139[v41]) = HIBYTE(v121);
        BYTE1(v139[v41]) = v49;
      }
      else
      {
        LOBYTE(v139[v41]) = *(_BYTE *)(v52 + v51 + 76);
        BYTE1(v139[v41]) = *(_BYTE *)(v52 + v51 + 77);
      }
      v55 = v54 && (LOBYTE(v139[v41]) == 2 || BYTE1(v139[v41]) == 2);
      BYTE4(v139[v41]) = v55;
    }
    if ( !BYTE4(v139[v41]) )
      BYTE5(v139[v41]) = v54 == 2;
    if ( BYTE2(v139[v41]) || BYTE3(v139[v41]) )
    {
LABEL_53:
      v56 = v52 + v51;
      if ( memcmp_0((const void *)(v52 + v51 + 80), v50, 0x20uLL) )
      {
        *(_OWORD *)(v56 + 80) = *(_OWORD *)v50;
        *(_OWORD *)(v56 + 96) = *((_OWORD *)v50 + 1);
        *(_BYTE *)(v51 + 264) = 1;
      }
    }
    ++v18;
    v16 = v122;
    LODWORD(v136) = v136 + 1;
    if ( (unsigned int)v136 >= v122 )
    {
      v15 = *((_QWORD *)v6 + 2);
      v5 = v126;
      v7 = v117;
      goto LABEL_57;
    }
    v4 = v128;
  }
  v125 = *(_WORD *)&v28[v18 + 120];
  if ( HIBYTE(v125) && v28[v18 + 122] )
    v96 = 37120;
  else
    v96 = 37632;
  if ( *(_DWORD *)(v27 + 584) >= v96 )
  {
    v120 = *(_WORD *)&v28[v18 + 120];
    ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v120));
    v98 = ExtendMode::ToD3D11TextureAddressMode(v97);
    v100 = *(__int64 **)(v99 + 552);
    v142[0] = v101;
    v142[1] = v102;
    v142[2] = v98;
    v143 = 3LL;
    v144 = 1;
    v145 = 8;
    v146 = 0LL;
    v147 = 0;
    v148 = 2139095039;
    v103 = *v100;
    *(_QWORD *)(v32 + 1880) = 0LL;
    v132 = 3LL;
    v133 = 1;
    v134 = 8LL;
    v135 = 2139095039;
    v105 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64))(v103 + 184))(v100, v142, v32 + 1880);
    if ( v105 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v104, 0LL, 0, v105, 0xC21u, 0LL);
      goto LABEL_164;
    }
    goto LABEL_17;
  }
  v105 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024809, 0xC1Cu, 0LL);
LABEL_164:
  v85 = v105;
  MilInstrumentationCheckHR_MaybeFailFast(v106, 0LL, 0, v105, 0x6Bu, 0LL);
  return v85;
}
