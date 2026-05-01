/*
 * XREFs of ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ @ 0x18004B7E4
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B610 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x18020F120 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@P6A?AUXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEBUIXamlApplicationStatics@23456@@Z@?$factory_cache_entry@UXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUXamlApplication@XamlExplorerHost@Shell@Internal@Windows@2@AEBUIXamlApplicationStatics@45672@@Z@Z @ 0x18004B8E4 (--$call@P6A-AUXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEBUIXamlApplicatio.c)
 *     ??$call@P6A?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@23456@@Z@?$factory_cache_entry@UWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@UIWindowsXamlManagerStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@2@AEBUIWindowsXamlManagerStatics@45672@@Z@Z @ 0x18004BA48 (--$call@P6A-AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@2.c)
 *     ?InitializeForCurrentThread@?$consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006FE48 (-InitializeForCurrentThread@-$consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindo.c)
 *     ?Current@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B1790 (-Current@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics@UIXamlApplica.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMultitaskingViewManager::EnsureXamlCoreForThreadIfNeeded(CMultitaskingViewManager *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF
  __int64 (__fastcall *v7)(const struct winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics *); // [rsp+70h] [rbp+18h] BYREF
  __int64 (__fastcall *v8)(const struct winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics *); // [rsp+78h] [rbp+20h] BYREF

  v2 = (char *)this + 456;
  if ( !*((_QWORD *)this + 57) )
  {
    *((_BYTE *)this + 480) = 1;
    _InterlockedIncrement64(&qword_18098EA28);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics> )
    {
      winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::Current(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>,
        &v6);
      _InterlockedDecrement64(&qword_18098EA28);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098EA28);
      v7 = _lambda_cb771e4f68d6b51119928ba451ead061_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::call<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication (*)(winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics const &)>(
        this,
        &v6,
        &v7);
    }
    _InterlockedIncrement64(&qword_18098E708);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics> )
    {
      winrt::impl::consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics<winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::InitializeForCurrentThread(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>,
        &v5);
      _InterlockedDecrement64(&qword_18098E708);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E708);
      v8 = _lambda_55039be7b7b77d56f41928124535a284_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::call<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager (*)(winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics const &)>(
        v3,
        &v5,
        &v8);
    }
    winrt::Windows::Foundation::IUnknown::operator=(v2, &v5);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    *((_BYTE *)this + 480) = 0;
  }
  return 0LL;
}
