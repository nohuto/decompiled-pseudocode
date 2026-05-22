/*
 * XREFs of ?Release@?$NestedWinRtImplements@VCompositionSurfaceBrush@Composition@UI@Windows@@UICompositionSurfaceBrush@234@UICompositionSurfaceBrush2@234@UICompositionSurfaceBrush3@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800AECF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::ICompositionSurfaceBrush,Windows::UI::Composition::ICompositionSurfaceBrush2,Windows::UI::Composition::ICompositionSurfaceBrush3>::Release(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionMaskBrush,Windows::UI::Composition::ICompositionMaskBrush>::Release(a1 - 16);
}
