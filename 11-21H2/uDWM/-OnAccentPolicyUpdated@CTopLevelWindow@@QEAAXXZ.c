/*
 * XREFs of ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180017084
 * Callers:
 *     ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180016E10 (-AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C3A14 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnAccentPolicyUpdated(CTopLevelWindow *this)
{
  __int64 v1; // rax
  bool v2; // dl

  v1 = *((_QWORD *)this + 94);
  if ( !v1 || (v2 = 1, (*(_BYTE *)(v1 + 664) & 1) == 0) || (*(_BYTE *)(v1 + 668) & 1) != 0 )
    v2 = 0;
  CTopLevelWindow::UpdateAccent(this, v2);
}
