/*
 * XREFs of ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180089F50
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18008C604 (--0-$heap_implements@V-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shel.c)
 * Callees:
 *     ??0?$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UITaskGroupHost@34567@UITaskGroupDataModelSingleton@34567@UITaskGroupsComponent@DesktopTaskGroups@4567@UIApplicationViewChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@winrt@@QEAA@XZ @ 0x180089228 (--0-$implements@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Uim.c)
 *     ?CreateDataModel@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18008A23C (-CreateDataModel@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvi.c)
 *     ??$as@UIUnknown@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUnknown@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18008A984 (--$as@UIUnknown@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@.c)
 *     ?CreateManager@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@3@AEBUITaskGroupHost@56783@@Z @ 0x18008AAD4 (-CreateManager@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider@UITaskGroupProvide.c)
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x1800BD88C (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$call@P6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProviderStatics@23456@@Z@?$factory_cache_entry@UTaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupProviderStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@2@AEBUITaskGroupProviderStatics@45672@@Z@Z @ 0x18019F640 (--$call@P6A-AUITaskGroupProvider@TaskGroups@Shell@Internal@Windows@winrt@@AEBUITaskGroupProvider.c)
 *     ?GetTaskGroupProvider@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics@UITaskGroupProviderStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B2338 (-GetTaskGroupProvider@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics@UITa.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=26
winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-69h] BYREF
  __int64 (__fastcall *v8)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics *); // [rsp+30h] [rbp-61h] BYREF
  __int64 v9; // [rsp+38h] [rbp-59h] BYREF
  __int64 v10; // [rsp+40h] [rbp-51h] BYREF
  __int128 *v11; // [rsp+48h] [rbp-49h] BYREF
  int v12; // [rsp+50h] [rbp-41h]
  winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *v13; // [rsp+58h] [rbp-39h]
  __int64 *v14; // [rsp+60h] [rbp-31h]
  __int128 v15; // [rsp+68h] [rbp-29h] BYREF
  __int64 v16; // [rsp+78h] [rbp-19h]
  int v17; // [rsp+80h] [rbp-11h]
  __int128 v18; // [rsp+88h] [rbp-9h]
  _BYTE v19[8]; // [rsp+98h] [rbp+7h] BYREF
  int v20; // [rsp+A0h] [rbp+Fh]
  GUID v21; // [rsp+A8h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+27h]
  int v23; // [rsp+C0h] [rbp+2Fh]

  v13 = this;
  winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>(this);
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>'};
  *((_QWORD *)this + 5) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 6) = &winrt::implements<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelSingleton,winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IApplicationViewChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
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
  v3 = (_QWORD *)((char *)this + 456);
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
  v14 = &qword_18098E5F8;
  _InterlockedIncrement64(&qword_18098E5F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProviderStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::GetTaskGroupProvider(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>,
      &v7);
    _InterlockedDecrement64(&qword_18098E5F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E5F8);
    v8 = _lambda_34d03d9a202a7fc782dd640c0005da4a_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupProvider,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics>::call<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider (*)(winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics const &)>(
      v2,
      &v7,
      &v8);
  }
  v4 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider>::CreateDataModel(
         &v7,
         &v9);
  winrt::Windows::Foundation::IUnknown::operator=(v3, v4);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  v8 = (__int64 (__fastcall *)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProviderStatics *))((char *)this + 16);
  v5 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupProvider<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupProvider>::CreateManager(
         &v7,
         &v10,
         v3,
         &v8);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 464, v5);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  v15 = winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>;
  v16 = 0LL;
  v17 = 0;
  v18 = xmmword_180834990;
  winrt::impl::as<IUnknown,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(v19, *v3);
  v20 = 0;
  v21 = GUID_716be2a0_d1cd_4fdb_9528_785c2866c6a5;
  v22 = 0LL;
  v23 = 0;
  v11 = &v15;
  v12 = 3;
  winrt::immersive_shell_component::register_service_information((char *)this + 40, &v11);
  `eh vector destructor iterator'(
    &v15,
    0x20uLL,
    3uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  return this;
}
