/*
 * XREFs of ?Hide@FallbackFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z @ 0x1801D4320
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     FallbackFlyoutView::Hide$_InitCoro$2 @ 0x1801D4008 (FallbackFlyoutView--Hide$_InitCoro$2.c)
 */

winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *__fastcall FallbackFlyoutView::Hide(
        __int64 a1,
        winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a2,
        __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+1C8h] [rbp+10h] BYREF

  v6 = operator new(0x171uLL);
  v8 = 0;
  FallbackFlyoutView::Hide__InitCoro_2(&v8, (__int64)v6 + 96, a2, a3, a1);
  return a2;
}
