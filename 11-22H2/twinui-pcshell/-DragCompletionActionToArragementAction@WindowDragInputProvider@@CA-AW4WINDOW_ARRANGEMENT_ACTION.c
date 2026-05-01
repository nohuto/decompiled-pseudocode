/*
 * XREFs of ?DragCompletionActionToArragementAction@WindowDragInputProvider@@CA?AW4WINDOW_ARRANGEMENT_ACTION@@W4WindowDragCompletionAction@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18068B014
 * Callers:
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18068B7B0 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall WindowDragInputProvider::DragCompletionActionToArragementAction(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 > 2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x10B,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
      a4);
  return a1;
}
