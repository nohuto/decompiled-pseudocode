/*
 * XREFs of ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z @ 0x18001145C (-D3D11_SetDebugName@@YAXPEAUID3D11DeviceChild@@PEBD@Z.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800163D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV-.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001F128 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?HasSubscriber@PerformanceLogger@Utils@Spectre@@QEBA_NXZ @ 0x18002034C (-HasSubscriber@PerformanceLogger@Utils@Spectre@@QEBA_NXZ.c)
 *     ??$CreateResource@VCommandList@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x1800246D0 (--$CreateResource@VCommandList@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_ptr.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026C70 (-InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 *     ?SetShaderModelActive@RenderDevice@Engine@Spectre@@QEAAXW4EShaderModel@23@@Z @ 0x180027134 (-SetShaderModelActive@RenderDevice@Engine@Spectre@@QEAAXW4EShaderModel@23@@Z.c)
 *     ??$_Integral_to_string@DH@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@H@Z @ 0x180027C00 (--$_Integral_to_string@DH@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@H@.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@$$QEAV10@0@Z @ 0x18002DA5C (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_traits@_W@st.c)
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@$$QEAV10@QEB_W@Z @ 0x18002DA80 (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_ea_18002DA80.c)
 *     ??$LexicalCast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z @ 0x18002E028 (--$LexicalCast@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_string@_WU.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800320AC (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@XZ @ 0x180043528 (--$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_180043528.c)
 *     ??0State@Engine@Spectre@@QEAA@XZ @ 0x18005966C (--0State@Engine@Spectre@@QEAA@XZ.c)
 *     ??1State@Engine@Spectre@@QEAA@XZ @ 0x180059A20 (--1State@Engine@Spectre@@QEAA@XZ.c)
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEB_W$$QEAV10@@Z @ 0x1800C2DCC (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_ea_1800C2DCC.c)
 *     ??$AddMeasurement@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@PerformanceLogger@Utils@Spectre@@QEBAXPEBDH00V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800C2E24 (--$AddMeasurement@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@PerformanceLogg.c)
 *     ??$As@UID3D11Device1@@@?$ComPtr@UID3D11Device@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C2F2C (--$As@UID3D11Device1@@@-$ComPtr@UID3D11Device@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UID3D.c)
 *     ??$As@UIDXGIAdapter1@@@?$ComPtr@UIDXGIAdapter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C2F88 (--$As@UIDXGIAdapter1@@@-$ComPtr@UIDXGIAdapter@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIDXG.c)
 *     ??$_Integral_to_string@_WH@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@H@Z @ 0x1800C3888 (--$_Integral_to_string@_WH@std@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@.c)
 *     ??$_UIntegral_to_string@D_K@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@_K@Z @ 0x1800C3A68 (--$_UIntegral_to_string@D_K@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@.c)
 *     ??$spectre_safe_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@Utils@Spectre@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@3@@Z @ 0x1800C40AC (--$spectre_safe_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@Utils@Spec.c)
 *     ?GetAdapter@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@XZ @ 0x1800C568C (-GetAdapter@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UIDXGIAdapter1@@@WRL@Microso.c)
 *     ?GetFeatureLevel@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEAA?AW4DeviceFeatureLevel@34@XZ @ 0x1800C58B4 (-GetFeatureLevel@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEAA-AW4DeviceFeatureLevel@34@XZ.c)
 *     ?SelectAdapterProfileLevel@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800C712C (-SelectAdapterProfileLevel@RenderDeviceD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 *     ??1CDXDeviceFactory@@QEAA@XZ @ 0x1800DB030 (--1CDXDeviceFactory@@QEAA@XZ.c)
 *     ?Init@CDXDeviceFactory@@QEAAJW4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@3W4DeviceFeatureFlags@@@Z @ 0x1800DBA00 (-Init@CDXDeviceFactory@@QEAAJW4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePe.c)
 *     ?Shutdown@CDXDeviceFactory@@QEAAXXZ @ 0x1800DBAB0 (-Shutdown@CDXDeviceFactory@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::InitializeRenderer(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rbx
  _QWORD *v3; // r14
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  struct ID3D11DeviceChild **v6; // r15
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, GUID *, __int64 *); // rbx
  _QWORD *v13; // r12
  __int64 *v14; // rax
  int v15; // eax
  ULONG_PTR v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rbx
  void **v21; // rax
  __int64 v22; // r14
  struct ID3D11DeviceChild *v23; // rbx
  std::_Ref_count_base *v24; // rdi
  std::_Ref_count_base *v25; // rcx
  _QWORD *Adapter; // rax
  ULONG_PTR v27; // rbx
  _QWORD *v28; // rax
  unsigned __int64 v29; // r13
  int v30; // r14d
  int v31; // r15d
  __int64 v32; // rdx
  void **v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  IDXGIAdapter **v36; // rax
  _DWORD *v37; // r12
  HRESULT Device; // ebx
  IDXGIAdapter **v39; // rax
  __int64 v40; // rdx
  void **v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rax
  const char *v44; // r9
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // r14
  _QWORD *v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r9
  _QWORD *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r9
  _QWORD *v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // r9
  _QWORD *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r9
  _QWORD *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // r9
  __int64 *Engine; // rax
  __int64 *v64; // rax
  __int64 v65; // rcx
  int v66; // [rsp+40h] [rbp-C8h]
  int pFeatureLevel; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v68; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v69)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A8h] BYREF
  __int64 v70; // [rsp+68h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v71)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-98h] BYREF
  struct ID3D11DeviceChild *v72; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v73; // [rsp+80h] [rbp-88h] BYREF
  __int64 v74; // [rsp+88h] [rbp-80h] BYREF
  std::_Ref_count_base *v75; // [rsp+90h] [rbp-78h]
  void (__fastcall ***v76)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp-70h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v83[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v84; // [rsp+D4h] [rbp-34h]
  int v85; // [rsp+DCh] [rbp-2Ch]
  int v86; // [rsp+E0h] [rbp-28h]
  int v87; // [rsp+E4h] [rbp-24h]
  char v88; // [rsp+E8h] [rbp-20h]
  __int128 v89; // [rsp+ECh] [rbp-1Ch]
  __int128 v90; // [rsp+FCh] [rbp-Ch]
  int v91; // [rsp+10Ch] [rbp+4h]
  char v92; // [rsp+110h] [rbp+8h]
  int v93; // [rsp+114h] [rbp+Ch]
  __int64 v94; // [rsp+118h] [rbp+10h] BYREF
  std::_Ref_count_base *v95; // [rsp+120h] [rbp+18h]
  __int64 v96; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v97[8]; // [rsp+138h] [rbp+30h] BYREF
  std::_Ref_count_base *v98; // [rsp+140h] [rbp+38h]
  _QWORD v99[4]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v100[4]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v101[4]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v102[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v103[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v104[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+208h] [rbp+100h] BYREF
  EXCEPTION_RECORD v106; // [rsp+2A8h] [rbp+1A0h] BYREF
  _QWORD v107[4]; // [rsp+348h] [rbp+240h] BYREF
  void *v108[4]; // [rsp+368h] [rbp+260h] BYREF
  char v109[32]; // [rsp+388h] [rbp+280h] BYREF
  char v110[32]; // [rsp+3A8h] [rbp+2A0h] BYREF
  char v111[32]; // [rsp+3C8h] [rbp+2C0h] BYREF
  void *v112[4]; // [rsp+3E8h] [rbp+2E0h] BYREF
  _QWORD v113[4]; // [rsp+408h] [rbp+300h] BYREF
  _BYTE v114[32]; // [rsp+428h] [rbp+320h] BYREF
  _QWORD v115[4]; // [rsp+448h] [rbp+340h] BYREF
  _QWORD v116[4]; // [rsp+468h] [rbp+360h] BYREF
  _BYTE v117[32]; // [rsp+488h] [rbp+380h] BYREF
  _QWORD v118[4]; // [rsp+4A8h] [rbp+3A0h] BYREF
  _QWORD v119[4]; // [rsp+4C8h] [rbp+3C0h] BYREF
  _OWORD v120[20]; // [rsp+4E8h] [rbp+3E0h] BYREF
  __int128 v121; // [rsp+628h] [rbp+520h]
  _BYTE v122[720]; // [rsp+638h] [rbp+530h] BYREF
  Spectre::Engine::RenderState *v123; // [rsp+908h] [rbp+800h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevels[4]; // [rsp+B68h] [rbp+A60h] BYREF
  __m128i si128; // [rsp+B78h] [rbp+A70h]
  int v126; // [rsp+B88h] [rbp+A80h]
  void *retaddr; // [rsp+BC0h] [rbp+AB8h]

  v71 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 37);
  v2 = v71;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef((__int64 *)&v71);
  v3 = (_QWORD *)((char *)this + 4256);
  if ( v2 )
    Microsoft::WRL::ComPtr<ID3D11Device>::As<ID3D11Device1>(&v71, (__int64 *)this + 532);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v71);
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v3;
  if ( *v3 )
  {
    v70 = 0LL;
    v69 = 0LL;
    v5 = (*v4)[43];
    v6 = (struct ID3D11DeviceChild **)((char *)this + 4264);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 533);
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *), char *))v5)(v4, (char *)this + 4264);
    v7 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v3;
    v8 = **(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
    v8(v7, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v70);
    v9 = v70;
    v10 = *(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v70 + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v69);
    v10(v9, &v69);
    Microsoft::WRL::ComPtr<IDXGIAdapter>::As<IDXGIAdapter1>(&v69, (__int64 *)this + 534);
    v11 = *((_QWORD *)this + 534);
    v12 = *(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 48LL);
    v13 = (_QWORD *)((char *)this + 4280);
    v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow>>((__int64 *)this + 535);
    v12(v11, &GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, v14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v69);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
  }
  else
  {
    v120[0] = 0LL;
    v121 = 0LL;
    v15 = CDXDeviceFactory::Init(
            v120,
            (unsigned int)(*((_DWORD *)this + 72) - 3) <= 1,
            *((unsigned int *)this + 81),
            *((unsigned int *)this + 82),
            *((_DWORD *)this + 79),
            *((_DWORD *)this + 80),
            *((_DWORD *)this + 83));
    v16 = v15;
    if ( v15 < 0 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v16;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v17 = v121;
    if ( (_QWORD)v121 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v121 + 8LL))(v121);
    v77 = 0LL;
    v76 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v3;
    *v3 = v17;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v76);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v77);
    v18 = *((_QWORD *)&v121 + 1);
    if ( *((_QWORD *)&v121 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v121 + 1) + 8LL))(*((_QWORD *)&v121 + 1));
    v6 = (struct ID3D11DeviceChild **)((char *)this + 4264);
    v79 = 0LL;
    v78 = *((_QWORD *)this + 533);
    *((_QWORD *)this + 533) = v18;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v78);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v79);
    v19 = *(_QWORD *)&v120[0];
    if ( *(_QWORD *)&v120[0] )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v120[0] + 8LL))(*(_QWORD *)&v120[0]);
    v81 = 0LL;
    v80 = *((_QWORD *)this + 534);
    *((_QWORD *)this + 534) = v19;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v80);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v81);
    v20 = *((_QWORD *)&v120[0] + 1);
    if ( *((_QWORD *)&v120[0] + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v120[0] + 1) + 8LL))(*((_QWORD *)&v120[0] + 1));
    v13 = (_QWORD *)((char *)this + 4280);
    v73 = 0LL;
    v82 = *((_QWORD *)this + 535);
    *((_QWORD *)this + 535) = v20;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v82);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v73);
    CDXDeviceFactory::Shutdown((CDXDeviceFactory *)v120);
    (*(void (__fastcall **)(Spectre::Engine::D3D11::RenderDeviceD3D11 *, _QWORD))(*(_QWORD *)this + 224LL))(
      this,
      *((unsigned int *)this + 94));
    CDXDeviceFactory::~CDXDeviceFactory((CDXDeviceFactory *)v120);
  }
  if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>((_QWORD *)this + 532) )
    *((_DWORD *)this + 1062) = 0;
  if ( (*((_DWORD *)this + 96) & 0xFFFFFFFD) == 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v13 + 64LL))(*v13, *((_QWORD *)this + 49), 0LL);
  *((_DWORD *)this + 1072) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 296LL))(*v3);
  *((_DWORD *)this + 60) = Spectre::Engine::D3D11::RenderDeviceD3D11::GetFeatureLevel((__int64)this);
  D3D11_SetDebugName(*v6, "DefaultImmediateContext");
  Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::CommandList>((__int64)this, &v94);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v96, &v94);
  Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>((__int64)&v74);
  v21 = (void **)std::string::string(v103, (__int64)"Default");
  v22 = v74;
  Spectre::Engine::RendererResource::SetName(v74, v21);
  v23 = *v6;
  v72 = v23;
  if ( v23 )
    ((void (__fastcall *)(struct ID3D11DeviceChild *))v23->lpVtbl->AddRef)(v23);
  if ( *(struct ID3D11DeviceChild **)(v22 + 144) != v23 )
  {
    if ( v23 )
      ((void (__fastcall *)(struct ID3D11DeviceChild *))v23->lpVtbl->AddRef)(v23);
    v68 = *(_QWORD *)(v22 + 144);
    *(_QWORD *)(v22 + 144) = v23;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v68);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v72);
  v24 = v75;
  if ( v75 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v75 + 2);
    v24 = v75;
    v22 = v74;
  }
  *((_QWORD *)this + 34) = v22;
  v25 = (std::_Ref_count_base *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = v24;
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  Adapter = Spectre::Engine::D3D11::RenderDeviceD3D11::GetAdapter((__int64)this, &v71);
  v27 = (*(int (__fastcall **)(_QWORD, char *))(*(_QWORD *)*Adapter + 64LL))(*Adapter, (char *)this + 4296);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v71);
  if ( (v27 & 0x80000000) != 0LL )
  {
    memset_0(&v106, 0, sizeof(v106));
    v106.ExceptionCode = -532265403;
    v106.ExceptionAddress = retaddr;
    v106.NumberParameters = 1;
    v106.ExceptionInformation[0] = v27;
    RaiseFailFastException(&v106, 0LL, 0);
  }
  v28 = std::wstring::wstring(v113, (__int64)this + 4296);
  std::wstring::operator=((Spectre::Engine::D3D11::RenderDeviceD3D11 *)((char *)this + 4600), (__int64)v28);
  std::wstring::_Tidy_deallocate((__int64)v113);
  std::wstring::operator=((char *)this + 80, (char *)this + 4600);
  v29 = *((_QWORD *)this + 571) >> 20;
  v73 = *((_QWORD *)this + 572) >> 20;
  v68 = *((_QWORD *)this + 573) >> 20;
  Spectre::Engine::D3D11::RenderDeviceD3D11::SelectAdapterProfileLevel(this);
  v30 = *((_DWORD *)this + 1072) / 4096;
  v31 = *((_DWORD *)this + 1072) / 256 % 16;
  std::_Integral_to_string<wchar_t,int>(v109, v31);
  std::_Integral_to_string<wchar_t,int>((char *)v108, v30);
  v33 = (void **)std::operator+<wchar_t>(v116, v32, v108);
  v34 = std::operator+<wchar_t>(v115, v33, L"_");
  v35 = std::operator+<wchar_t>((__int64)v114, (__int64)v34, (__int64)v109);
  std::wstring::operator=((_OWORD *)this + 9, v35);
  std::wstring::_Tidy_deallocate((__int64)v114);
  std::wstring::_Tidy_deallocate((__int64)v115);
  std::wstring::_Tidy_deallocate((__int64)v116);
  std::wstring::_Tidy_deallocate((__int64)v108);
  std::wstring::_Tidy_deallocate((__int64)v109);
  *(__m128i *)pFeatureLevels = _mm_load_si128((const __m128i *)&_xmm);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v126 = 37120;
  v36 = (IDXGIAdapter **)Spectre::Engine::D3D11::RenderDeviceD3D11::GetAdapter((__int64)this, &v70);
  v37 = (_DWORD *)((char *)this + 4292);
  Device = D3D11CreateDevice(
             *v36,
             D3D_DRIVER_TYPE_UNKNOWN,
             0LL,
             0,
             pFeatureLevels,
             9u,
             7u,
             0LL,
             (D3D_FEATURE_LEVEL *)this + 1073,
             0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v70);
  if ( Device == -2147024809 )
  {
    v39 = (IDXGIAdapter **)Spectre::Engine::D3D11::RenderDeviceD3D11::GetAdapter((__int64)this, &v69);
    Device = D3D11CreateDevice(
               *v39,
               D3D_DRIVER_TYPE_UNKNOWN,
               0LL,
               0,
               &pFeatureLevels[3],
               6u,
               7u,
               0LL,
               (D3D_FEATURE_LEVEL *)this + 1073,
               0LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v69);
  }
  if ( Device >= 0 )
  {
    v30 = *v37 / 4096;
    v31 = *v37 / 256 % 16;
    std::_Integral_to_string<wchar_t,int>(v111, v31);
    std::_Integral_to_string<wchar_t,int>((char *)v112, v30);
    v41 = (void **)std::operator+<wchar_t>(v119, v40, v112);
    v42 = std::operator+<wchar_t>(v118, v41, L"_");
    v43 = std::operator+<wchar_t>((__int64)v117, (__int64)v42, (__int64)v111);
    std::wstring::operator=((_OWORD *)this + 11, v43);
    std::wstring::_Tidy_deallocate((__int64)v117);
    std::wstring::_Tidy_deallocate((__int64)v118);
    std::wstring::_Tidy_deallocate((__int64)v119);
    std::wstring::_Tidy_deallocate((__int64)v112);
    std::wstring::_Tidy_deallocate((__int64)v111);
  }
  std::_Integral_to_string<wchar_t,int>(v110, *((_DWORD *)this + 1158));
  std::wstring::operator=((_OWORD *)this + 13, (__int64)v110);
  std::wstring::_Tidy_deallocate((__int64)v110);
  Spectre::Utils::LexicalCast<std::string,std::wstring>(v107, (_QWORD *)this + 575);
  v44 = (const char *)v107;
  if ( v107[3] >= 0x10uLL )
    v44 = (const char *)v107[0];
  pFeatureLevel = v31;
  v66 = v30;
  v45 = v68;
  v46 = v73;
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_RendererD3D11,
    3,
    "Adapter used %s -- memory %IuMB / %IuMB / %IuMB -- feature level %d_%d -- profile level %d",
    v44,
    v29,
    v73,
    v68,
    v66,
    pFeatureLevel,
    *((_DWORD *)this + 1158));
  if ( (unsigned __int8)Spectre::Utils::PerformanceLogger::HasSubscriber(*((Spectre::Utils::PerformanceLogger **)this
                                                                         + 74)) )
  {
    v47 = (_QWORD *)*((_QWORD *)this + 74);
    v48 = std::string::string(v104, (__int64)v107);
    Spectre::Utils::PerformanceLogger::AddMeasurement<std::string>(
      v47,
      v49,
      491,
      v50,
      (__int64)"MachineSpecs_AdapterName",
      v48);
    v51 = (_QWORD *)*((_QWORD *)this + 74);
    std::_UIntegral_to_string<char,unsigned __int64>((__int64)v99, v29);
    Spectre::Utils::PerformanceLogger::AddMeasurement<std::string>(
      v51,
      v52,
      492,
      v53,
      (__int64)"MachineSpecs_AdapterVideoMemory",
      v99);
    v54 = (_QWORD *)*((_QWORD *)this + 74);
    std::_UIntegral_to_string<char,unsigned __int64>((__int64)v100, v46);
    Spectre::Utils::PerformanceLogger::AddMeasurement<std::string>(
      v54,
      v55,
      493,
      v56,
      (__int64)"MachineSpecs_AdapterSystemMemory",
      v100);
    v57 = (_QWORD *)*((_QWORD *)this + 74);
    std::_UIntegral_to_string<char,unsigned __int64>((__int64)v101, v45);
    Spectre::Utils::PerformanceLogger::AddMeasurement<std::string>(
      v57,
      v58,
      494,
      v59,
      (__int64)"MachineSpecs_AdapterSharedMemory",
      v101);
    v60 = (_QWORD *)*((_QWORD *)this + 74);
    std::_Integral_to_string<char,int>((__int64)v102, *((_DWORD *)this + 1158));
    Spectre::Utils::PerformanceLogger::AddMeasurement<std::string>(
      v60,
      v61,
      495,
      v62,
      (__int64)"MachineSpecs_AdapterProfileLevel",
      v102);
  }
  Spectre::Engine::State::State((Spectre::Engine::State *)v122);
  Engine = (__int64 *)Spectre::Engine::RenderDevice::GetEngine(this);
  v64 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::RenderState,>(Engine, (__int64)v97);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v123, v64);
  if ( v98 )
    std::_Ref_count_base::_Decref(v98);
  memset_0(v83, 0, 0x48uLL);
  v84 = 2LL;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 65793;
  v92 = 1;
  v93 = 3;
  Spectre::Engine::RenderState::Create(v123, (const struct Spectre::Engine::RenderStateDesc *)v83, this);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 34) + 40LL))(*((_QWORD *)this + 34), v122);
  if ( (int)Spectre::Engine::D3D11::RenderDeviceD3D11::GetFeatureLevel((__int64)this) < 40960 )
    Spectre::Engine::RenderDevice::SetShaderModelActive(v65);
  Spectre::Engine::RenderDevice::InitializeRenderer(this);
  Spectre::Engine::State::~State((Spectre::Engine::State *)v122);
  std::string::_Tidy_deallocate((__int64)v107);
  if ( v24 )
    std::_Ref_count_base::_Decref(v24);
  if ( v95 )
    std::_Ref_count_base::_Decref(v95);
}
