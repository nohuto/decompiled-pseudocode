/*
 * XREFs of ?SetWindowRegion@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x1804FA2FC
 * Callers:
 *     ?SetWindowRegion@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x1804FA280 (-SetWindowRegion@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@URect@234@@impl@winrt@@QEBA@XZ @ 0x1800D6234 (-Value@-$consume_Windows_Foundation_IReference@U-$IReference@URect@Foundation@Windows@winrt@@@Fo.c)
 *     ??$as@U?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@4@$0A@@impl@winrt@@YA?AU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800DBD50 (--$as@U-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Utype@-$abi@UIUnk.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::SetWindowRegion(
        HWND *this,
        const struct IInspectable *a2)
{
  struct IInspectableVtbl *lpVtbl; // rdx
  HRGN RectRgn; // rbx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  lpVtbl = a2->lpVtbl;
  if ( lpVtbl )
  {
    winrt::impl::as<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v5,
      lpVtbl);
    winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>,winrt::Windows::Foundation::Rect>::Value(
      &v5,
      &v6);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
    RectRgn = CreateRectRgn(
                (int)*(float *)&v6,
                (int)*((float *)&v6 + 1),
                (int)*(float *)&v6 + (int)*((float *)&v6 + 2),
                (int)*((float *)&v6 + 1) + (int)*((float *)&v6 + 3));
    SetWindowRgn(this[5], RectRgn, 1);
    if ( RectRgn )
      DeleteObject(RectRgn);
  }
  else
  {
    SetWindowRgn(this[5], 0LL, 1);
  }
}
