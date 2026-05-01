/*
 * XREFs of ?OverrideScale@?$consume_Microsoft_UI_Content_IContentSiteBridge@UDesktopChildSiteBridge@Content@UI@Microsoft@winrt@@@impl@winrt@@QEBA@M@Z @ 0x1801FA698
 * Callers:
 *     ?Scale@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXM@Z @ 0x1801FA9AC (-Scale@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte_ea_1801FA9AC.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Microsoft_UI_Content_IContentSiteBridge<winrt::Microsoft::UI::Content::DesktopChildSiteBridge>::OverrideScale(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+28h] [rbp-30h] BYREF

  v1 = *a1;
  if ( v1 )
  {
    v4 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_v<winrt::Microsoft::UI::Content::IContentSiteBridge>,
      &v4);
    v1 = v4;
  }
  v3 = v1;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 80LL))(v1);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v3);
}
