/*
 * XREFs of ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x1800D7700
 * Callers:
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x1800A6EC0 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x1800DB520 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
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
