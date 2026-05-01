/*
 * XREFs of ?VerifyCallingProcessIdentity@FallbackFlyoutView@@UEAAXXZ @ 0x1806C4580
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn FallbackFlyoutView::VerifyCallingProcessIdentity(FallbackFlyoutView *this)
{
  int v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x51,
    (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
    (const char *)0x80070308LL,
    v1);
}
