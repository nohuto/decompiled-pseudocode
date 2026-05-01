/*
 * XREFs of ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x180656FC8
 * Callers:
 *     _lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_ @ 0x1806562D0 (_lambda_7c27b082a2d594abdbf5dd9e5359180a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$call@P6A?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@23456@@Z@?$factory_cache_entry@UWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@UIWindowsXamlManagerStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@2@AEBUIWindowsXamlManagerStatics@45672@@Z@Z @ 0x18004BA48 (--$call@P6A-AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@2.c)
 *     ?InitializeForCurrentThread@?$consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006FE48 (-InitializeForCurrentThread@-$consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindo.c)
 *     ?Current@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B1790 (-Current@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics@UIXamlApplica.c)
 *     ??$as@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800B1804 (--$as@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnkn.c)
 *     ??$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x1800B44A4 (--$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$call@P6A?AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@234@@Z@?$factory_cache_entry@UDispatcherQueue@System@Windows@winrt@@UIDispatcherQueueStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueue@System@Windows@2@AEBUIDispatcherQueueStatics@452@@Z@Z @ 0x180656554 (--$call@P6A-AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@234@@Z@-$factory.c)
 *     ?GetForCurrentThread@?$consume_Windows_System_IDispatcherQueueStatics@UIDispatcherQueueStatics@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180656A50 (-GetForCurrentThread@-$consume_Windows_System_IDispatcherQueueStatics@UIDispatcherQueueStatics@S.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TouchEdgeGripperHost::XamlHostThreadProc(TouchEdgeGripperHost *this)
{
  _DWORD *v2; // rcx
  HANDLE CurrentThread; // rax
  HRESULT v4; // eax
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  void *v7; // rdx
  __int64 v8; // rcx
  const char *v9; // r9
  _DWORD *v10; // rcx
  DWORD v11; // edi
  TouchEdgeGripperHost *v13; // rbx
  void *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DWORD dwindex; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-98h] BYREF
  __int64 v20; // [rsp+48h] [rbp-90h] BYREF
  __int64 v21; // [rsp+50h] [rbp-88h] BYREF
  __int64 v22; // [rsp+58h] [rbp-80h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, void *, _QWORD **); // [rsp+60h] [rbp-78h] BYREF
  __int64 v24; // [rsp+68h] [rbp-70h] BYREF
  __int64 v25; // [rsp+70h] [rbp-68h] BYREF
  const struct winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics *(__fastcall *v26)(const struct winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics *, __int64); // [rsp+78h] [rbp-60h] BYREF
  const struct winrt::Windows::System::IDispatcherQueueStatics *(__fastcall *v27)(const struct winrt::Windows::System::IDispatcherQueueStatics *, __int64); // [rsp+80h] [rbp-58h] BYREF
  HANDLE pHandles; // [rsp+88h] [rbp-50h] BYREF
  TouchEdgeGripperHost *v29; // [rsp+90h] [rbp-48h]
  __int64 *v30; // [rsp+98h] [rbp-40h]
  __int64 *v31; // [rsp+A0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v29 = this;
  v2 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_18087179F, 0LL, 0LL, 2u, &v32);
  CurrentThread = GetCurrentThread();
  v4 = SetThreadDescription(CurrentThread, L"TouchEdgeGripperHost Thread");
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA8,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
      (const char *)(unsigned int)v4);
  try
  {
    dwindex = 0;
    v25 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication>(&v23);
    winrt::impl::as<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v22,
      v23);
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::Current(
      &v22,
      &v24);
    if ( v22 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
    if ( v23 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&v25,
      (winrt::Windows::Foundation::IUnknown *)&v24);
    if ( v24 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    v30 = &qword_18098E708;
    _InterlockedIncrement64(&qword_18098E708);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics> )
    {
      winrt::impl::consume_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics<winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::InitializeForCurrentThread(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>,
        &v18);
      _InterlockedDecrement64(&qword_18098E708);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E708);
      v26 = _lambda_55039be7b7b77d56f41928124535a284_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::call<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager (*)(winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics const &)>(
        v5,
        (__int64)&v18,
        (void (__fastcall **)(__int64, __int64 *))&v26);
    }
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&v21,
      (winrt::Windows::Foundation::IUnknown *)&v18);
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    v31 = &qword_180990D68;
    _InterlockedIncrement64(&qword_180990D68);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics> )
    {
      winrt::impl::consume_Windows_System_IDispatcherQueueStatics<winrt::Windows::System::IDispatcherQueueStatics>::GetForCurrentThread(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics>,
        &v19);
      _InterlockedDecrement64(&qword_180990D68);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990D68);
      v27 = _lambda_871e5350aad6bf1182fd63b884b2a598_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::System::DispatcherQueue,winrt::Windows::System::IDispatcherQueueStatics>::call<winrt::Windows::System::DispatcherQueue (*)(winrt::Windows::System::IDispatcherQueueStatics const &)>(
        v6,
        (__int64)&v19,
        (void (__fastcall **)(__int64, __int64 *))&v27);
    }
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&v20,
      (winrt::Windows::Foundation::IUnknown *)&v19);
    if ( v19 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
    AcquireSRWLockExclusive((PSRWLOCK)this + 29);
    winrt::Windows::Foundation::IUnknown::operator=(
      (TouchEdgeGripperHost *)((char *)this + 80),
      (winrt::Windows::Foundation::IUnknown *)&v21);
    winrt::Windows::Foundation::IUnknown::operator=(
      (TouchEdgeGripperHost *)((char *)this + 72),
      (winrt::Windows::Foundation::IUnknown *)&v20);
    pHandles = (HANDLE)*((_QWORD *)this + 5);
    wil::details::SetEvent(*((wil::details **)this + 4), v7);
    if ( this != (TouchEdgeGripperHost *)-232LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 29);
    CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xC7,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
      v9);
    v13 = v29;
    *((_BYTE *)v29 + 24) = 0;
    AcquireSRWLockExclusive((PSRWLOCK)v13 + 29);
    wil::details::SetEvent(*((wil::details **)v13 + 4), v14);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)v13 + 5,
      0LL);
    if ( v13 != (TouchEdgeGripperHost *)-232LL )
      ReleaseSRWLockExclusive((PSRWLOCK)v13 + 29);
    MicrosoftTelemetryAssertTriggeredNoArgs(v16, v15);
  }
  v10 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                    v8,
                    (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v10, (unsigned __int8 *)dword_18087177C, 0LL, 0LL, 2u, &v32);
  v11 = dwindex;
  if ( v20 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  if ( v21 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  if ( v25 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
  return v11;
}
