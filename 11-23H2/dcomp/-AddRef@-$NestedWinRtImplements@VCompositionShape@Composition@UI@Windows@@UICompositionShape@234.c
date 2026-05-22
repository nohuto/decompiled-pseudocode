/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionShape@Composition@UI@Windows@@UICompositionShape@234@@WRL2@Microsoft@@UEAAKXZ @ 0x180012BA0
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VVisualTarget@Composition@UI@Windows@@UIVisualTargetPartner@234@UICompositionTargetPartner@Private@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800ACC50 (-AddRef@-$NestedWinRtImplements@VVisualTarget@Composition@UI@Windows@@UIVisualTargetPartner@234@.c)
 *     ?AddRef@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AE390 (-AddRef@-$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInter.c)
 *     ?AddRef@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800AE3B0 (-AddRef@-$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Win_ea_1800AE3B0.c)
 *     ?AddRef@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WCA@EAAKXZ @ 0x1800AF340 (-AddRef@-$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Win_ea_1800AF340.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionShape,Windows::UI::Composition::ICompositionShape>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 136));
}
