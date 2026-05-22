/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VSceneLightingEffect@Effects@Composition@UI@Windows@@UISceneLightingEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@UISceneLightingEffect2@2345@@WRL2@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AF2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Effects::SceneLightingEffect,Windows::UI::Composition::Effects::ISceneLightingEffect,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Windows::UI::Composition::Effects::ISceneLightingEffect2>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs>::QueryInterface(
           a1 - 32,
           a2,
           a3);
}
