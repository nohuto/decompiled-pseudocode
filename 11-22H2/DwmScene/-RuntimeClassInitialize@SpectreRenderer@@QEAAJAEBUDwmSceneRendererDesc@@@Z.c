/*
 * XREFs of ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8
 * Callers:
 *     ??$MakeAndInitialize@VSpectreRenderer@@V1@AEBUDwmSceneRendererDesc@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreRenderer@@AEBUDwmSceneRendererDesc@@@Z @ 0x18000FFF0 (--$MakeAndInitialize@VSpectreRenderer@@V1@AEBUDwmSceneRendererDesc@@@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VEngine@1Spectre@@@std@@QEBAXPEAVEngine@2Spectre@@@Z @ 0x180010280 (--R-$default_delete@VEngine@1Spectre@@@std@@QEBAXPEAVEngine@2Spectre@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0 (--$-0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@-$shared_ptr@VISceneNodeTraversal@Engine@Sp.c)
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@PEBUSpectreNativeRendererCreateOptions@@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x1800159F4 (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectr_ea_1800159F4.c)
 *     ??$CreateOutput@VRenderOutputDwm@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@AEBKAEBKAEBKAEBM@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputDwm@@@std@@UOutputDescription@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@AEBK33AEBM@Z @ 0x180015D28 (--$CreateOutput@VRenderOutputDwm@@AEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared.c)
 *     ??$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@XZ @ 0x1800160D8 (--$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VM_ea_1800160D8.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800163D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV-.c)
 *     ??$SetEnum@W4EPhotometricQuantity@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4EPhotometricQuantity@Engine@2@@Z @ 0x180016BCC (--$SetEnum@W4EPhotometricQuantity@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAAXAEB.c)
 *     ??$SetEnum@W4OrientationTrackingBehaviour@Aimer@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4OrientationTrackingBehaviour@Aimer@Engine@2@@Z @ 0x180016C00 (--$SetEnum@W4OrientationTrackingBehaviour@Aimer@Engine@Spectre@@@IConfigurationManager@Utils@Spe.c)
 *     ??$SetEnum@W4Type@Light@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4Type@Light@Engine@2@@Z @ 0x180016C34 (--$SetEnum@W4Type@Light@Engine@Spectre@@@IConfigurationManager@Utils@Spectre@@QEAAXAEBV-$basic_s.c)
 *     ??1?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x1800179B4 (--1-$unique_ptr@VViewerEngine@Engine@Spectre@@U-$default_delete@VViewerEngine@Engine@Spectre@@@s.c)
 *     ?CreateTelemetryTraceLogger@Utils@Spectre@@YA?AV?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@std@@XZ @ 0x1800210A4 (-CreateTelemetryTraceLogger@Utils@Spectre@@YA-AV-$shared_ptr@VITelemetryTraceLogger@Utils@Spectr.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?CreateDisplay@Engine@1Spectre@@QEAA?AV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@W4RefreshPolicy@Display@12@W4RenderingMode@612@@Z @ 0x180033108 (-CreateDisplay@Engine@1Spectre@@QEAA-AV-$shared_ptr@VDisplay@Engine@Spectre@@@std@@W4RefreshPoli.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetDevice@Engine@1Spectre@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z @ 0x180034148 (-GetDevice@Engine@1Spectre@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z.c)
 *     ?AttachOutput@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x1800576E0 (-AttachOutput@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 *     ?SetRefreshPolicy@Display@Engine@Spectre@@QEAAXW4RefreshPolicy@123@@Z @ 0x1800582D4 (-SetRefreshPolicy@Display@Engine@Spectre@@QEAAXW4RefreshPolicy@123@@Z.c)
 *     ?SetRenderingMode@Display@Engine@Spectre@@QEAAXW4RenderingMode@123@@Z @ 0x180058314 (-SetRenderingMode@Display@Engine@Spectre@@QEAAXW4RenderingMode@123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SpectreRenderer::RuntimeClassInitialize(
        SpectreRenderer *this,
        const struct DwmSceneRendererDesc *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  std::_Ref_count_base *v9; // rbx
  __int64 (__fastcall *v10)(std::_Ref_count_base *, Spectre::Engine::RenderDevice **); // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rdi
  _QWORD *v15; // rbx
  __int64 *v16; // rax
  int v17; // eax
  int v18; // edi
  __int64 v19; // r14
  void (__fastcall *v20)(__int64, char *); // rsi
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, _QWORD, int *, __int64, int, GUID *, _QWORD, char *); // rdi
  int v25; // ecx
  _QWORD *v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 (__fastcall ***v29)(_QWORD, __int64); // rdx
  struct Spectre::Utils::IConfigurationManager *Configuration; // rbx
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // r8
  __int64 v66; // r8
  __int64 v67; // r8
  __int64 v68; // r8
  __int64 v69; // r8
  __int64 v70; // r8
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // r8
  __int64 v74; // r8
  __int64 v75; // r8
  __int64 v76; // r8
  __int64 v77; // r8
  __int64 v78; // r8
  __int64 v79; // r8
  __int64 v80; // r8
  __int64 v81; // r8
  __int64 v82; // r8
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // r8
  __int64 v87; // r8
  __int64 v88; // r8
  __int64 v89; // r8
  __int64 v90; // r8
  __int64 v91; // r8
  __int64 v92; // r8
  __int64 v93; // r8
  __int64 v94; // r8
  __int64 v95; // r8
  __int64 v96; // r8
  __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // r8
  __int64 v100; // r8
  __int64 v101; // r8
  __int64 v102; // r8
  __int64 v103; // r8
  __int64 v104; // r8
  __int64 v105; // r8
  __int64 v106; // r8
  __int64 v107; // r8
  __int64 v108; // r8
  __int64 v109; // r8
  __int64 v110; // r8
  __int64 v111; // r8
  __int64 v112; // r8
  __int64 v113; // r8
  __int64 v114; // r8
  __int64 v115; // r8
  __int64 v116; // r8
  __int64 v117; // r8
  __int64 v118; // r8
  __int64 v119; // r8
  __int64 v120; // r8
  __int64 v121; // r8
  __int64 v122; // r8
  __int64 v123; // r8
  __int64 v124; // r8
  __int64 v125; // r8
  __int64 v126; // r8
  __int64 v127; // r8
  Spectre::Engine::RenderDevice *v128; // rbx
  __int64 *v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rdx
  std::_Ref_count_base *v132; // rcx
  __int64 v133; // r8
  __int64 *v134; // rax
  _QWORD *v135; // rbx
  __int64 v136; // r8
  __int64 *v137; // rax
  Spectre::Engine::RenderDevice *v138[2]; // [rsp+58h] [rbp-B0h] BYREF
  std::_Ref_count_base *v139[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v140; // [rsp+78h] [rbp-90h] BYREF
  __int64 v141; // [rsp+80h] [rbp-88h] BYREF
  std::_Ref_count_base *v142; // [rsp+88h] [rbp-80h]
  __int64 v143; // [rsp+90h] [rbp-78h] BYREF
  std::_Ref_count_base *v144; // [rsp+98h] [rbp-70h]
  __int128 v145; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v146; // [rsp+B8h] [rbp-50h]
  __int64 v147; // [rsp+C0h] [rbp-48h]
  int v148; // [rsp+C8h] [rbp-40h]
  int v149; // [rsp+CCh] [rbp-3Ch]
  int v150; // [rsp+D0h] [rbp-38h]
  __int16 v151; // [rsp+D4h] [rbp-34h]
  __int64 v152; // [rsp+D8h] [rbp-30h]
  __int64 v153; // [rsp+E0h] [rbp-28h]
  int v154; // [rsp+E8h] [rbp-20h]
  int v155; // [rsp+ECh] [rbp-1Ch]
  int v156; // [rsp+F0h] [rbp-18h]
  int v157; // [rsp+F4h] [rbp-14h]
  __int64 v158; // [rsp+F8h] [rbp-10h]
  int v159; // [rsp+100h] [rbp-8h]
  char v160; // [rsp+104h] [rbp-4h]
  unsigned __int64 v161; // [rsp+108h] [rbp+0h]
  __int64 v162; // [rsp+110h] [rbp+8h]
  __int128 v163; // [rsp+118h] [rbp+10h]
  _BYTE v164[16]; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v165[2]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v166[296]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v167; // [rsp+280h] [rbp+178h]
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v139[0] = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
  v5 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow>>((__int64 *)v139);
  v7 = v5(v4, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (const char *)(unsigned int)v7);
LABEL_12:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v139);
    return v8;
  }
  v138[0] = 0LL;
  v9 = v139[0];
  v10 = *(__int64 (__fastcall **)(std::_Ref_count_base *, Spectre::Engine::RenderDevice **))(*(_QWORD *)v139[0] + 56LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v138);
  v11 = v10(v9, v138);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 49LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v138);
    goto LABEL_12;
  }
  v11 = (*(__int64 (__fastcall **)(Spectre::Engine::RenderDevice *, _BYTE *))(*(_QWORD *)v138[0] + 64LL))(v138[0], v166);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 52LL;
    goto LABEL_11;
  }
  *((_QWORD *)this + 3) = v167;
  v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
  v14 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
  v15 = (_QWORD *)((char *)this + 32);
  v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow>>((__int64 *)this + 4);
  v17 = v14(v13, &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686, v16);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v138);
    v8 = v18;
    goto LABEL_12;
  }
  v19 = *v15;
  v20 = *(void (__fastcall **)(__int64, char *))(*(_QWORD *)*v15 + 344LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  v20(v19, (char *)this + 40);
  v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 304LL))(*v15) & 1;
  v140 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 296LL))(*v15);
  v22 = *v15;
  v23 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, int, GUID *, _QWORD, char *))(*(_QWORD *)*v15 + 376LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  v11 = v23(v22, (unsigned int)v21, &v140, 1LL, 7, &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686, 0LL, (char *)this + 48);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = 69LL;
    goto LABEL_11;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v138);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v139);
  if ( *((_DWORD *)a2 + 6) >= 4u )
    v25 = 1;
  else
    v25 = *((_DWORD *)&_xmm + *((unsigned int *)a2 + 6));
  v152 = 0LL;
  v153 = 0LL;
  v156 = 0;
  v157 = 1;
  v158 = 1LL;
  v159 = 0;
  v160 = 1;
  v145 = 0x100000004uLL;
  v146 = *(_QWORD *)a2;
  v147 = 0LL;
  v148 = 1;
  v149 = v25;
  v150 = 0;
  v151 = 0;
  v154 = 37120;
  v155 = 49408;
  v26 = (_QWORD *)Spectre::Utils::CreateTelemetryTraceLogger(&v141);
  *(_OWORD *)v138 = 0LL;
  v27 = Spectre::Engine::Engine::Create<Spectre::Engine::ViewerEngine,Spectre::Engine::D3D11::RenderDeviceD3D11>(
          (__int64 *)v139,
          &v145,
          v138,
          v26);
  v28 = *v27;
  *v27 = 0LL;
  v29 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v28;
  if ( v29 )
    std::default_delete<Spectre::Engine::Engine>::operator()(v28, v29);
  std::unique_ptr<Spectre::Engine::ViewerEngine>::~unique_ptr<Spectre::Engine::ViewerEngine>((__int64 (__fastcall ****)(_QWORD, __int64))v139);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*((_QWORD *)this + 7) + 8LL));
  Configuration = Spectre::Engine::Engine::GetConfiguration(*((Spectre::Engine::Engine **)this + 7), 1);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kRenderer_LayerBackground,
    0LL,
    1LL);
  if ( *((_BYTE *)a2 + 30) )
    (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 152LL))(
      Configuration,
      &Spectre::Engine::ConfigurationProperties::kRenderer_BufferFormat_Render,
      1LL,
      1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kImageProcessing_PlanarReflectionEnabled,
    0LL,
    1LL);
  LOBYTE(v31) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kImageProcessing_BloomEnabled,
    v31,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kImageProcessing_VignetteWeight,
    v32,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 152LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_Behaviour,
    0LL,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_Contrast,
    v33,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_DefaultElevation,
    v34,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ElevationLowerLimit,
    v35,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ElevationReturnTime,
    v36,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ElevationReturnWaitTime,
    v37,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ElevationUpperLimit,
    v38,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ExposureValue,
    v39,
    1LL);
  LOBYTE(v40) = 1;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ExposureValueIsBrightness,
    v40,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_FieldOfView,
    v41,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 152LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_FramingBehaviour,
    0LL,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_FramingElevation,
    v42,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_FramingPositionY,
    v43,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_FramingRadius,
    v44,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_FramingRotation,
    v45,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationSpeed,
    v46,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationSpinupTime,
    v47,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_IdleRotationWaitTime,
    v48,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_MaxDistance,
    v49,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_MinDistance,
    v50,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_PositionX,
    v51,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_PositionY,
    v52,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_PositionZ,
    v53,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_RotationW,
    v54,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_RotationX,
    v55,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_RotationY,
    v56,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_RotationZ,
    v57,
    1LL);
  LOBYTE(v58) = *((_BYTE *)a2 + 28);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ToneMappingEnabled,
    v58,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kCamera_ZoomStopsAnimations,
    0LL,
    1LL);
  LOBYTE(v59) = 1;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_DirectEnabled,
    v59,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_DirectIntensity,
    v60,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_EmissiveIntensity,
    v61,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentColorB,
    v62,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentColorG,
    v63,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentColorR,
    v64,
    1LL);
  LOBYTE(v65) = 1;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentEnabled,
    v65,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 152LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentIndex,
    0LL,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentIntensity,
    v66,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_EnvironmentRotation,
    v67,
    1LL);
  Spectre::Utils::IConfigurationManager::SetEnum<enum Spectre::Engine::Aimer::OrientationTrackingBehaviour>(
    (__int64)Configuration,
    (__int64)&Spectre::Engine::ConfigurationProperties::kLighting_Light0_CameraOrientationTracking);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_CameraRelative,
    0LL,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_ColorB,
    v68,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_ColorG,
    v69,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_ColorR,
    v70,
    1LL);
  LOBYTE(v71) = 1;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_Enabled,
    v71,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_FrustumEdgeFalloff,
    v72,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_Intensity,
    v73,
    1LL);
  Spectre::Utils::IConfigurationManager::SetEnum<enum Spectre::Engine::EPhotometricQuantity>(
    (__int64)Configuration,
    (__int64)&Spectre::Engine::ConfigurationProperties::kLighting_Light0_IntensityMode);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_PositionX,
    v74,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_PositionY,
    v75,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_PositionZ,
    v76,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_Radius,
    v77,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_ShadowBufferSize,
    v78,
    1LL);
  LOBYTE(v79) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_ShadowEnabled,
    v79,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_ShadowFarClip,
    v80,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_ShadowFieldOfView,
    v81,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_ShadowFrustumSize,
    v82,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_ShadowNearClip,
    v83,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_SpotAngle,
    v84,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_TargetX,
    v85,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_TargetY,
    v86,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light0_TargetZ,
    v87,
    1LL);
  Spectre::Utils::IConfigurationManager::SetEnum<enum Spectre::Engine::Light::Type>(
    (__int64)Configuration,
    (__int64)&Spectre::Engine::ConfigurationProperties::kLighting_Light0_Type);
  Spectre::Utils::IConfigurationManager::SetEnum<enum Spectre::Engine::Aimer::OrientationTrackingBehaviour>(
    (__int64)Configuration,
    (__int64)&Spectre::Engine::ConfigurationProperties::kLighting_Light1_CameraOrientationTracking);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_CameraRelative,
    0LL,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_ColorB,
    v88,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_ColorG,
    v89,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_ColorR,
    v90,
    1LL);
  LOBYTE(v91) = 1;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_Enabled,
    v91,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_FrustumEdgeFalloff,
    v92,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_Intensity,
    v93,
    1LL);
  Spectre::Utils::IConfigurationManager::SetEnum<enum Spectre::Engine::EPhotometricQuantity>(
    (__int64)Configuration,
    (__int64)&Spectre::Engine::ConfigurationProperties::kLighting_Light1_IntensityMode);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_PositionX,
    v94,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_PositionY,
    v95,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_PositionZ,
    v96,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_Radius,
    v97,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_ShadowBufferSize,
    v98,
    1LL);
  LOBYTE(v99) = *((_BYTE *)a2 + 31);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_ShadowEnabled,
    v99,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_ShadowFarClip,
    v100,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_ShadowFieldOfView,
    v101,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_ShadowFrustumSize,
    v102,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_ShadowNearClip,
    v103,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_SpotAngle,
    v104,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_TargetX,
    v105,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_TargetY,
    v106,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light1_TargetZ,
    v107,
    1LL);
  Spectre::Utils::IConfigurationManager::SetEnum<enum Spectre::Engine::Light::Type>(
    (__int64)Configuration,
    (__int64)&Spectre::Engine::ConfigurationProperties::kLighting_Light1_Type);
  Spectre::Utils::IConfigurationManager::SetEnum<enum Spectre::Engine::Aimer::OrientationTrackingBehaviour>(
    (__int64)Configuration,
    (__int64)&Spectre::Engine::ConfigurationProperties::kLighting_Light2_CameraOrientationTracking);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_CameraRelative,
    0LL,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_ColorB,
    v108,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_ColorG,
    v109,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_ColorR,
    v110,
    1LL);
  LOBYTE(v111) = 1;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_Enabled,
    v111,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_FrustumEdgeFalloff,
    v112,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_Intensity,
    v113,
    1LL);
  Spectre::Utils::IConfigurationManager::SetEnum<enum Spectre::Engine::EPhotometricQuantity>(
    (__int64)Configuration,
    (__int64)&Spectre::Engine::ConfigurationProperties::kLighting_Light2_IntensityMode);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_PositionX,
    v114,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_PositionY,
    v115,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_PositionZ,
    v116,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_Radius,
    v117,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_ShadowBufferSize,
    v118,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_ShadowEnabled,
    0LL,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_ShadowFarClip,
    v119,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_ShadowFieldOfView,
    v120,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_ShadowFrustumSize,
    v121,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_ShadowNearClip,
    v122,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_SpotAngle,
    v123,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_TargetX,
    v124,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_TargetY,
    v125,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 168LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_Light2_TargetZ,
    v126,
    1LL);
  Spectre::Utils::IConfigurationManager::SetEnum<enum Spectre::Engine::Light::Type>(
    (__int64)Configuration,
    (__int64)&Spectre::Engine::ConfigurationProperties::kLighting_Light2_Type);
  LOBYTE(v127) = 1;
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, __int64, __int64))(*(_QWORD *)Configuration + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kLighting_MasterEnabled,
    v127,
    1LL);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD, __int64))(*(_QWORD *)Configuration
                                                                                                  + 144LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kModel_TransformEnabled,
    0LL,
    1LL);
  Spectre::Engine::Engine::GetDevice(*((Spectre::Engine::Engine **)this + 7));
  v128 = v138[0];
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::RenderDevice *)((char *)v138[0] + 24));
  v162 = 0LL;
  *(_QWORD *)&v163 = 0LL;
  DWORD2(v163) = 0;
  LODWORD(v161) = 3;
  *(_OWORD *)v139 = 0LL;
  v165[0] = v161;
  v165[1] = v163;
  v129 = Spectre::Engine::RenderDevice::CreateOutput<RenderOutputDwm,std::shared_ptr<Spectre::Engine::RenderDevice> const &,std::shared_ptr<Spectre::Utils::PerformanceLogger>,unsigned long const &,unsigned long const &,unsigned long const &,float const &>(
           v128,
           &v141,
           (__int64)v165,
           (int)v138,
           (__int64)v139,
           (__int64)a2 + 8,
           (__int64)a2 + 12,
           (__int64)a2 + 16,
           (__int64)a2 + 20);
  v130 = *v129;
  v131 = v129[1];
  *v129 = 0LL;
  v129[1] = 0LL;
  *((_QWORD *)this + 10) = v130;
  v132 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = v131;
  if ( v132 )
    std::_Ref_count_base::_Decref(v132);
  if ( v142 )
    std::_Ref_count_base::_Decref(v142);
  if ( v139[1] )
    std::_Ref_count_base::_Decref(v139[1]);
  LOBYTE(v131) = *((_BYTE *)a2 + 29);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 272LL))(*((_QWORD *)this + 10), v131);
  v134 = (__int64 *)Spectre::Engine::Engine::CreateDisplay(*((_QWORD *)this + 7), &v141, v133, 1LL);
  v135 = (_QWORD *)((char *)this + 64);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 8, v134);
  if ( v142 )
    std::_Ref_count_base::_Decref(v142);
  std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(
    v139,
    (_QWORD *)this + 10);
  Spectre::Engine::Display::AttachOutput(v136, v139);
  if ( v139[1] )
    std::_Ref_count_base::_Decref(v139[1]);
  Spectre::Engine::Display::SetRefreshPolicy(*v135);
  Spectre::Engine::Display::SetRenderingMode(*v135);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)&v143);
  if ( v138[1] )
    std::_Ref_count_base::_Decref(v138[1]);
  v137 = Spectre::Engine::Engine::CreateResource<Spectre::Engine::Mesh,>(*((_QWORD *)this + 7), &v143);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 12, v137);
  if ( v144 )
    std::_Ref_count_base::_Decref(v144);
  SpectreRenderer::s_pInstance = this;
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v164);
  return 0LL;
}
