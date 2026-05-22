/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VHolographicCompositor@Internal@Composition@UI@Windows@@UIHolographicCompositor@2345@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18010FE50
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionClip@Composition@UI@Windows@@UICompositionClip@234@UICompositionClip2@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AC3B0 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositionClip@Composition@UI@Windows@@UIComposit.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@UICompositionGraphicsDevice@234@UICompositionGraphicsDevice2@234@UICompositionGraphicsDevice3@234@UICompositionGraphicsDevice4@234@@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE6B0 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositionGraphicsDevice@Composition@UI@Windows@@.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AE6D0 (-GetRuntimeClassName@-$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Win.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VInteractionTracker@Interactions@Composition@UI@Windows@@UIInteractionTracker@2345@UIInteractionTracker2@2345@UIInteractionTracker3@2345@UIInteractionTracker4@2345@UIInteractionTracker5@2345@@WRL2@Microsoft@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF780 (-GetRuntimeClassName@-$NestedWinRtImplements@VInteractionTracker@Interactions@Compo_ea_1800AF780.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Internal::HolographicCompositor,Windows::UI::Composition::Internal::IHolographicCompositor>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 136),
           a2);
}
