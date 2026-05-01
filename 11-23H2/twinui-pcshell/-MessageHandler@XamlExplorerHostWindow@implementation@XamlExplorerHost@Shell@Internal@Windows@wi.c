/*
 * XREFs of ?MessageHandler@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x180043EB8
 * Callers:
 *     ?WndProc@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA_JQEAUHWND__@@I_K_J@Z @ 0x180043DB0 (-WndProc@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA.c)
 * Callees:
 *     ??$make@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEB_NAEBQEAUHWND__@@@winrt@@YA?A_PAEB_NAEBQEAUHWND__@@@Z @ 0x180043F88 (--$make@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     ??$?RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x180044008 (--$-RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActi.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::MessageHandler(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *this,
        UINT a2,
        WPARAM a3,
        LPARAM a4)
{
  LPARAM v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  LPARAM v12[4]; // [rsp+38h] [rbp-20h] BYREF
  bool v13; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 == 6 )
  {
    v13 = a3 != 0;
    if ( a3 )
      v9 = *((_QWORD *)this + 5);
    else
      v9 = a4;
    v12[0] = v9;
    v10 = winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,bool const &,HWND__ * const &>(
            &v11,
            &v13,
            v12);
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>(
      (char *)this + 72,
      this,
      v10);
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
    return DefWindowProcW(*((HWND *)this + 5), a2, a3, a4);
  }
  if ( a2 != 16 )
  {
    if ( a2 == 70 && (*(_BYTE *)(a4 + 32) & 1) == 0 )
      MoveWindow(*((HWND *)this + 7), 0, 0, *(_DWORD *)(a4 + 24), *(_DWORD *)(a4 + 28), 1);
    return DefWindowProcW(*((HWND *)this + 5), a2, a3, a4);
  }
  return 0LL;
}
