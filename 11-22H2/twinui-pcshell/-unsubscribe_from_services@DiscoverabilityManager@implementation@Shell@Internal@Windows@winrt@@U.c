/*
 * XREFs of ?unsubscribe_from_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1806FCD80
 * Callers:
 *     <none>
 * Callees:
 *     ??0IViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@QEAA@$$T@Z @ 0x18008A8A4 (--0IViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@QEAA@$$T@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix@@@details@wil@@QEAA_NXZ @ 0x18025D664 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_UnHandledExce.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??4DeviceWatcher@Enumeration@Devices@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1803F9ED0 (--4DeviceWatcher@Enumeration@Devices@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Stop@?$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180408644 (-Stop@-$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@W.c)
 *     ?Added@?$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x1806F9D58 (-Added@-$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumera_ea_1806F9D58.c)
 *     ?Removed@?$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x1806FBF68 (-Removed@-$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Device.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        struct IServiceProvider *a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rcx
  signed int v4; // eax
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // rcx
  const char *v8; // r9
  _QWORD *v9; // rcx
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  if ( wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool((_QWORD *)this + 54) )
  {
    v13 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v3, (winrt::Windows::Foundation::IUnknown *)&v13);
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  }
  *((_DWORD *)this + 94) = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 120LL))(*((_QWORD *)this + 48));
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix>::GetImpl'::`2'::impl) )
  {
    v5 = SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 104));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x82,
        (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 232));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x83,
        (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
        (const char *)(unsigned int)v6);
    try
    {
      if ( wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool((_QWORD *)this + 49) )
      {
        winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Stop(v7);
        winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Added(
          (_QWORD *)this + 49,
          (_QWORD *)this + 45);
        winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Removed(
          (_QWORD *)this + 49,
          (_QWORD *)this + 46);
        winrt::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper::IViewWrapper(&v13);
        winrt::Windows::Devices::Enumeration::DeviceWatcher::operator=(
          (winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 392),
          (winrt::Windows::Foundation::IUnknown *)&v13);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v13);
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x8F,
        (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
        v8);
    }
  }
  else
  {
    if ( wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool((_QWORD *)this + 49) )
    {
      winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Stop(v9);
      winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Added(
        (_QWORD *)this + 49,
        (_QWORD *)this + 45);
      winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Removed(
        (_QWORD *)this + 49,
        (_QWORD *)this + 46);
      winrt::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper::IViewWrapper(&v13);
      winrt::Windows::Devices::Enumeration::DeviceWatcher::operator=(
        (winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 392),
        (winrt::Windows::Foundation::IUnknown *)&v13);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v13);
    }
    v10 = SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 104));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A,
        (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
        (const char *)(unsigned int)v10);
    v11 = SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 232));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9B,
        (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
        (const char *)(unsigned int)v11);
  }
}
