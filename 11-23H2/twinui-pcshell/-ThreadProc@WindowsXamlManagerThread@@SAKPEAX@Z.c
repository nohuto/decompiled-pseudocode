/*
 * XREFs of ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x18002E800
 * Callers:
 *     <none>
 * Callees:
 *     ?RunEventLoop@?$consume_Microsoft_UI_Dispatching_IDispatcherQueue3@UDispatcherQueue@Dispatching@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002E210 (-RunEventLoop@-$consume_Microsoft_UI_Dispatching_IDispatcherQueue3@UDispatcherQueue@Dispatching@.c)
 *     ?DispatcherQueue@?$consume_Microsoft_UI_Dispatching_IDispatcherQueueController@UIDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002E8EC (-DispatcherQueue@-$consume_Microsoft_UI_Dispatching_IDispatcherQueueController@UIDispatcherQueue.c)
 *     ??$call@P6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@AEBUIDispatcherQueueControllerStatics@2345@@Z@?$factory_cache_entry@UDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@UIDispatcherQueueControllerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@2@AEBUIDispatcherQueueControllerStatics@4562@@Z@Z @ 0x18002E960 (--$call@P6A-AUDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@AEBUIDispatcherQueueCont.c)
 *     ??$call@P6A?AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@AEBUIWindowsXamlManagerStatics@23456@@Z@?$factory_cache_entry@UWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@UIWindowsXamlManagerStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@2@AEBUIWindowsXamlManagerStatics@45672@@Z@Z @ 0x18002EAFC (--$call@P6A-AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@AEBUIWindowsXamlManagerStatics.c)
 *     ?WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x18002EC98 (-WinAppSDKCohabitation_RegisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     ?CreateOnCurrentThread@?$consume_Microsoft_UI_Dispatching_IDispatcherQueueControllerStatics@UIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006FA18 (-CreateOnCurrentThread@-$consume_Microsoft_UI_Dispatching_IDispatcherQueueControllerStatics@UIDi.c)
 *     ?InitializeForCurrentThread@?$consume_Microsoft_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006FBF8 (-InitializeForCurrentThread@-$consume_Microsoft_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWin.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x1801106AC (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     CoInitializeEx_0 @ 0x1801C7E18 (CoInitializeEx_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?ShutdownQueue@?$consume_Microsoft_UI_Dispatching_IDispatcherQueueController2@UDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x1804FD964 (-ShutdownQueue@-$consume_Microsoft_UI_Dispatching_IDispatcherQueueController2@UDispatcherQueueCo.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowsXamlManagerThread::ThreadProc(PVOID Parameter)
{
  HRESULT v1; // eax
  WinUICohabitationFunctions *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall *v8)(const struct winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics *); // [rsp+28h] [rbp-38h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF

  v1 = CoInitializeEx_0(0LL, 2u);
  if ( v1 < 0 )
    winrt::throw_hresult((unsigned int)v1);
  v2 = WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_RegisterWASDKThreadWrapper(v2);
  v9[1] = &qword_18098E788;
  _InterlockedIncrement64(&qword_18098E788);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics> )
  {
    winrt::impl::consume_Microsoft_UI_Dispatching_IDispatcherQueueControllerStatics<winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>::CreateOnCurrentThread(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>,
      &v10);
    _InterlockedDecrement64(&qword_18098E788);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E788);
    v8 = _lambda_c249d9825049da1bbe9da1573b280fea_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>::call<winrt::Microsoft::UI::Dispatching::DispatcherQueueController (*)(winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics const &)>(
      v3,
      &v10,
      &v8);
  }
  v9[2] = &qword_18098E7C8;
  _InterlockedIncrement64(&qword_18098E7C8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics> )
  {
    winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IWindowsXamlManagerStatics<winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::InitializeForCurrentThread(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>,
      &v11);
    _InterlockedDecrement64(&qword_18098E7C8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E7C8);
    v9[0] = _lambda_36ad6dd647f5d7183876adc9415cc816_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::call<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager (*)(winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics const &)>(
      v4,
      &v11,
      v9);
  }
  v5 = (__int64 *)winrt::impl::consume_Microsoft_UI_Dispatching_IDispatcherQueueController<winrt::Microsoft::UI::Dispatching::IDispatcherQueueController>::DispatcherQueue(
                    &v10,
                    &v7);
  winrt::impl::consume_Microsoft_UI_Dispatching_IDispatcherQueue3<winrt::Microsoft::UI::Dispatching::DispatcherQueue>::RunEventLoop(v5);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  winrt::impl::consume_Microsoft_UI_Dispatching_IDispatcherQueueController2<winrt::Microsoft::UI::Dispatching::DispatcherQueueController>::ShutdownQueue(&v10);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return 0LL;
}
