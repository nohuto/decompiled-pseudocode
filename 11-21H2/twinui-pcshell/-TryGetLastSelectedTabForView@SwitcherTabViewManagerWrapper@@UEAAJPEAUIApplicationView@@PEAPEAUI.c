/*
 * XREFs of ?TryGetLastSelectedTabForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x180439440
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::TryGetLastSelectedTabForView(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        struct IInspectable **a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0x4C,
    (int)"pcshell\\private\\shell\\inc\\SwitcherTabViewManagerWrapper.h",
    a4);
}
