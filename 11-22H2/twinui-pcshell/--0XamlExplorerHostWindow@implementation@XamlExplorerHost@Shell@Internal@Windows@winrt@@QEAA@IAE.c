/*
 * XREFs of ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x18007FE54
 * Callers:
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@@Z @ 0x18007FBD4 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AE.c)
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAI@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@0@Z @ 0x1804F96A4 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Wind_ea_1804F96A4.c)
 * Callees:
 *     ?WinUICohabitation_DesktopWindowXamlSourceNative_get_WindowHandleWrapper@WinUICohabitationFunctions@@QEBAXPEAUIUnknown@@PEAPEAUHWND__@@@Z @ 0x180081510 (-WinUICohabitation_DesktopWindowXamlSourceNative_get_WindowHandleWrapper@WinUICohabitationFuncti.c)
 *     ?WinUICohabitation_DesktopWindowXamlSourceNative_AttachToWindowWrapper@WinUICohabitationFunctions@@QEBAXPEAUIUnknown@@PEAUHWND__@@@Z @ 0x180081570 (-WinUICohabitation_DesktopWindowXamlSourceNative_AttachToWindowWrapper@WinUICohabitationFunction.c)
 *     ??$call@P6A?AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@?$factory_cache_entry@UWindow@Xaml@UI@Windows@winrt@@UIWindowStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindow@Xaml@UI@Windows@2@AEBUIWindowStatics@4562@@Z@Z @ 0x1800AECA0 (--$call@P6A-AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@-$factory_cache_entry@UWi.c)
 *     ??$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUIWindowPrivate@Xaml@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800B0F40 (--$as@UIWindowPrivate@Xaml@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@i.c)
 *     ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800B1050 (--0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?TransparentBackground@?$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800B113C (-TransparentBackground@-$consume_Windows_UI_Xaml_IWindowPrivate@UIWindowPrivate@Xaml@UI@Windows@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x1801106AC (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?Current@?$consume_Windows_UI_Xaml_IWindowStatics@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AEDB8 (-Current@-$consume_Windows_UI_Xaml_IWindowStatics@UIWindowStatics@Xaml@UI@Windows@winrt@@@impl@w.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=9
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlExplorerHostWindow(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *this,
        int a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        int a4)
{
  struct IUnknown **v7; // r13
  HWND *v8; // r12
  const char *v9; // r9
  int v10; // r14d
  int cy; // r15d
  __int64 v12; // rcx
  __int64 v13; // rax
  struct IUnknown *v14; // rbx
  WinUICohabitationFunctions *v15; // rax
  WinUICohabitationFunctions *v16; // rax
  __int64 v17; // rcx
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  int v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v22[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v23[2]; // [rsp+98h] [rbp-68h] BYREF
  int v24; // [rsp+A8h] [rbp-58h] BYREF
  int *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  WNDCLASSW WndClass; // [rsp+C0h] [rbp-40h] BYREF
  int v28; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v20 = a2;
  v23[1] = this;
  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::`vftable';
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable>::`vftable';
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,IXamlExplorerHostWindowLocal>'};
  *((_QWORD *)this + 5) = 0LL;
  v7 = (struct IUnknown **)((char *)this + 48);
  *((_QWORD *)this + 6) = 0LL;
  v8 = (HWND *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = GetCurrentThreadId();
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
  WndClass.lpszClassName = L"XamlExplorerHostIslandWindow";
  WndClass.style = 3;
  WndClass.lpfnWndProc = (WNDPROC)winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::WndProc;
  RegisterClassW(&WndClass);
  if ( *((_QWORD *)this + 5) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x70,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
      v9);
  v10 = (int)*((float *)a3 + 2);
  cy = (int)*((float *)a3 + 3);
  CreateWindowInBand(
    a4 | 0x200000u,
    WndClass.lpszClassName,
    &LocaleName,
    0x80000000LL,
    (int)*(float *)a3,
    (int)*((float *)a3 + 1),
    v10,
    cy,
    0LL,
    0LL,
    WndClass.hInstance,
    this,
    v20);
  v12 = *((_QWORD *)this + 5);
  if ( !v12 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x86,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
      (const char *)retaddr);
  v28 = 1;
  v24 = 13;
  v25 = &v28;
  v26 = 4;
  SetWindowCompositionAttribute(v12, &v24);
  SetPropW(*((HWND *)this + 5), L"NonRudeHWND", HANDLE_FLAG_INHERIT);
  SetPropW(*((HWND *)this + 5), L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT);
  v13 = winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource((winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *)v22);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 48, v13);
  if ( v22[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v22);
  v14 = *v7;
  v15 = WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinUICohabitation_DesktopWindowXamlSourceNative_AttachToWindowWrapper(
    v15,
    v14,
    *((HWND *)this + 5));
  v16 = WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinUICohabitation_DesktopWindowXamlSourceNative_get_WindowHandleWrapper(
    v16,
    v14,
    (HWND *)this + 7);
  v22[1] = &qword_18098E748;
  _InterlockedIncrement64(&qword_18098E748);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics> )
  {
    winrt::impl::consume_Windows_UI_Xaml_IWindowStatics<winrt::Windows::UI::Xaml::IWindowStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics>,
      &v19);
    _InterlockedDecrement64(&qword_18098E748);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E748);
    v23[0] = _lambda_43d092c5da9a5068682fa4571a07bb24_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics>::call<winrt::Windows::UI::Xaml::Window (*)(winrt::Windows::UI::Xaml::IWindowStatics const &)>(
      v17,
      &v19,
      v23);
  }
  winrt::impl::as<winrt::Windows::UI::Xaml::IWindowPrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v21,
    v19);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  winrt::impl::consume_Windows_UI_Xaml_IWindowPrivate<winrt::Windows::UI::Xaml::IWindowPrivate>::TransparentBackground(&v21);
  SetWindowPos(*v8, 0LL, 0, 0, v10, cy, 0x56u);
  if ( v21 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  return this;
}
