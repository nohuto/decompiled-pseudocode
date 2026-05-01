/*
 * XREFs of ?XamlContent@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x180062B00
 * Callers:
 *     ?put_XamlContent@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x180062AB0 (-put_XamlContent@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Sh.c)
 * Callees:
 *     ?Content@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUUIElement@Xaml@UI@Microsoft@3@@Z @ 0x180062BC4 (-Content@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::XamlContent(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this,
        const struct IInspectable *a2)
{
  char *v3; // rdi
  struct IInspectableVtbl *lpVtbl; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0LL;
  v3 = (char *)this + 40;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==((char *)this + 40, &v8) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x58,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
      (const char *)0x8007139FLL,
      v7);
  lpVtbl = a2->lpVtbl;
  if ( a2->lpVtbl )
  {
    v8 = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct IInspectableVtbl *, void *, __int64 *))lpVtbl->QueryInterface)(
           lpVtbl,
           &winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::IUIElement>,
           &v8);
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
    v6 = v8;
    v7 = v8;
  }
  else
  {
    v7 = 0LL;
    v6 = 0LL;
  }
  winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::Content(
    v3,
    &v7);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
}
