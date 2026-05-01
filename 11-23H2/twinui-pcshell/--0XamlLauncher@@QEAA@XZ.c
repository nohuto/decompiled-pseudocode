/*
 * XREFs of ??0XamlLauncher@@QEAA@XZ @ 0x1801039F4
 * Callers:
 *     ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x180104268 (--$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@WRL@Microsoft@@QEAA@XZ @ 0x180103060 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@U-$Implements@U-$.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18017F720 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OobeLaunchDevHome@@@details@wil@@QEAA_NXZ @ 0x180197AA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_OobeLaunchDevHome@@@details@wil@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_43480734@@@details@wil@@QEAA_NXZ @ 0x180198948 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_43480734@@@details@wil@@QEAA_NXZ.c)
 *     ?PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ @ 0x18019FA74 (-PrecreateStartMenuConfigRegKey@StartDocked@@YAXXZ.c)
 *     ?AutomaticInvokeSkipped_TestMachine@StartWindowTelemetry@@SAXXZ @ 0x1801B58AC (-AutomaticInvokeSkipped_TestMachine@StartWindowTelemetry@@SAXXZ.c)
 *     _anonymous_namespace_::IsTestDevice @ 0x1801BAF88 (_anonymous_namespace_--IsTestDevice.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1801CC574 (IsQueryWin32SubsystemHostPresent.c)
 *     ?AutomaticInvokeSkipped_PrelaunchDisabled@StartWindowTelemetry@@SAXXZ @ 0x1801FEDCC (-AutomaticInvokeSkipped_PrelaunchDisabled@StartWindowTelemetry@@SAXXZ.c)
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x1801FF46C (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180201A00 (-start@-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2.c)
 *     ??$str_printf@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBGZZ @ 0x1804FFBD0 (--$str_printf@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFre.c)
 *     ?AutomaticInvokeSkipped_ContainerOSGuest@StartWindowTelemetry@@SAXXZ @ 0x180500178 (-AutomaticInvokeSkipped_ContainerOSGuest@StartWindowTelemetry@@SAXXZ.c)
 *     ?AutomaticInvokeSkipped_LaunchingDevHome@StartWindowTelemetry@@SAXXZ @ 0x180500248 (-AutomaticInvokeSkipped_LaunchingDevHome@StartWindowTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=22
XamlLauncher *__fastcall XamlLauncher::XamlLauncher(XamlLauncher *this)
{
  unsigned int v2; // r9d
  XamlLauncher *v3; // rcx
  StartDocked *v4; // rcx
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF
  char *v7; // [rsp+68h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+18h] BYREF

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>((__int64)this);
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
  *((_QWORD *)this + 16) = 0LL;
  *(_OWORD *)((char *)this + 136) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  memset_0((char *)this + 232, 0, 0x68uLL);
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_OWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 92) = 256;
  *((_WORD *)this + 186) = 0;
  *((_BYTE *)this + 374) = 0;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 96) = 5;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  v7 = (char *)this + 496;
  winrt::impl::resume_apartment_context::resume_apartment_context((XamlLauncher *)((char *)this + 496));
  LODWORD(v7) = 0;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
              L"StartShownOnUpgrade",
              v2,
              (int *)&v7) < 0
    || !(_DWORD)v7 )
  {
    *((_BYTE *)this + 372) = 1;
  }
  if ( (unsigned __int8)anonymous_namespace_::IsTestDevice() )
  {
    StartWindowTelemetry::AutomaticInvokeSkipped_TestMachine();
    *((_BYTE *)this + 372) = 0;
  }
  if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() && (unsigned int)QueryWin32SubsystemHost() )
  {
    StartWindowTelemetry::AutomaticInvokeSkipped_ContainerOSGuest();
    *((_BYTE *)this + 372) = 0;
  }
  if ( !XamlLauncher::IsStartMenuPrelaunchEnabled(v3) )
  {
    StartWindowTelemetry::AutomaticInvokeSkipped_PrelaunchDisabled();
    *((_BYTE *)this + 372) = 0;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_OobeLaunchDevHome>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_OobeLaunchDevHome>::GetImpl'::`2'::impl) )
  {
    LODWORD(v7) = 0;
    wil::str_printf<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      L"%ws\\%ws",
      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\CloudExperienceHost\\Intent",
      L"developer");
    if ( SHRegGetDWORD(HKEY_CURRENT_USER, (const unsigned __int16 *)pv, L"Intent", (unsigned int *)&v7) >= 0
      && (_DWORD)v7 )
    {
      StartWindowTelemetry::AutomaticInvokeSkipped_LaunchingDevHome();
      *((_BYTE *)this + 372) = 0;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  if ( *((_BYTE *)this + 372) )
    *(_OWORD *)((char *)this + 136) = *(_OWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::start(
                                                   (char *)this + 128,
                                                   v6);
  XamlLauncher::s_pLauncher = this;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_43480734>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_43480734>::GetImpl'::`2'::impl) )
    StartDocked::PrecreateStartMenuConfigRegKey(v4);
  return this;
}
