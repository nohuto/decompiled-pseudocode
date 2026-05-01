/*
 * XREFs of ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18006484C
 * Callers:
 *     ??0?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18006446C (--0-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@.c)
 * Callees:
 *     ?CreateDataModel@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@3@XZ @ 0x180064790 (-CreateDataModel@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvi.c)
 *     ?CreateManager@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTaskGroupManager@TaskGroups@Shell@Internal@Windows@3@AEBUTaskGroupDataModel@56783@AEBUITaskGroupHost@56783@@Z @ 0x1800647E4 (-CreateManager@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvide.c)
 *     ??$call@P6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProviderStatics@23456@@Z@?$factory_cache_entry@UTaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupProviderStatics@23456@@impl@winrt@@QEAA?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@2@$$QEAP6A?AU345672@AEBUITaskGroupProviderStatics@45672@@Z@Z @ 0x180067C38 (--$call@P6A-AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProvider.c)
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x18009D378 (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 *     ??0?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsConfiguration@@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@QEAA@XZ @ 0x1800CEF44 (--0-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uim.c)
 *     ??$as@UIUnknown@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUnknown@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800CF070 (--$as@UIUnknown@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F793C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?GetTaskGroupProvider@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics@UITaskGroupProviderStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@3@XZ @ 0x180179238 (-GetTaskGroupProvider@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics@UITa.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801895D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=30
winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v9; // [rsp+28h] [rbp-49h] BYREF
  char *v10; // [rsp+30h] [rbp-41h] BYREF
  __int64 v11; // [rsp+38h] [rbp-39h] BYREF
  __int64 v12; // [rsp+40h] [rbp-31h] BYREF
  __int128 *v13; // [rsp+48h] [rbp-29h] BYREF
  int v14; // [rsp+50h] [rbp-21h]
  winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *v15; // [rsp+58h] [rbp-19h]
  __int64 *v16; // [rsp+60h] [rbp-11h]
  __int128 v17; // [rsp+68h] [rbp-9h] BYREF
  __int64 v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+80h] [rbp+Fh]
  __int128 v20; // [rsp+88h] [rbp+17h]
  _BYTE v21[8]; // [rsp+98h] [rbp+27h] BYREF
  int v22; // [rsp+A0h] [rbp+2Fh]

  v15 = this;
  winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,ITaskGroupsConfiguration,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,ITaskGroupsConfiguration,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>();
  *(_QWORD *)this = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,ITaskGroupsConfiguration,void>'};
  *((_QWORD *)this + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>'};
  *((_QWORD *)this + 5) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 6) = &winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,ITaskGroupsConfiguration,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 7) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 9) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable';
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  v2 = (_QWORD *)((char *)this + 456);
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  LOBYTE(v3) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    v4,
    v3);
  v16 = &qword_1807B42D8;
  _InterlockedIncrement64(&qword_1807B42D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::GetTaskGroupProvider(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>,
      &v9);
    _InterlockedDecrement64(&qword_1807B42D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B42D8);
    v10 = (char *)&_lambda_34d03d9a202a7fc782dd640c0005da4a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::call<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics const &)>(
      v5,
      &v9,
      &v10);
  }
  v6 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider>::CreateDataModel(
         &v9,
         &v11);
  winrt::Windows::Foundation::IUnknown::operator=(v2, v6);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  v10 = (char *)this + 24;
  v7 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider>::CreateManager(
         &v9,
         &v12,
         v2,
         &v10);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 464, v7);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  v17 = winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>;
  v18 = 0LL;
  v19 = 0;
  v20 = xmmword_180699D90;
  winrt::impl::as<IUnknown,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(v21, *v2);
  v22 = 0;
  v13 = &v17;
  v14 = 2;
  winrt::immersive_shell_component::register_service_information((char *)this + 40, &v13);
  `eh vector destructor iterator'(
    &v17,
    0x20uLL,
    2uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
  return this;
}
