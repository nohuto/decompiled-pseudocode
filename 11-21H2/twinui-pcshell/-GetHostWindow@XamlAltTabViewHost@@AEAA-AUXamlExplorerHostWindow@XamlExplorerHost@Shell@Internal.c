/*
 * XREFs of ?GetHostWindow@XamlAltTabViewHost@@AEAA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x1805FA7BC
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1805FBBA0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?WindowTitle@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@@Z @ 0x180014128 (-WindowTitle@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 *     ?CreateInBand@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@3@IAEBURect@Foundation@83@@Z @ 0x180015FDC (-CreateInBand@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics@U.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041CDFC (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18041E6D8 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBURect@Foundation@Windows@3@@Z @ 0x18058B20C (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ??1GetHostWindow@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1805F9728 (--1GetHostWindow@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@GetHostWindow@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1805FC5C4 (-StartActivity@GetHostWindow@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Foundation::IUnknown *__fastcall XamlAltTabViewHost::GetHostWindow(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3)
{
  __int64 **v6; // rsi
  bool v7; // bl
  int v8; // eax
  int v9; // edx
  winrt::Windows::Foundation::IUnknown *v10; // rax
  const char *v11; // r9
  __int64 v12; // r8
  int v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v15[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v16; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v17[40]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR Buffer[264]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+2F8h]

  *(_QWORD *)v14 = 0LL;
  v6 = (__int64 **)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 312LL);
  v7 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v6, v14) == 0;
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"GetHostWindow");
  v17[0] = &XamlSwitcherTelemetry::GetHostWindow::`vftable';
  XamlSwitcherTelemetry::GetHostWindow::StartActivity((XamlSwitcherTelemetry::GetHostWindow *)v17, v7);
  v16 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 88LL))(a3, &v16);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x229,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v8,
      v14[0]);
  *(float *)v15 = (float)(int)v16;
  *((float *)v15 + 1) = (float)SDWORD1(v16);
  *((float *)v15 + 2) = (float)(DWORD2(v16) - v16);
  *((float *)v15 + 3) = (float)(HIDWORD(v16) - DWORD1(v16));
  if ( *v6 )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      v6,
      v15);
  }
  else
  {
    v10 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics>::CreateInBand(
                                                    (__int64 **)(a1 + 168),
                                                    v14,
                                                    0x10u,
                                                    v15);
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)v6, v10);
    if ( *(_QWORD *)v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v14);
    if ( !LoadStringW(&_ImageBase, 0x5E9u, Buffer, 260) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x235,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
        v11);
    v12 = -1LL;
    do
      ++v12;
    while ( Buffer[v12] );
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v15, Buffer, v12);
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::WindowTitle(
      v6,
      v15);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v17, v9);
  *(_QWORD *)a2 = *v6;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  XamlSwitcherTelemetry::GetHostWindow::~GetHostWindow((XamlSwitcherTelemetry::GetHostWindow *)v17);
  return a2;
}
