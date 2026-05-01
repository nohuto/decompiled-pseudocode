/*
 * XREFs of ??0XamlLauncher@@QEAA@XZ @ 0x1800650F8
 * Callers:
 *     ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x180064D8C (--$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180041254 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAlwaysAutoShow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800655D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAlwaysAutoShow@@@details@wil@@QEAAX_.c)
 *     ?PreCreateVolatileRegkey@StartDocked@@YAXXZ @ 0x1800657CC (-PreCreateVolatileRegkey@StartDocked@@YAXXZ.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x180065D74 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     _anonymous_namespace_::IsTestDevice @ 0x180065E44 (_anonymous_namespace_--IsTestDevice.c)
 *     ?AutomaticInvokeSkipped_TestMachine@StartWindowTelemetry@@SAXXZ @ 0x1800C8134 (-AutomaticInvokeSkipped_TestMachine@StartWindowTelemetry@@SAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800D464C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@U-$Implements@U-$.c)
 *     ??0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z @ 0x1800F4970 (--0TaskbarLayout@Shell@UI@WindowsUdk@winrt@@QEAA@$$T@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180101988 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121CB4 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x180142EEC (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x18018D45C (IsQueryWin32SubsystemHostPresent.c)
 *     ?AutomaticInvokeSkipped_ContainerOSGuest@StartWindowTelemetry@@SAXXZ @ 0x18044A838 (-AutomaticInvokeSkipped_ContainerOSGuest@StartWindowTelemetry@@SAXXZ.c)
 *     ?AutomaticInvokeSkipped_MultiUserSessionSKU@StartWindowTelemetry@@SAXXZ @ 0x18044A970 (-AutomaticInvokeSkipped_MultiUserSessionSKU@StartWindowTelemetry@@SAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@@std@@XZ @ 0x18044C4E4 (-ensure_data@-$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV-$shared_pt.c)
 */

// Hidden C++ exception states: #wind=19
XamlLauncher *__fastcall XamlLauncher::XamlLauncher(XamlLauncher *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // r9d
  StartDocked *v6; // rcx
  _QWORD *v7; // rax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  char *v10; // [rsp+58h] [rbp+10h] BYREF

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>();
  *(_QWORD *)this = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>>'};
  *((_QWORD *)this + 3) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>>'};
  *((_QWORD *)this + 4) = &XamlLauncher::`vftable'{for `IImmersiveLauncherTrayNotify'};
  *((_QWORD *)this + 5) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>'};
  *((_QWORD *)this + 6) = &XamlLauncher::`vftable'{for `IServiceProvider'};
  *((_QWORD *)this + 7) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>'};
  *((_QWORD *)this + 8) = &XamlLauncher::`vftable'{for `IImmersiveLauncherCortana'};
  *((_QWORD *)this + 9) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>'};
  *((_QWORD *)this + 10) = &XamlLauncher::`vftable'{for `IPrivilegedOperationsConsumer'};
  *((_QWORD *)this + 11) = &XamlLauncher::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveLauncherInternal>'};
  *((_QWORD *)this + 15) = 0LL;
  v2 = (_QWORD *)((char *)this + 128);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_OWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  memset_0((char *)this + 224, 0, 0x60uLL);
  *((_DWORD *)this + 80) = 256;
  *((_WORD *)this + 162) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 5;
  *((_QWORD *)this + 43) = 0LL;
  winrt::WindowsUdk::UI::Shell::TaskbarLayout::TaskbarLayout((char *)this + 352);
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  winrt::WindowsUdk::UI::Shell::TaskbarLayout::TaskbarLayout((char *)this + 392);
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  winrt::WindowsUdk::UI::Shell::TaskbarLayout::TaskbarLayout((char *)this + 432);
  *((_QWORD *)this + 55) = 0LL;
  v10 = (char *)this + 448;
  winrt::impl::resume_apartment_context::resume_apartment_context((XamlLauncher *)((char *)this + 448));
  LOBYTE(v3) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
    v4,
    v3);
  LODWORD(v10) = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
              L"StartShownOnUpgrade",
              v5,
              (int *)&v10) < 0
    || !(_DWORD)v10 )
  {
    *((_BYTE *)this + 323) = 1;
  }
  if ( (unsigned __int8)anonymous_namespace_::IsTestDevice() )
  {
    StartWindowTelemetry::AutomaticInvokeSkipped_TestMachine();
    *((_BYTE *)this + 323) = 0;
  }
  if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() && (unsigned int)QueryWin32SubsystemHost() )
  {
    StartWindowTelemetry::AutomaticInvokeSkipped_ContainerOSGuest();
    *((_BYTE *)this + 323) = 0;
  }
  if ( !IsActiveSessionCountLimited() )
  {
    StartWindowTelemetry::AutomaticInvokeSkipped_MultiUserSessionSKU();
    *((_BYTE *)this + 323) = 0;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAlwaysAutoShow>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_StartAlwaysAutoShow>::GetImpl'::`2'::impl,
    0LL);
  if ( *((_BYTE *)this + 323) )
  {
    if ( *v2 && tip::details::test_common_data<1>::has_ever_started(*v2 + 8LL) )
      std::shared_ptr<PeoplePaneViewInfo>::reset((_QWORD *)this + 16);
    v7 = (_QWORD *)tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::ensure_data((char *)this + 128);
    tip::details::test_common_data<1>::start(*v7 + 8LL, &v9);
    *((_OWORD *)this + 9) = v9;
  }
  XamlLauncher::s_pLauncher = this;
  StartDocked::PreCreateVolatileRegkey(v6);
  return this;
}
