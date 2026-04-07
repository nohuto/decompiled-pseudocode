/*
 * XREFs of ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x18000E9D0
 * Callers:
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x18000E950 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000CF48 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x18000FB68 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 */

__int64 __fastcall CStoryboard::OnAnimationComplete(CStoryboard *this, int a2)
{
  CStoryboard *v2; // rbx

  if ( *((_DWORD *)this + 3) == a2 )
  {
    v2 = (CStoryboard *)((char *)this - 16);
    CStoryboard::_NotifyStoryboardState((char *)this - 16, 4LL);
    CStoryboard::_Cleanup(v2);
  }
  return 0LL;
}
