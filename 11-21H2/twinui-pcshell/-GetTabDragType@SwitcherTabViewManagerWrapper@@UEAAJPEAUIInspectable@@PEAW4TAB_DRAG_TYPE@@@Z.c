/*
 * XREFs of ?GetTabDragType@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@PEAW4TAB_DRAG_TYPE@@@Z @ 0x1804343A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn SwitcherTabViewManagerWrapper::GetTabDragType(
        SwitcherTabViewManagerWrapper *this,
        struct IInspectable *a2,
        enum TAB_DRAG_TYPE *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0x49,
    (int)"pcshell\\private\\shell\\inc\\SwitcherTabViewManagerWrapper.h",
    a4);
}
