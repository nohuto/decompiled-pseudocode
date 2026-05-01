/*
 * XREFs of ?WindowId@?$consume_Microsoft_UI_Content_IDesktopSiteBridge@UDesktopChildSiteBridge@Content@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004A940
 * Callers:
 *     ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x18004A7A0 (-Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 *     ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x1804FADE8 (--0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Microsoft_UI_Content_IDesktopSiteBridge<winrt::Microsoft::UI::Content::DesktopChildSiteBridge>::WindowId(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v8 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::Microsoft::UI::Content::IDesktopSiteBridge>,
      &v8);
    v3 = v8;
    v4 = v8;
  }
  else
  {
    v4 = 0LL;
  }
  v7 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 64LL))(v3, a2);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  return a2;
}
