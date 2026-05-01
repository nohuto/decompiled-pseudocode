/*
 * XREFs of ?Scale@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXM@Z @ 0x1801FA9AC
 * Callers:
 *     ?put_Scale@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK2@34567@@impl@winrt@@UEAAHM@Z @ 0x1801FACC0 (-put_Scale@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@In.c)
 * Callees:
 *     ?SiteBridge@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004A8CC (-SiteBridge@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource@UIDesktopWindowXamlSour.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OverrideScale@?$consume_Microsoft_UI_Content_IContentSiteBridge@UDesktopChildSiteBridge@Content@UI@Microsoft@winrt@@@impl@winrt@@QEBA@M@Z @ 0x1801FA698 (-OverrideScale@-$consume_Microsoft_UI_Content_IContentSiteBridge@UDesktopChildSiteBridge@Content.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::Scale(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK *this,
        float a2)
{
  __int64 *v2; // rbx
  int v3; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v2 = (__int64 *)((char *)this + 40);
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 5, &v5) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10C,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
      (const char *)0x8007139FLL,
      v3);
  winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSource<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSource>::SiteBridge(
    v2,
    &v5);
  v6 = 0LL;
  if ( winrt::Windows::Foundation::operator==(&v5, &v6) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10F,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostChildWindow_WASDK.cpp",
      (const char *)0x8007139FLL,
      v3);
  winrt::impl::consume_Microsoft_UI_Content_IContentSiteBridge<winrt::Microsoft::UI::Content::DesktopChildSiteBridge>::OverrideScale((__int64 *)&v5);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v5);
}
