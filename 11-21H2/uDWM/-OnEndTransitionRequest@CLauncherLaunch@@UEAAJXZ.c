/*
 * XREFs of ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x1800D7E80
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x1800D8618 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 */

__int64 __fastcall CLauncherLaunch::OnEndTransitionRequest(CLauncherLaunch *this)
{
  CLauncherAnimationBase::RecordLauncherRect(this);
  return CStoryboard::OnEndTransitionRequest(this);
}
