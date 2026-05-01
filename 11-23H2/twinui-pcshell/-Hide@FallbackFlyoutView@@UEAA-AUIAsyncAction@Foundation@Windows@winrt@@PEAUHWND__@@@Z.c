/*
 * XREFs of ?Hide@FallbackFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z @ 0x180255360
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     FallbackFlyoutView::Hide$_InitCoro$2 @ 0x1802550A4 (FallbackFlyoutView--Hide$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall FallbackFlyoutView::Hide(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+E8h] [rbp+10h] BYREF

  v6 = operator new(0x99uLL);
  v8 = 0;
  FallbackFlyoutView::Hide__InitCoro_2(&v8, (__int64)v6 + 96, a2, a3, a1);
  return a2;
}
