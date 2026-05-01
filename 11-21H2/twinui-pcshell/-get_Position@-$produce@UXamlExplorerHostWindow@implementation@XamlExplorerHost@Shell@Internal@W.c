/*
 * XREFs of ?get_Position@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x18001EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Position@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AURect@Foundation@67@XZ @ 0x18001F54C (-Position@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::get_Position(
        __int64 a1,
        __m128i *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = _mm_loadu_si128((const __m128i *)winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::Position(
                                           (a1 - 16) & -(__int64)(a1 != 0),
                                           v3));
  return 0LL;
}
