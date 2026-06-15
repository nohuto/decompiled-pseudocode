/*
 * XREFs of ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180058220 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18001A548 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x180057B48 (--$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@.c)
 *     ?Initialize@AudioSessionManagerProvider@@YAJXZ @ 0x180057C3C (-Initialize@AudioSessionManagerProvider@@YAJXZ.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x180059DB0 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___ @ 0x180059F34 (Microsoft--WRL--Details--OutOfProcModuleBase_Windows--Internal--SvcHostModule_--Create__lambda_b.c)
 *     ??4?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180059F78 (--4-$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x180059FC8 (--0CAudioHealthMonitor@@QEAA@K@Z.c)
 *     ??$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPolicyConfig@@@12@XZ @ 0x18005A06C (--$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPolicyConfig@@@12@XZ.c)
 *     ?InitializeCustomEndpointResourceManagerProvider@@YAJPEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x18005ADE0 (-InitializeCustomEndpointResourceManagerProvider@@YAJPEAPEAUIEndpointResourceManagerProvider@@@Z.c)
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18005AFB0 (-InitializeDeviceGraphManager@@YAJXZ.c)
 *     ??$MakeAndInitialize@VEffectPackConfigurationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVEffectPackConfigurationManager@@@Z @ 0x18005B4B8 (--$MakeAndInitialize@VEffectPackConfigurationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVEf.c)
 *     ??$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServerDescriptor@34@@ServiceModuleBase@Internal@Windows@@QEAAJEEEEPEAXK@Z @ 0x18005B940 (--$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServer.c)
 *     ??$com_query_to@UIPolicyConfigInternal@@AEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAEAV?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@PEAPEAUIPolicyConfigInternal@@@Z @ 0x180061888 (--$com_query_to@UIPolicyConfigInternal@@AEAV-$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@@wil@@YAXAE.c)
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x18006281C (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 *     ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEAVEffectPackConfigurationManager@@AEAPEAUIEndpointResourceManagerProvider@@AEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEAVEffectPackConfigurationManager@@AEAPEAUIEndpointResourceManagerProvider@@AEAPEBU_tlgProvider_t@@@Z @ 0x180063EF8 (--$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPol.c)
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x180064838 (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIV.c)
 *     ?reset@?$com_ptr_t@UIEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180065D48 (-reset@-$com_ptr_t@UIEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800EEC40 (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 *     wil::details::lambda_call__lambda_91a1f630fe7b5e9167368477df6b2627___::_lambda_call__lambda_91a1f630fe7b5e9167368477df6b2627___ @ 0x1800EEE18 (wil--details--lambda_call__lambda_91a1f630fe7b5e9167368477df6b2627___--_lambda_call__lambda_91a1.c)
 *     ??4?$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EF15C (--4-$shared_ptr@VCVolumeUnit@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800F0FE4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSrv::VAD_AudiosrvServiceStart(CAudioSrv *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  signed int LastError; // ebx
  LSTATUS ValueW; // eax
  unsigned int v7; // ecx
  CAudioHealthMonitor *v8; // rax
  unsigned int v9; // r8d
  const char *v10; // r9
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  LSTATUS v16; // eax
  unsigned int v17; // ecx
  LSTATUS v18; // eax
  unsigned int v19; // ecx
  CAudioResourceManager *v20; // rcx
  AudioSessionManagerProvider *v21; // rcx
  _QWORD *v22; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  __int64 v24; // rcx
  unsigned int v25; // r8d
  const char *v26; // r9
  RPC_STATUS v27; // ebx
  int v28; // ebx
  __int64 lambda_b07e40d598d2e6cc64bbba968f53c163; // rax
  int v30; // eax
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // xmm6_8
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned int pvData; // [rsp+48h] [rbp-79h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-75h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-71h] BYREF
  PSECURITY_DESCRIPTOR *p_SecurityDescriptor; // [rsp+58h] [rbp-69h] BYREF
  std::_Ref_count_base *v44; // [rsp+60h] [rbp-61h]
  PSECURITY_DESCRIPTOR *v45; // [rsp+68h] [rbp-59h] BYREF
  DWORD v46; // [rsp+70h] [rbp-51h] BYREF
  __int64 v47; // [rsp+78h] [rbp-49h] BYREF
  struct IEndpointResourceManagerProvider *v48; // [rsp+80h] [rbp-41h] BYREF
  __int64 v49; // [rsp+88h] [rbp-39h] BYREF
  wchar_t String[32]; // [rsp+98h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids);
  }
  v2 = Microsoft::WRL::Details::Make<CPolicyConfig,>(&v47);
  Microsoft::WRL::ComPtr<CPolicyConfig>::operator=(v3, v2);
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease(&v47);
  if ( !g_PolicyConfig )
  {
    v32 = 2054LL;
    goto LABEL_41;
  }
  v4 = *((_QWORD *)this + 70);
  *((_QWORD *)this + 70) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  LastError = Microsoft::WRL::Details::MakeAndInitialize<EffectPackConfigurationManager,EffectPackConfigurationManager,>((char *)this + 560);
  if ( LastError < 0 )
  {
    v32 = 2056LL;
    goto LABEL_43;
  }
  pvData = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioHealthMonitorLimit",
             0x18u,
             0LL,
             &pvData,
             &pcbData);
  v7 = pvData;
  if ( ValueW )
    v7 = 5;
  pvData = v7;
  if ( v7 )
  {
    v8 = (CAudioHealthMonitor *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    p_SecurityDescriptor = (PSECURITY_DESCRIPTOR *)v8;
    if ( v8 )
    {
      g_AudioHealthMonitor = (struct _FILETIME)CAudioHealthMonitor::CAudioHealthMonitor(v8, pvData);
      if ( g_AudioHealthMonitor )
        goto LABEL_12;
    }
    else
    {
      g_AudioHealthMonitor = 0LL;
    }
    v32 = 2073LL;
LABEL_41:
    LastError = -2147024882;
LABEL_43:
    v11 = retaddr;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      v11,
      (void *)v32,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)LastError);
    return (unsigned int)LastError;
  }
LABEL_12:
  LastError = Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>();
  v11 = retaddr;
  if ( LastError < 0 )
  {
    v32 = 2078LL;
    goto LABEL_45;
  }
  if ( !g_pVolumeProvider )
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x81F, v9, v10);
  wil::com_ptr_t<IEndpointResourceManagerProvider,wil::err_returncode_policy>::reset(retaddr);
  LastError = InitializeCustomEndpointResourceManagerProvider(&g_CustomEndpointResourceManagerProvider);
  if ( LastError < 0 )
  {
    v32 = 2082LL;
    goto LABEL_43;
  }
  v45 = 0LL;
  wil::com_query_to<IPolicyConfigInternal,Microsoft::WRL::ComPtr<CPolicyConfig> &>(v12, &v45);
  v14 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v13,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  v48 = g_CustomEndpointResourceManagerProvider;
  v49 = *((_QWORD *)this + 70);
  p_SecurityDescriptor = v45;
  v47 = v14;
  v15 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,IPolicyConfigInternal * &,EffectPackConfigurationManager * &,IEndpointResourceManagerProvider * &,_tlgProvider_t const * &>(
          v14,
          (unsigned int)&p_SecurityDescriptor,
          (unsigned int)&v49,
          (unsigned int)&v48,
          (__int64)&v47);
  LastError = v15;
  if ( v15 < 0 )
  {
    v35 = 2087LL;
LABEL_59:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_48;
  }
  pcbData = 4;
  v16 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"AudioSrvWatchDogTimerInMs",
          0x18u,
          0LL,
          &pvData,
          &pcbData);
  v17 = g_AudioSrvWatchDogTimerInMs;
  if ( !v16 )
    v17 = pvData;
  g_AudioSrvWatchDogTimerInMs = v17;
  memset_0(String, 0, sizeof(String));
  v46 = 64;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"RenderStreamVolumeTaperPower",
          2u,
          0LL,
          String,
          &v46) )
  {
    *(double *)&v36 = _wtof(String);
    if ( *(double *)&v36 != 0.0 )
    {
      v37 = std::make_shared<CVolumeUnit,>(&p_SecurityDescriptor);
      std::shared_ptr<CVolumeUnit>::operator=(v38, v37);
      if ( v44 )
        std::_Ref_count_base::_Decref(v44);
      CVolumeUnit::SetDBRange(g_RenderStreamTaperTranslator, v39, -96.0, 0.0, SLODWORD(FLOAT_1_5), v36);
    }
  }
  pcbData = 4;
  v18 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"UnrestrictedPerProcessLoopback",
          0x18u,
          0LL,
          &pvData,
          &pcbData);
  v19 = g_UnrestrictedPerProcessLoopback;
  if ( !v18 )
    v19 = pvData;
  g_UnrestrictedPerProcessLoopback = v19;
  v15 = InitializeDeviceGraphManager();
  LastError = v15;
  if ( v15 < 0 )
  {
    v35 = 2114LL;
    goto LABEL_59;
  }
  v15 = Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>(v20);
  LastError = v15;
  if ( v15 < 0 )
  {
    v35 = 2116LL;
    goto LABEL_59;
  }
  v15 = AudioSessionManagerProvider::Initialize(v21);
  LastError = v15;
  if ( v15 < 0 )
  {
    v35 = 2121LL;
    goto LABEL_59;
  }
  v22 = g_pEndpointCharacteristicsCache;
  ThreadpoolWork = CreateThreadpoolWork(
                     CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache,
                     g_pEndpointCharacteristicsCache,
                     0LL);
  v22[12] = ThreadpoolWork;
  if ( ThreadpoolWork )
    SubmitThreadpoolWork(ThreadpoolWork);
  p_SecurityDescriptor = (PSECURITY_DESCRIPTOR *)g_PolicyManager;
  v15 = Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
          v24,
          &p_SecurityDescriptor);
  LastError = v15;
  if ( v15 < 0 )
  {
    v35 = 2124LL;
    goto LABEL_59;
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
                  (void *)0x84F,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
                  v26);
    goto LABEL_48;
  }
  if ( !SecurityDescriptor )
    wil::details::in1diag3::_FailFast_NullAlloc(retaddr, (void *)0x850, v25, v26);
  p_SecurityDescriptor = &SecurityDescriptor;
  LOBYTE(v44) = 1;
  if ( ServerEndpointIsStarted(L"AudioClientRpc") )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids);
    }
  }
  else
  {
    v27 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioClientRpc", SecurityDescriptor);
    if ( v27 )
    {
      LastError = v27 | 0x80010000;
      v33 = (unsigned int)LastError;
      v34 = 2143LL;
      goto LABEL_47;
    }
  }
  v28 = RpcServerRegisterIf3(&unk_18016EBA0, 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, SecurityDescriptor);
  if ( v28 )
  {
    LastError = v28 | 0x80010000;
    v33 = (unsigned int)LastError;
    v34 = 2150LL;
    goto LABEL_47;
  }
  *((_DWORD *)this + 25) = 1;
  lambda_b07e40d598d2e6cc64bbba968f53c163 = Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___();
  v30 = Windows::Internal::ServiceModuleBase::Initialize<Windows::Internal::ServiceModuleBase::SecurityPolicyEveryoneLocal,2,Windows::Internal::DefaultServerDescriptor>(lambda_b07e40d598d2e6cc64bbba968f53c163);
  LastError = v30;
  if ( v30 < 0 )
  {
    v33 = (unsigned int)v30;
    v34 = 2154LL;
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)v33);
    wil::details::lambda_call__lambda_91a1f630fe7b5e9167368477df6b2627___::_lambda_call__lambda_91a1f630fe7b5e9167368477df6b2627___(&p_SecurityDescriptor);
LABEL_48:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v45);
    return (unsigned int)LastError;
  }
  *((_DWORD *)this + 26) = 1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_621167bef4003aa6e08b5688b5cb64cc_Traceguids);
  }
  LocalFree(SecurityDescriptor);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v45);
  return 0LL;
}
