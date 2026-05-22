/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UICompositionGraphicsDevice@234@UICompositionGraphicsDevice2@234@UICompositionGraphicsDevice3@234@UICompositionGraphicsDevice4@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012C50
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VVisualTarget@Composition@UI@Windows@@UIVisualTargetPartner@234@UICompositionTargetPartner@Private@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ACF50 (-QueryInterface@-$NestedWinRtImplements@VVisualTarget@Composition@UI@Windows@@UIVisualTargetPart.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEA10 (-QueryInterface@-$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UICompositionGraphicsDevice@234@UICompositionGraphicsDevice2@234@UICompositionGraphicsDevice3@234@UICompositionGraphicsDevice4@234@@WRL2@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AEA30 (-QueryInterface@-$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@W_ea_1800AEA30.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFB00 (-QueryInterface@-$NestedWinRtImplements@VInteractionTracker@Interactions@Compositio_ea_1800AFB00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::ICompositionGraphicsDevice,Windows::UI::Composition::ICompositionGraphicsDevice2,Windows::UI::Composition::ICompositionGraphicsDevice3,Windows::UI::Composition::ICompositionGraphicsDevice4>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 136),
           a2,
           a3);
}
