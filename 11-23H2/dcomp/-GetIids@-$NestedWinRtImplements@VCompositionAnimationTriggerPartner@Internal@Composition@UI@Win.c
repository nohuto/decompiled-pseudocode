/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UICompositionAnimationTriggerPartner@2345@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FC30
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VCompositionClip@Composition@UI@Windows@@UICompositionClip@234@UICompositionClip2@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC250 (-GetIids@-$NestedWinRtImplements@VCompositionClip@Composition@UI@Windows@@UICompositionClip@234@.c)
 *     ?GetIids@?$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UICompositionGraphicsDevice@234@UICompositionGraphicsDevice2@234@UICompositionGraphicsDevice3@234@UICompositionGraphicsDevice4@234@@WRL2@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE510 (-GetIids@-$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UICompositio.c)
 *     ?GetIids@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AE530 (-GetIids@-$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInte.c)
 *     ?GetIids@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AF500 (-GetIids@-$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Wi_ea_1800AF500.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 136),
           a2,
           a3);
}
