/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionPropertySet@Composition@UI@Windows@@UICompositionPropertySet@234@UICompositionPropertySet2@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AB9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionPropertySet,Windows::UI::Composition::ICompositionPropertySet,Windows::UI::Composition::ICompositionPropertySet2>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionVisualSurface,Windows::UI::Composition::ICompositionVisualSurface,Windows::UI::Composition::ICompositionSurface>::AddRef(a1 - 8);
}
