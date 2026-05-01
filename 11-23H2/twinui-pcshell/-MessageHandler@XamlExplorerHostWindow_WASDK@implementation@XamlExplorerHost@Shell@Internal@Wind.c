/*
 * XREFs of ?MessageHandler@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA_JI_K_J@Z @ 0x1804FBB5C
 * Callers:
 *     ?WndProc@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA_JQEAUHWND__@@I_K_J@Z @ 0x1804FBF20 (-WndProc@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??$make@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEB_NAEBQEAUHWND__@@@winrt@@YA?A_PAEB_NAEBQEAUHWND__@@@Z @ 0x180043F88 (--$make@UActivationChangedEventArgs@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$?RUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow_WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x1804FAB48 (--$-RUXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::MessageHandler(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *this,
        UINT a2,
        WPARAM a3,
        LPARAM a4)
{
  __int64 v9; // rax
  _QWORD *v10; // r8
  const char *v11; // r9
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v15; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 == 6 )
  {
    v15 = a3 != 0;
    if ( a3 )
      v9 = *((_QWORD *)this + 5);
    else
      v9 = a4;
    try
    {
      v13[0] = v9;
      v10 = winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs,bool const &,HWND__ * const &>(
              &v12,
              (char *)&v15,
              v13);
      winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs>(
        (__int64)this + 80,
        (__int64)this,
        (__int64)v10);
      if ( v12 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    }
    catch ( ... )
    {
      return (int)wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x59,
                    (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
                    v11);
    }
  }
  else
  {
    if ( a2 == 16 )
      return 0LL;
    if ( a2 == 70 && (*(_BYTE *)(a4 + 32) & 1) == 0 )
      MoveWindow(*((HWND *)this + 8), 0, 0, *(_DWORD *)(a4 + 24), *(_DWORD *)(a4 + 28), 1);
  }
  return DefWindowProcW(*((HWND *)this + 5), a2, a3, a4);
}
