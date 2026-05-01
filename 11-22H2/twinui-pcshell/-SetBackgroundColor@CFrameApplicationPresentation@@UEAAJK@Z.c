/*
 * XREFs of ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x1803C9ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_53fb1c4a60a47562c448770c0c0ac62e___ @ 0x1801D7768 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_53fb1c4a60a47562c448770c0c0ac62e___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetBackgroundColor(CFrameApplicationPresentation *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5[2] = a2;
  *(_QWORD *)v5 = this;
  v2 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_53fb1c4a60a47562c448770c0c0ac62e___(this, (__int128 *)v5);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6EE,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
