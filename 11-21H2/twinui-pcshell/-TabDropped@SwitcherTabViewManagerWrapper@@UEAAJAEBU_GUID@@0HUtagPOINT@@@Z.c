/*
 * XREFs of ?TabDropped@SwitcherTabViewManagerWrapper@@UEAAJAEBU_GUID@@0HUtagPOINT@@@Z @ 0x180439250
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::TabDropped(
        SwitcherTabViewManagerWrapper *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        const char *a4,
        struct tagPOINT a5)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0x4A,
    (int)"pcshell\\private\\shell\\inc\\SwitcherTabViewManagerWrapper.h",
    a4);
}
