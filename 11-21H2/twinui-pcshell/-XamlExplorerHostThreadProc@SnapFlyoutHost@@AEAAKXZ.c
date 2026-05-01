/*
 * XREFs of ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805B11AC
 * Callers:
 *     _lambda_bf52ea5dd6a3ace185866e96e136c162_::_lambda_invoker_cdecl_ @ 0x1805AD470 (_lambda_bf52ea5dd6a3ace185866e96e136c162_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$call@P6A?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@23456@@Z@?$factory_cache_entry@UWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@UIWindowsXamlManagerStatics@23456@@impl@winrt@@QEAA?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@2@$$QEAP6A?AU345672@AEBUIWindowsXamlManagerStatics@45672@@Z@Z @ 0x180067268 (--$call@P6A-AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@2.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?InitializeForCurrentThread@?$consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@3@XZ @ 0x180176498 (-InitializeForCurrentThread@-$consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindo.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$call@P6A?AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@234@@Z@?$factory_cache_entry@UDispatcherQueue@System@Windows@winrt@@UIDispatcherQueueStatics@234@@impl@winrt@@QEAA?AUDispatcherQueue@System@Windows@2@$$QEAP6A?AU3452@AEBUIDispatcherQueueStatics@452@@Z@Z @ 0x1805ADC00 (--$call@P6A-AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@234@@Z@-$factory.c)
 *     ?GetForCurrentThread@?$consume_Windows_System_IDispatcherQueueStatics@UIDispatcherQueueStatics@System@Windows@winrt@@@impl@winrt@@QEBA?AUDispatcherQueue@System@Windows@3@XZ @ 0x1805AF308 (-GetForCurrentThread@-$consume_Windows_System_IDispatcherQueueStatics@UIDispatcherQueueStatics@S.c)
 *     ?SnapFlyout_ThreadFailed@SnapFlyoutTelemetry@@SAXXZ @ 0x1805B082C (-SnapFlyout_ThreadFailed@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?SnapFlyout_ThreadReady@SnapFlyoutTelemetry@@SAXXZ @ 0x1805B0894 (-SnapFlyout_ThreadReady@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?SnapFlyout_ThreadShutdown@SnapFlyoutTelemetry@@SAXXZ @ 0x1805B08FC (-SnapFlyout_ThreadShutdown@SnapFlyoutTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SnapFlyoutHost::XamlExplorerHostThreadProc(SnapFlyoutHost *this)
{
  HANDLE CurrentThread; // rax
  HRESULT v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rcx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  const char *v7; // r9
  void *v8; // rdx
  __int64 v9; // rcx
  void *v11; // rdx
  __int64 (__fastcall *v12)(__int64, __int64); // [rsp+30h] [rbp-30h] BYREF
  __int64 (__fastcall *v13)(__int64, __int64); // [rsp+38h] [rbp-28h] BYREF
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp-20h] BYREF
  HANDLE pHandles[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  DWORD dwindex; // [rsp+88h] [rbp+28h] BYREF
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF
  RTL_SRWLOCK *v19; // [rsp+98h] [rbp+38h] BYREF

  CurrentThread = GetCurrentThread();
  v3 = SetThreadDescription(CurrentThread, L"SnapFlyoutHost Thread");
  v4 = retaddr;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
      (const char *)(unsigned int)v3);
  pHandles[1] = &qword_1807B43F8;
  _InterlockedIncrement64(&qword_1807B43F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics> )
  {
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics<winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::InitializeForCurrentThread(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>,
      &v18);
    _InterlockedDecrement64(&qword_1807B43F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B43F8);
    v12 = _lambda_55039be7b7b77d56f41928124535a284_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::call<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager (*)(winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v4,
      (__int64)&v18,
      (void (__fastcall **)(__int64, __int64 *))&v12);
  }
  if ( v18 )
  {
    wil::AcquireSRWLockExclusive(&v14, (RTL_SRWLOCK *)this + 18);
    winrt::Windows::Foundation::IUnknown::operator=(
      (SnapFlyoutHost *)((char *)this + 112),
      (winrt::Windows::Foundation::IUnknown *)&v18);
    pHandles[2] = &qword_1807B5D68;
    _InterlockedIncrement64(&qword_1807B5D68);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics> )
    {
      winrt::impl::consume_Windows_System_IDispatcherQueueStatics<winrt::Windows::System::IDispatcherQueueStatics>::GetForCurrentThread(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics>,
        &v19);
      _InterlockedDecrement64(&qword_1807B5D68);
    }
    else
    {
      _InterlockedDecrement64(&qword_1807B5D68);
      v13 = _lambda_871e5350aad6bf1182fd63b884b2a598_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics>::call<winrt::Windows::System::DispatcherQueue (*)(winrt::Windows::System::IDispatcherQueueStatics const &)>(
        v6,
        (__int64)&v19,
        (void (__fastcall **)(__int64, __int64 *))&v13);
    }
    winrt::Windows::Foundation::IUnknown::operator=(
      (SnapFlyoutHost *)((char *)this + 104),
      (winrt::Windows::Foundation::IUnknown *)&v19);
    if ( v19 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
    if ( !*((_QWORD *)this + 13) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x199,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v7);
    pHandles[0] = *((HANDLE *)this + 10);
    SnapFlyoutTelemetry::SnapFlyout_ThreadReady((__int64)retaddr);
    wil::details::SetEvent(*((wil::details **)this + 9), v8);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    dwindex = 0;
    CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, 1u, pHandles, &dwindex);
    *((_DWORD *)this + 34) = 0;
    SnapFlyoutTelemetry::SnapFlyout_ThreadShutdown(v9);
    return dwindex;
  }
  else
  {
    SnapFlyoutTelemetry::SnapFlyout_ThreadFailed(v5);
    wil::AcquireSRWLockExclusive(&v19, (RTL_SRWLOCK *)this + 18);
    *((_DWORD *)this + 34) = 0;
    wil::details::SetEvent(*((wil::details **)this + 9), v11);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v19);
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    return 0LL;
  }
}
