/*
 * XREFs of ?TryGetTabGroupForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1804395D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::TryGetTabGroupForView(
        SwitcherTabViewManagerWrapper *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0x35,
    (int)"pcshell\\private\\shell\\inc\\SwitcherTabViewManagerWrapper.h",
    (const char *)a4);
}
