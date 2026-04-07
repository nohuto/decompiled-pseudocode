/*
 * XREFs of ?UpdateScene@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCVisual@@@Z @ 0x1800FEC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::UpdateScene(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        struct CVisual *a2)
{
  return CDesktopManager::UpdateSceneImpl(this, a2);
}
