/*
 * XREFs of ?GetHostWindow@XamlAltTabViewHost@@AEAA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x180763C44
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180764E70 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?WindowTitle@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800730FC (-WindowTitle@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@@Z @ 0x18007FBD4 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AE.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1802E8D84 (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ??1GetHostWindow@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802EC506 (--1GetHostWindow@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802ECA20 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??$?0_N@GetHostWindow@XamlSwitcherTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEA_N@Z @ 0x180761920 (--$-0_N@GetHostWindow@XamlSwitcherTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@$$QEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall XamlAltTabViewHost::GetHostWindow(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3)
{
  __int64 **v5; // rbx
  char v6; // dl
  int v7; // eax
  int v8; // eax
  int v9; // edx
  const char *v10; // r9
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v15[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v16; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+78h] [rbp-88h]
  __int64 v20[40]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR Buffer[264]; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+2F8h]

  v14[0] = 0LL;
  v5 = (__int64 **)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 312LL);
  LOBYTE(v13) = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v5, v14) == 0;
  XamlSwitcherTelemetry::GetHostWindow::GetHostWindow((__int64)v20, v6, (unsigned __int8 *)&v13);
  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 88LL))(a3, &v17);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26F,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v7,
      v13);
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 72LL))(a3, &v18);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x274,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
      (const char *)(unsigned int)v8,
      v13);
  LODWORD(v17) = v18;
  DWORD2(v17) = v19;
  *(float *)v15 = (float)v18;
  *((float *)v15 + 1) = (float)SDWORD1(v17);
  *((float *)v15 + 2) = (float)(v19 - v18);
  *((float *)v15 + 3) = (float)(HIDWORD(v17) - DWORD1(v17));
  if ( *v5 )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
      v5,
      v15);
  }
  else
  {
    v16 = 16;
    winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,unsigned int &,winrt::Windows::Foundation::Rect const &>(
      v14,
      &v16,
      (const struct winrt::Windows::Foundation::Rect *)v15);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)v5,
      (winrt::Windows::Foundation::IUnknown *)v14);
    if ( v14[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v14);
    if ( !LoadStringW(&_ImageBase, 0x5E9u, Buffer, 260) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x283,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
        v10);
    v11 = -1LL;
    do
      ++v11;
    while ( Buffer[v11] );
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v15, Buffer, v11);
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::WindowTitle(
      v5,
      v15);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v20, v9);
  *(_QWORD *)a2 = *v5;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  XamlSwitcherTelemetry::GetHostWindow::~GetHostWindow((XamlSwitcherTelemetry::GetHostWindow *)v20);
  return a2;
}
