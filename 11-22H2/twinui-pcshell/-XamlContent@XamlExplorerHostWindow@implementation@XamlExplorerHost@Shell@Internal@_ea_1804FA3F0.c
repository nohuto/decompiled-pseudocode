/*
 * XREFs of ?XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x1804FA3F0
 * Callers:
 *     ?get_XamlContent@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1802D9BF0 (-get_XamlContent@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Interna.c)
 * Callees:
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18007FAAC (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Content@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18019DA74 (-Content@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindow_ea_18019DA74.c)
 */

struct IInspectable __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::XamlContent(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *this,
        _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::FailFastIfNotOnCreationThread(this);
  v9 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 6, &v9) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE6,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
      (const char *)0x8007139FLL,
      v7);
  v4 = winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::Content(
         (__int64 *)this + 6,
         &v9);
  v5 = *v4;
  *v4 = 0LL;
  *a2 = v5;
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return (struct IInspectable)a2;
}
