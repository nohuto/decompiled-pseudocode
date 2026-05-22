/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AE390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Interactions::InteractionTracker,Windows::UI::Composition::Interactions::IInteractionTracker,Windows::UI::Composition::Interactions::IInteractionTracker2,Windows::UI::Composition::Interactions::IInteractionTracker3,Windows::UI::Composition::Interactions::IInteractionTracker4,Windows::UI::Composition::Interactions::IInteractionTracker5>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionShape,Windows::UI::Composition::ICompositionShape>::AddRef(a1 - 16);
}
