/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionAnimation@Composition@UI@Windows@@UICompositionAnimation@234@UICompositionAnimation2@234@UICompositionAnimation3@234@UICompositionAnimation4@234@UICompositionAnimationBase@234@UICompositionAnimationBaseInternal@234@@WRL2@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800ADFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionAnimation,Windows::UI::Composition::ICompositionAnimation,Windows::UI::Composition::ICompositionAnimation2,Windows::UI::Composition::ICompositionAnimation3,Windows::UI::Composition::ICompositionAnimation4,Windows::UI::Composition::ICompositionAnimationBase,Windows::UI::Composition::ICompositionAnimationBaseInternal>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier>::GetIids(
           a1 - 24,
           a2,
           a3);
}
