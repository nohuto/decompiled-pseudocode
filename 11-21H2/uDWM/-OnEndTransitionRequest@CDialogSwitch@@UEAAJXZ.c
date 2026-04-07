/*
 * XREFs of ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x1800D7CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800A6BD4 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x1800D80E0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 */

__int64 __fastcall CDialogSwitch::OnEndTransitionRequest(CDialogSwitch *this)
{
  unsigned int v1; // ebx

  v1 = CStoryboard::OnEndTransitionRequest(this);
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22), 18);
  return v1;
}
