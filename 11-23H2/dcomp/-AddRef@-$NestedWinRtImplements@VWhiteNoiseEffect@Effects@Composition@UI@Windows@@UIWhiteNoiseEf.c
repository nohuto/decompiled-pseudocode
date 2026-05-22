/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@UIWhiteNoiseEffect@2345@UIGraphicsEffect@2Graphics@5@UIGraphicsEffectSource@285@UIGraphicsEffectD2D1Interop@285@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AF140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Effects::WhiteNoiseEffect,Windows::UI::Composition::Effects::IWhiteNoiseEffect,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionPath,Windows::UI::Composition::ICompositionPath,Windows::Graphics::IGeometrySource2D>::AddRef(a1 - 16);
}
