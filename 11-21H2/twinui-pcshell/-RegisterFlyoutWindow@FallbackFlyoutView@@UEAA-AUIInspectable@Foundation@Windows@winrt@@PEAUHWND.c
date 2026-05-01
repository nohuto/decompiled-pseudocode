/*
 * XREFs of ?RegisterFlyoutWindow@FallbackFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1805D1FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn FallbackFlyoutView::RegisterFlyoutWindow(
        FallbackFlyoutView *this,
        HWND a2,
        const struct winrt::hstring *a3)
{
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x4C,
    (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
    (const char *)0x80070308LL,
    v3);
}
