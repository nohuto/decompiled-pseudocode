/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180056E70 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18004371C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPolicyConfig@@@12@XZ @ 0x18004F964 (--$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPolicyConfig@@@12@XZ.c)
 *     ??4?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18004FA60 (--4-$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x18004FAB0 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??$com_query_to@UIPolicyConfigInternal@@AEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@PEAPEAUIPolicyConfigInternal@@@Z @ 0x18004FC3C (--$com_query_to@UIPolicyConfigInternal@@AEAV-$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAE.c)
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18004FD0C (-InitializeDeviceGraphManager@@YAJXZ.c)
 *     ?Initialize@AudioSessionManagerProvider@@YAJXZ @ 0x180050030 (-Initialize@AudioSessionManagerProvider@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x1800502D8 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 *     Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___ @ 0x18005050C (Microsoft--WRL--Details--OutOfProcModuleBase_Windows--Internal--SvcHostModule_--Create__lambda_b.c)
 *     ??$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServerDescriptor@34@@ServiceModuleBase@Internal@Windows@@QEAAJEEEEPEAXK@Z @ 0x180050550 (--$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServer.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800506D4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180050744 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180050774 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x180050F10 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEBU_tlgProvider_t@@@Z @ 0x180059734 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPol.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x18005AEC8 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18005C774 (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIV.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BFD00 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800C23FC (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 *     ??4?$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C2C48 (--4-$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C5F60 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  CAudioHealthMonitor *v6; // rax
  unsigned int LastError; // ebx
  unsigned int v8; // r8d
  const char *v9; // r9
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rcx
  CPolicyConfig *v12; // rcx
  int v13; // eax
  LSTATUS ValueW; // eax
  DWORD v15; // ecx
  AudioSessionManagerProvider *v16; // rcx
  _QWORD *v17; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  __int64 v19; // rcx
  unsigned int v20; // r8d
  const char *v21; // r9
  RPC_STATUS v22; // ebx
  int v23; // ebx
  __int64 *lambda_b07e40d598d2e6cc64bbba968f53c163; // rax
  int v25; // eax
  __int64 v27; // rdx
  struct wil::details::IFunctorHost *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // xmm6_8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // r9
  __int64 v35; // rdx
  int pdwType; // [rsp+28h] [rbp-E0h]
  DWORD pvData[2]; // [rsp+48h] [rbp-C0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  DWORD *v39; // [rsp+58h] [rbp-B0h] BYREF
  DWORD pcbData[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp-98h] BYREF
  struct DiagnosticsInfo v43; // [rsp+80h] [rbp-88h] BYREF
  const char *v44; // [rsp+88h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-78h]
  __int16 v46; // [rsp+98h] [rbp-70h]
  _BYTE v47[8]; // [rsp+A0h] [rbp-68h] BYREF
  std::_Ref_count_base *v48; // [rsp+A8h] [rbp-60h]
  PSECURITY_DESCRIPTOR *p_SecurityDescriptor; // [rsp+B0h] [rbp-58h]
  char v50; // [rsp+B8h] [rbp-50h]
  _BYTE v51[8]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-40h]
  int v53; // [rsp+D4h] [rbp-34h]
  wchar_t String[32]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids);
  }
  v2 = (__int64 *)Microsoft::WRL::Details::Make<CPolicyConfig,>((CPolicyConfig **)&v39);
  Microsoft::WRL::ComPtr<CPolicyConfig>::operator=(v3, v2);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v39);
  if ( !g_PolicyConfig )
  {
    v27 = 2057LL;
    goto LABEL_37;
  }
  pvData[1] = 4;
  pvData[0] = 5;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"AudioHealthMonitorLimit",
         0x18u,
         0LL,
         pvData,
         &pvData[1]) )
  {
    v39 = pvData;
    v43 = (struct DiagnosticsInfo)retaddr;
    v44 = "avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp";
    v45 = 0LL;
    v46 = 2066;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetImpl'::`2'::impl,
      1u,
      v4,
      v5);
    v42[0] = &off_1801767B8;
    v42[1] = &v39;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v51, 16046125, &v43);
    wil::details::RunFunctor((wil::details *)v42, (struct wil::details::IFunctor *)v51, v28);
    if ( v52 )
      *(_DWORD *)(v52 + 16) = v53;
  }
  if ( pvData[0] )
  {
    v6 = (CAudioHealthMonitor *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v42[0] = v6;
    if ( v6 )
    {
      g_AudioHealthMonitor = (_FILETIME)CAudioHealthMonitor::CAudioHealthMonitor(v6, pvData[0]);
      if ( g_AudioHealthMonitor )
        goto LABEL_8;
    }
    else
    {
      g_AudioHealthMonitor = 0LL;
    }
    v27 = 2079LL;
LABEL_37:
    LastError = -2147024882;
    v10 = retaddr;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      v10,
      (void *)v27,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)LastError,
      pdwType);
    return LastError;
  }
LABEL_8:
  LastError = Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>();
  v10 = retaddr;
  if ( (LastError & 0x80000000) != 0 )
  {
    v27 = 2084LL;
    goto LABEL_39;
  }
  if ( !g_pVolumeProvider )
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x825, v8, v9);
  v41 = 0LL;
  wil::com_query_to<IPolicyConfigInternal,Microsoft::WRL::ComPtr<CPolicyConfig> &>((__int64)retaddr, (__int64)&v41);
  v12 = (CPolicyConfig *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           v11,
                           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  v42[0] = v41;
  v39 = (DWORD *)v12;
  v13 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,IPolicyConfigInternal * &,_tlgProvider_t const * &>(
          v12,
          v42,
          &v39);
  LastError = v13;
  if ( v13 < 0 )
  {
    v29 = 2090LL;
LABEL_52:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)v13,
      pdwType);
    goto LABEL_30;
  }
  pvData[1] = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioSrvWatchDogTimerInMs",
             0x18u,
             0LL,
             pvData,
             &pvData[1]);
  v15 = g_AudioSrvWatchDogTimerInMs;
  if ( !ValueW )
    v15 = pvData[0];
  g_AudioSrvWatchDogTimerInMs = v15;
  memset_0(String, 0, sizeof(String));
  pcbData[0] = 64;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"RenderStreamVolumeTaperPower",
          2u,
          0LL,
          String,
          pcbData) )
  {
    *(double *)&v30 = _wtof(String);
    if ( *(double *)&v30 != 0.0 )
    {
      v31 = std::make_shared<CVolumeUnit,>(v47);
      std::shared_ptr<CVolumeUnit>::operator=(v32, v31);
      if ( v48 )
        std::_Ref_count_base::_Decref(v48);
      CVolumeUnit::SetDBRange(g_RenderStreamTaperTranslator, v33, -96.0, 0.0, SLODWORD(FLOAT_1_5), v30);
    }
  }
  v13 = InitializeDeviceGraphManager();
  LastError = v13;
  if ( v13 < 0 )
  {
    v29 = 2111LL;
    goto LABEL_52;
  }
  v13 = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>();
  LastError = v13;
  if ( v13 < 0 )
  {
    v29 = 2113LL;
    goto LABEL_52;
  }
  v13 = AudioSessionManagerProvider::Initialize(v16);
  LastError = v13;
  if ( v13 < 0 )
  {
    v29 = 2118LL;
    goto LABEL_52;
  }
  v17 = g_pEndpointCharacteristicsCache;
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache,
                     g_pEndpointCharacteristicsCache,
                     0LL);
  v17[11] = ThreadpoolWork;
  if ( ThreadpoolWork )
    SubmitThreadpoolWork(ThreadpoolWork);
  v42[0] = g_PolicyManager;
  v13 = Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
          v19,
          v42);
  LastError = v13;
  if ( v13 < 0 )
  {
    v29 = 2121LL;
    goto LABEL_52;
  }
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x84C,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
                  v21);
    goto LABEL_30;
  }
  if ( !SecurityDescriptor )
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x84D, v20, v21);
  p_SecurityDescriptor = &SecurityDescriptor;
  v50 = 1;
  if ( ServerEndpointIsStarted(L"AudioClientRpc") )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids);
    }
  }
  else
  {
    v22 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
    if ( v22 )
    {
      LastError = v22 | 0x80010000;
      v34 = LastError;
      v35 = 2140LL;
      goto LABEL_62;
    }
  }
  v23 = RpcServerRegisterIf3(&unk_18016A680, 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, SecurityDescriptor);
  if ( v23 )
  {
    LastError = v23 | 0x80010000;
    v34 = LastError;
    v35 = 2147LL;
  }
  else
  {
    *((_DWORD *)this + 25) = 1;
    lambda_b07e40d598d2e6cc64bbba968f53c163 = Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___();
    v25 = Windows::Internal::ServiceModuleBase::Initialize<Windows::Internal::ServiceModuleBase::SecurityPolicyEveryoneLocal,2,Windows::Internal::DefaultServerDescriptor>((Windows::Internal::ServiceModuleBase *)lambda_b07e40d598d2e6cc64bbba968f53c163);
    LastError = v25;
    if ( v25 >= 0 )
    {
      *((_DWORD *)this + 26) = 1;
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_5393df242fd9363f39d10bcd7fa9895f_Traceguids);
      }
      LastError = 0;
      goto LABEL_29;
    }
    v34 = (unsigned int)v25;
    v35 = 2151LL;
  }
LABEL_62:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v35,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
    (const char *)v34,
    pdwType);
LABEL_29:
  LocalFree(SecurityDescriptor);
LABEL_30:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
  return LastError;
}
