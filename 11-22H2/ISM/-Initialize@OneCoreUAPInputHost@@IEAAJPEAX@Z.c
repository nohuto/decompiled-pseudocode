/*
 * XREFs of ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004E45C
 * Callers:
 *     ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x180036CD4 (-Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z.c)
 * Callees:
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180009D90 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18001D79C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180036E2C (-Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180036ED0 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003BC78 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?OnCacheTimer@InputSinkDataCache@@QEAAXXZ @ 0x18004E75C (-OnCacheTimer@InputSinkDataCache@@QEAAXXZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18004E794 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18004E820 (-CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?4U?$default_delete@PEAVSessionMonitor@@@std@@$0A@@?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800595F4 (--$-4U-$default_delete@PEAVSessionMonitor@@@std@@$0A@@-$unique_ptr@PEAVSessionMonitor@@U-$defaul.c)
 *     ??$make_unique@PEAVSessionMonitor@@AEAPEAV1@$0A@@std@@YA?AV?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@0@AEAPEAVSessionMonitor@@@Z @ 0x180059630 (--$make_unique@PEAVSessionMonitor@@AEAPEAV1@$0A@@std@@YA-AV-$unique_ptr@PEAVSessionMonitor@@U-$d.c)
 *     ??1?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAA@XZ @ 0x180059668 (--1-$unique_ptr@PEAVSessionMonitor@@U-$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z @ 0x18005A3A4 (-Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@RotationWatcher@@SAJXZ @ 0x180125218 (-Initialize@RotationWatcher@@SAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall OneCoreUAPInputHost::Initialize(OneCoreUAPInputHost *this, struct IDWMInputProxy *a2)
{
  __int64 *v3; // r14
  int v4; // eax
  const char *v5; // r9
  __int64 *Instance; // r15
  struct IMessageSession *v7; // rsi
  __int64 (__fastcall *v8)(struct IMessageSession *, __int64 (__fastcall *)(_BYTE *), __int64 *, __int64 *); // rdi
  int v9; // eax
  struct ISystemInputRouter **v10; // rsi
  int SystemInputRouter; // eax
  __int64 *v12; // rdi
  __int64 v13; // r8
  const char *v14; // r9
  int v15; // eax
  const char *v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  const char *v21; // r9
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v26; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct IMessageSession *v28; // [rsp+70h] [rbp+40h] BYREF
  struct SessionMonitor *v29; // [rsp+80h] [rbp+50h] BYREF
  char v30; // [rsp+88h] [rbp+58h] BYREF

  v3 = *(__int64 **)&OneCoreUAPInputHost::s_pInputHost;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v28);
  v4 = CoreUICreate(&v28);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v4,
      v26);
  (*(void (__fastcall **)(struct IMessageSession *, int (*)(void *, bool, struct _FILETIME *), __int64 *))(*(_QWORD *)v28 + 256LL))(
    v28,
    OneCoreUAPInputHost::DeferredInitializeStatic,
    v3);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v5);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
    NtMITSetInputCallbacks(Win32kInterop::s_DeviceNotificationsCallback);
  ISMStatics::GetForegroundManager();
  ISMStatics::GetInputSiteHierarchyManager();
  Instance = (__int64 *)InputSinkDataCache::GetInstance();
  v7 = v28;
  v8 = *(__int64 (__fastcall **)(struct IMessageSession *, __int64 (__fastcall *)(_BYTE *), __int64 *, __int64 *))(*(_QWORD *)v28 + 144LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(Instance + 12);
  v9 = v8(v7, InputSinkDataCache::OnCacheTimerStatic, Instance, Instance + 12);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\inputsinkdatacache\\lib\\inp"
                    "utsinkdatacache.cpp",
      (const char *)(unsigned int)v9,
      v26);
  InputSinkDataCache::OnCacheTimer((InputSinkDataCache *)Instance);
  v10 = (struct ISystemInputRouter **)(v3 + 6);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v3 + 6);
  SystemInputRouter = CreateSystemInputRouter(
                        a2,
                        (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v3 >> 64)),
                        (struct ISystemInputRouter **)v3 + 6);
  if ( SystemInputRouter < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x62,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)SystemInputRouter,
      v26);
  v12 = v3 + 7;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v3 + 7);
  v15 = InputStateManager::Create(*v10, (struct IRawInputClient **)v3 + 7, v13, v14);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x64,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v15,
      v26);
  v17 = InputProviderManager::InitializeHelper((__int64)(v3 + 8), *v12, 0, v16);
  if ( v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x66,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v17,
      v26);
  if ( IsEdition(10LL) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(
                            &`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl,
                            v18,
                            v19,
                            v20) )
    {
      v29 = 0LL;
      SessionMonitor::Create(
        (struct ISessionMonitorOwner *)((unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL)),
        v28,
        &v29);
      v22 = std::make_unique<SessionMonitor *,SessionMonitor * &,0>(&v30, &v29);
      std::unique_ptr<SessionMonitor *>::operator=<std::default_delete<SessionMonitor *>,0>(v3 + 14, v22);
      std::unique_ptr<SessionMonitor *>::~unique_ptr<SessionMonitor *>(&v30);
    }
  }
  else if ( IsEdition(253345LL) )
  {
    v23 = RotationWatcher::Initialize();
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x73,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v23,
        v26);
  }
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v21);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v3 + 12);
    v24 = Win32kInterop::Create((struct IRawInputClient *)*v12, *v10, (struct Win32kInterop **)v3 + 12);
    if ( v24 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x78,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v24,
        v26);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v28);
  return 0LL;
}
