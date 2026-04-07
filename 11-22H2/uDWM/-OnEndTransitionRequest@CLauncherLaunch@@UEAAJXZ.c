/*
 * XREFs of ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x1800DBB60
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x18006D494 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 */

__int64 __fastcall CLauncherLaunch::OnEndTransitionRequest(struct _LIST_ENTRY *this, __int64 a2, __int64 a3)
{
  CLauncherAnimationBase::RecordLauncherRect(this, a2, a3);
  return CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
}
