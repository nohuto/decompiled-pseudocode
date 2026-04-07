/*
 * XREFs of ?AcquireAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAXPEAPEAVCAnimationEngine@@@Z @ 0x1800FCCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::AcquireAnimationEngine(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CAnimationEngine **a2)
{
  struct CAnimationEngine *v2; // rax
  struct CAnimationEngine **v3; // rdx

  v2 = CDesktopManager::AcquireAnimationEngine();
  *v3 = v2;
}
