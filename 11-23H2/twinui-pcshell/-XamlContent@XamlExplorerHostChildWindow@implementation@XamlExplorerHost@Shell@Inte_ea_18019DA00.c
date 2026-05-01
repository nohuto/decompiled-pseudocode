/*
 * XREFs of ?XamlContent@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@67@XZ @ 0x18019DA00
 * Callers:
 *     ?get_XamlContent@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18019D9B0 (-get_XamlContent@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@In.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Content@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18019DA74 (-Content@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindow_ea_18019DA74.c)
 */

struct IInspectable __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlContent(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *this,
        _QWORD *a2)
{
  char *v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = (char *)this + 32;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 4, &v9) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x51,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow.cpp",
      (const char *)0x8007139FLL,
      v7);
  v4 = (__int64 *)winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::Content(
                    v3,
                    &v9);
  v5 = *v4;
  *v4 = 0LL;
  *a2 = v5;
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return (struct IInspectable)a2;
}
