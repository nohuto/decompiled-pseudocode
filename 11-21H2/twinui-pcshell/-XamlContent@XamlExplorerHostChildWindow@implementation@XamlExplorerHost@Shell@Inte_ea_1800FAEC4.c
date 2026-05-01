/*
 * XREFs of ?XamlContent@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x1800FAEC4
 * Callers:
 *     ?put_XamlContent@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x1800FAFC0 (-put_XamlContent@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@In.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Content@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBAXAEBUUIElement@Xaml@UI@Windows@3@@Z @ 0x1800FAF78 (-Content@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Ho.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::XamlContent(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow *this,
        const struct IInspectable *a2)
{
  char *v3; // rdi
  struct IInspectableVtbl *lpVtbl; // rcx
  int v5; // eax
  __int64 v6; // rbx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = (char *)this + 32;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 4, &v9) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostchildwindow.cpp",
      (const char *)0x8007139FLL,
      v7);
  lpVtbl = a2->lpVtbl;
  if ( a2->lpVtbl )
  {
    v10 = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct IInspectableVtbl *, void *, __int64 *))lpVtbl->QueryInterface)(
           lpVtbl,
           &winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>,
           &v10);
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
    v6 = v10;
  }
  else
  {
    v6 = 0LL;
  }
  v9 = v6;
  winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource>::Content(
    v3,
    &v9);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
}
