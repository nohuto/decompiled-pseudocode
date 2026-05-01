/*
 * XREFs of ?UseMrtShim_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@67@XZ @ 0x1801FB2AC
 * Callers:
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002F0C4 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_InitCoro$2 @ 0x1801FAEB8 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Init.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK(
        winrt::Windows::Foundation::IUnknown *a1)
{
  void *v2; // rax
  int v4; // [rsp+110h] [rbp+8h] BYREF

  v2 = operator new(0xD1uLL);
  v4 = 0;
  winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK__InitCoro_2(
    &v4,
    (__int64)v2 + 96,
    a1);
  return a1;
}
