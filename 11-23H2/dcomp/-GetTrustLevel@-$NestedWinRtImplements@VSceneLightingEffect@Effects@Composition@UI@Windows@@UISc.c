/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISceneLightingEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@UISceneLightingEffect2@2345@@WRL2@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AF220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Effects::SceneLightingEffect,Windows::UI::Composition::Effects::ISceneLightingEffect,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Windows::UI::Composition::Effects::ISceneLightingEffect2>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionEffectSourceParameter,Windows::UI::Composition::ICompositionEffectSourceParameter,Windows::Graphics::Effects::IGraphicsEffectSource>::GetTrustLevel(
           a1 - 16,
           a2);
}
