/*
 * XREFs of ??1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180034D4C
 * Callers:
 *     ??_G?$heap_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180035BA4 (--_G-$heap_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x180035438 (-TabChanged@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::~TabProxyWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        void *a2)
{
  HWND v3; // rcx
  wil::details *v4; // rcx
  wil::details *v5; // rcx
  HICON v6; // rcx
  HICON v7; // rcx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,std::tuple<Windows::Internal::Shell::ITabProxyWindowInternal>>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::implementation::TabProxyWindow::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable';
  v3 = (HWND)*((_QWORD *)this + 4);
  if ( v3 && IsWindow(v3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3B,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      v8);
  if ( *((_QWORD *)this + 6) )
    winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TabChanged(
      (char *)this + 48,
      (char *)this + 152);
  v4 = (wil::details *)*((_QWORD *)this + 22);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  v5 = (wil::details *)*((_QWORD *)this + 20);
  if ( v5 )
    wil::details::CloseHandle(v5, a2);
  if ( *((_QWORD *)this + 18) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)((char *)this + 144));
  if ( *((_QWORD *)this + 15) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)((char *)this + 120));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 14);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 13);
  v6 = (HICON)*((_QWORD *)this + 12);
  if ( v6 )
    DestroyIcon(v6);
  v7 = (HICON)*((_QWORD *)this + 11);
  if ( v7 )
    DestroyIcon(v7);
  winrt::handle_type<winrt::impl::hstring_traits>::close((char *)this + 64);
  if ( *((_QWORD *)this + 6) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)((char *)this + 48));
  if ( *((_QWORD *)this + 5) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)((char *)this + 40));
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((char *)this + 8);
}
