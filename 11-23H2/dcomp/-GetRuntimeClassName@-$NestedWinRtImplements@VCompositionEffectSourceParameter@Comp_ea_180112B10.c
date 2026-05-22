/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionEffectSourceParameter@Composition@UI@Windows@@UICompositionEffectSourceParameter@234@UIGraphicsEffectSource@Effects@Graphics@4@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180112B10
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionEffectSourceParameter@Composition@UI@Windows@@UICompositionEffectSourceParameter@234@UIGraphicsEffectSource@Effects@Graphics@4@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AD1D0 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositionEffectSourceParameter@Composition@UI@Wi.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISceneLightingEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@UISceneLightingEffect2@2345@@WRL2@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF1E0 (-GetRuntimeClassName@-$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows.c)
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISceneLightingEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@UISceneLightingEffect2@2345@@WRL2@Microsoft@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF200 (-GetRuntimeClassName@-$NestedWinRtImplements@VSceneLightingEffect@Effects@Compositi_ea_1800AF200.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionEffectSourceParameter,Windows::UI::Composition::ICompositionEffectSourceParameter,Windows::Graphics::Effects::IGraphicsEffectSource>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 24),
           a2);
}
