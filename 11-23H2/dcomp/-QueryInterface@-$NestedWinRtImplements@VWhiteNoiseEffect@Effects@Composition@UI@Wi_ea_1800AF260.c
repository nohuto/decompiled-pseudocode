/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@UIWhiteNoiseEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AF260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Effects::WhiteNoiseEffect,Windows::UI::Composition::Effects::IWhiteNoiseEffect,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs,Windows::UI::Composition::ICompositionIslandAutomationProviderRequestedEventArgs>::QueryInterface(
           a1 - 16,
           a2,
           a3);
}
