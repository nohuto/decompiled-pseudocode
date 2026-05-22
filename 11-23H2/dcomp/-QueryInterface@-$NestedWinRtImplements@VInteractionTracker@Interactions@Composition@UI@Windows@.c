/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Interactions::InteractionTracker,Windows::UI::Composition::Interactions::IInteractionTracker,Windows::UI::Composition::Interactions::IInteractionTracker2,Windows::UI::Composition::Interactions::IInteractionTracker3,Windows::UI::Composition::Interactions::IInteractionTracker4,Windows::UI::Composition::Interactions::IInteractionTracker5>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::ICompositionGraphicsDevice,Windows::UI::Composition::ICompositionGraphicsDevice2,Windows::UI::Composition::ICompositionGraphicsDevice3,Windows::UI::Composition::ICompositionGraphicsDevice4>::QueryInterface(
           a1 - 16,
           a2,
           a3);
}
