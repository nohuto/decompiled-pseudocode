/*
 * XREFs of ?get_Bounds@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1802D9B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Bounds@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEBA?AURect@Foundation@67@XZ @ 0x1802D9AD8 (-Bounds@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::get_Bounds(
        __int64 a1,
        __m128i *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = _mm_loadu_si128((const __m128i *)winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK::Bounds(
                                           (a1 - 16) & -(__int64)(a1 != 0),
                                           (__int64)v3));
  return 0LL;
}
