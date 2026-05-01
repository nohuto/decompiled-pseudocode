/*
 * XREFs of ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@KAEBURect@Foundation@56@@Z @ 0x18002FDCC
 * Callers:
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_returncode_policy@wil@@@wil@@@winrt@@YA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@0@AEAIAEBURect@Foundation@50@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18002FD14 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$as@UIDesktopWindowXamlSourceNative@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIDesktopWindowXamlSourceNative@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180030134 (--$as@UIDesktopWindowXamlSourceNative@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@wi.c)
 *     ??$call@P6A?AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@?$factory_cache_entry@UWindow@Xaml@UI@Windows@winrt@@UIWindowStatics@2345@@impl@winrt@@QEAA?AUWindow@Xaml@UI@Windows@2@$$QEAP6A?AU34562@AEBUIWindowStatics@4562@@Z@Z @ 0x180067148 (--$call@P6A-AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@-$factory_cache_entry@UWi.c)
 *     ??$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIWindowPrivate@Xaml@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F2A5C (--$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@i.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800F3F24 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Current@?$consume_Windows_UI_Xaml_IWindowStatics@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUWindow@Xaml@UI@Windows@3@XZ @ 0x180170348 (-Current@-$consume_Windows_UI_Xaml_IWindowStatics@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@w.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=10
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlExplorerHostWindow(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *this,
        int a2,
        const struct winrt::Windows::Foundation::Rect *a3)
{
  _QWORD *v6; // r12
  HWND *v7; // r15
  const char *v8; // r9
  int v9; // esi
  int cy; // r14d
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  void *v25; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+98h] [rbp-68h] BYREF
  int *v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  __int64 *v29; // [rsp+B0h] [rbp-50h]
  WNDCLASSW WndClass; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  int v32; // [rsp+168h] [rbp+68h] BYREF

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  v6 = (_QWORD *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  v7 = (HWND *)((char *)this + 48);
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = GetCurrentThreadId();
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
  WndClass.lpszClassName = L"XamlExplorerHostIslandWindow";
  WndClass.style = 3;
  WndClass.lpfnWndProc = (WNDPROC)winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::WndProc;
  RegisterClassW(&WndClass);
  if ( *((_QWORD *)this + 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5A,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostislandwindow.cpp",
      v8);
  v9 = (int)*((float *)a3 + 2);
  cy = (int)*((float *)a3 + 3);
  CreateWindowInBand(
    2097288LL,
    WndClass.lpszClassName,
    &LocaleName,
    0x80000000LL,
    (int)*(float *)a3,
    (int)*((float *)a3 + 1),
    v9,
    cy,
    0LL,
    0LL,
    WndClass.hInstance,
    this,
    a2);
  v12 = *((_QWORD *)this + 4);
  if ( !v12 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x70,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostislandwindow.cpp",
      (const char *)retaddr);
  v32 = 1;
  v26 = 13;
  v27 = &v32;
  v28 = 4;
  SetWindowCompositionAttribute(v12, &v26, v11, retaddr);
  SetPropW(*((HWND *)this + 4), L"NonRudeHWND", HANDLE_FLAG_INHERIT);
  SetPropW(*((HWND *)this + 4), L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT);
  v13 = winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *)&v22);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 40, v13);
  if ( v22 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
  winrt::impl::as<IDesktopWindowXamlSourceNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v24,
    *v6);
  v14 = v24;
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 24LL))(v24, *((_QWORD *)this + 4));
  if ( v15 < 0 )
    winrt::throw_hresult((unsigned int)v15);
  v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 32LL))(v14, (char *)this + 48);
  if ( v16 < 0 )
    winrt::throw_hresult((unsigned int)v16);
  v29 = &qword_1807B43D8;
  _InterlockedIncrement64(&qword_1807B43D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics> )
  {
    winrt::impl::consume_Windows_UI_Xaml_IWindowStatics<winrt::Windows::UI::Xaml::IWindowStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics>,
      &v21);
    _InterlockedDecrement64(&qword_1807B43D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B43D8);
    v25 = &_lambda_43d092c5da9a5068682fa4571a07bb24_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics>::call<winrt::Windows::UI::Xaml::Window (*)(winrt::Windows::UI::Xaml::IWindowStatics const &)>(
      v17,
      &v21,
      &v25);
  }
  winrt::impl::as<winrt::Windows::UI::Xaml::IWindowPrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v23,
    v21);
  if ( v21 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  LOBYTE(v18) = 1;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 56LL))(v23, v18);
  if ( v19 < 0 )
    winrt::throw_hresult((unsigned int)v19);
  SetWindowPos(*v7, 0LL, 0, 0, v9, cy, 0x56u);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v24);
  return this;
}
