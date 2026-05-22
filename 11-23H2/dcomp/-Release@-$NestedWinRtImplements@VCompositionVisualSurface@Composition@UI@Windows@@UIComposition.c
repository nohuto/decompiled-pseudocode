/*
 * XREFs of ?Release@?$NestedWinRtImplements@VCompositionVisualSurface@Composition@UI@Windows@@UICompositionVisualSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800AC9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionVisualSurface,Windows::UI::Composition::ICompositionVisualSurface,Windows::UI::Composition::ICompositionSurface>::Release(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionBrush,Windows::UI::Composition::ICompositionBrush>::Release(a1 - 8);
}
