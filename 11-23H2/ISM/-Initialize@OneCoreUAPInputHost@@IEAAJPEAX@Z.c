/*
 * XREFs of ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004DBFC
 * Callers:
 *     ?Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z @ 0x18003AAA4 (-Create@OneCoreUAPInputHost@@SAJPEAXPEAPEAUISystemInputHost@@_N@Z.c)
 * Callees:
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x180009920 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x180026B3C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003589C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x18003ABFC (-Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18003ACA0 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18003B598 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 *     ?OnCacheTimer@InputSinkDataCache@@QEAAXXZ @ 0x18004DF40 (-OnCacheTimer@InputSinkDataCache@@QEAAXXZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18004DF78 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x180057408 (IsGetMPCInputPostProcessorPresent.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?4U?$default_delete@PEAVSessionMonitor@@@std@@$0A@@?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800581E8 (--$-4U-$default_delete@PEAVSessionMonitor@@@std@@$0A@@-$unique_ptr@PEAVSessionMonitor@@U-$defaul.c)
 *     ??$make_unique@PEAVSessionMonitor@@AEAPEAV1@$0A@@std@@YA?AV?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@0@AEAPEAVSessionMonitor@@@Z @ 0x180058224 (--$make_unique@PEAVSessionMonitor@@AEAPEAV1@$0A@@std@@YA-AV-$unique_ptr@PEAVSessionMonitor@@U-$d.c)
 *     ??1?$unique_ptr@PEAVSessionMonitor@@U?$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAA@XZ @ 0x18005825C (--1-$unique_ptr@PEAVSessionMonitor@@U-$default_delete@PEAVSessionMonitor@@@std@@@std@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z @ 0x180058BF4 (-Create@SessionMonitor@@SAJPEAUISessionMonitorOwner@@PEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@RotationWatcher@@SAJXZ @ 0x1801171A8 (-Initialize@RotationWatcher@@SAJXZ.c)
 *     ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1801B8650 (-Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall OneCoreUAPInputHost::Initialize(OneCoreUAPInputHost *this, struct IDWMInputProxy *a2)
{
  __int64 *v3; // r14
  int v4; // eax
  const char *v5; // r9
  __int64 *Instance; // r13
  struct IMessageSession *v7; // rsi
  __int64 (__fastcall *v8)(struct IMessageSession *, __int64 (__fastcall *)(_BYTE *), __int64 *, __int64 *); // rdi
  int v9; // eax
  struct ISystemInputRouter **v10; // rdi
  char MPCInputPostProcessorPresent; // al
  struct ISystemInputRouter **v12; // r8
  struct IInputFocusListener *v13; // rdx
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 *v17; // rsi
  __int64 v18; // r8
  const char *v19; // r9
  int v20; // eax
  const char *v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  const char *v26; // r9
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  int v31; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct IMessageSession *v33; // [rsp+70h] [rbp+40h] BYREF
  struct SessionMonitor *v34; // [rsp+80h] [rbp+50h] BYREF
  char v35; // [rsp+88h] [rbp+58h] BYREF

  v3 = *(__int64 **)&OneCoreUAPInputHost::s_pInputHost;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v33);
  v4 = CoreUICreate(&v33);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v4,
      v31);
  (*(void (__fastcall **)(struct IMessageSession *, int (*)(void *, bool, struct _FILETIME *), __int64 *))(*(_QWORD *)v33 + 256LL))(
    v33,
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
  v7 = v33;
  v8 = *(__int64 (__fastcall **)(struct IMessageSession *, __int64 (__fastcall *)(_BYTE *), __int64 *, __int64 *))(*(_QWORD *)v33 + 144LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(Instance + 12);
  v9 = v8(v7, InputSinkDataCache::OnCacheTimerStatic, Instance, Instance + 12);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\inputsinkdatacache\\lib\\inp"
                    "utsinkdatacache.cpp",
      (const char *)(unsigned int)v9,
      v31);
  InputSinkDataCache::OnCacheTimer((InputSinkDataCache *)Instance);
  v10 = (struct ISystemInputRouter **)(v3 + 6);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v3 + 6);
  v3[6] = 0LL;
  MPCInputPostProcessorPresent = IsGetMPCInputPostProcessorPresent(v3 + 1);
  v12 = (struct ISystemInputRouter **)(v3 + 6);
  v13 = (struct IInputFocusListener *)((unsigned __int64)(v3 + 1) & -(__int64)(v3 != 0LL));
  if ( MPCInputPostProcessorPresent )
  {
    v14 = MPCInputRouter::Create(a2, v13, v12);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 30LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\factory\\lib\\inputrouterfactory.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_13;
    }
  }
  else
  {
    v14 = DWMInputRouter::Create(a2, v13, v12);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 34LL;
      goto LABEL_9;
    }
  }
  v15 = 0;
LABEL_13:
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x63,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v15,
      v31);
  v17 = v3 + 7;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v3 + 7);
  v20 = InputStateManager::Create(*v10, (struct IRawInputClient **)v3 + 7, v18, v19);
  if ( v20 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v20,
      v31);
  v22 = InputProviderManager::InitializeHelper((__int64)(v3 + 8), *v17, 0, v21);
  if ( v22 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x67,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v22,
      v31);
  if ( IsEdition(10LL) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(
                            &`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl,
                            v23,
                            v24,
                            v25) )
    {
      v34 = 0LL;
      SessionMonitor::Create(
        (struct ISessionMonitorOwner *)((unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL)),
        v33,
        &v34);
      v27 = std::make_unique<SessionMonitor *,SessionMonitor * &,0>(&v35, &v34);
      std::unique_ptr<SessionMonitor *>::operator=<std::default_delete<SessionMonitor *>,0>(v3 + 14, v27);
      std::unique_ptr<SessionMonitor *>::~unique_ptr<SessionMonitor *>(&v35);
    }
  }
  else if ( IsEdition(253345LL) )
  {
    v28 = RotationWatcher::Initialize();
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x74,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v28,
        v31);
  }
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v26);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v3 + 12);
    v29 = Win32kInterop::Create((struct IRawInputClient *)*v17, *v10, (struct Win32kInterop **)v3 + 12);
    if ( v29 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x79,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
        (const char *)(unsigned int)v29,
        v31);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v33);
  return 0LL;
}
