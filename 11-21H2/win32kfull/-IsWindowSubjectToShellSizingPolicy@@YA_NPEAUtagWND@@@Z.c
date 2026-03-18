/*
 * XREFs of ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C020AA90
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020F498 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C006A110 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C006A158 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall IsWindowSubjectToShellSizingPolicy(struct tagWND *a1)
{
  __int64 v1; // rcx
  char v2; // bl
  unsigned int v3; // r8d
  ShellWindowManagement **v4; // r9

  v2 = 0;
  if ( IsSemiMaximized(a1)
    && !ShellWindowManagement::BehaviorEnabled(*(ShellWindowManagement **)(v1 + 24), (const struct tagDESKTOP *)8) )
  {
    return ShellWindowManagement::WindowSubjectToBehavior(v4, (const struct tagWND *)0x40, v3);
  }
  return v2;
}
