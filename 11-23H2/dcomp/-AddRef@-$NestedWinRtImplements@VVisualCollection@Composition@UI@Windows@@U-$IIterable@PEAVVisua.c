/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VVisualCollection@Composition@UI@Windows@@U?$IIterable@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@4@UIVisualCollection@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AB9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::VisualCollection,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Visual *>,Windows::UI::Composition::IVisualCollection>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionProjectedShadowCasterCollection,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionProjectedShadowCaster *>,Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::AddRef(a1 - 8);
}
