/*
 * XREFs of ?WaitForInitializationAsyncHelper@XamlExplorerHostShellComponent@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@XZ @ 0x1801A966C
 * Callers:
 *     ?WaitForInitializationAsync@XamlExplorerHostShellComponent@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@ABI@@@Z @ 0x18005FFB0 (-WaitForInitializationAsync@XamlExplorerHostShellComponent@@UEAAJPEAPEAUIAsyncAction@Foundation@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper$_InitCoro$2 @ 0x1801A9284 (XamlExplorerHostShellComponent--WaitForInitializationAsyncHelper$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  void *v4; // rax
  int v6; // [rsp+288h] [rbp+10h] BYREF

  v4 = operator new(0x249uLL);
  v6 = 0;
  XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper__InitCoro_2(&v6, (__int64)v4 + 96, a2, a1);
  return a2;
}
