/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurface2@234@UICompositionDrawingSurface@234@UICompositionSurface@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800B0A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionDrawingSurface,Windows::UI::Composition::ICompositionDrawingSurface2,Windows::UI::Composition::ICompositionDrawingSurface,Windows::UI::Composition::ICompositionSurface>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionSpriteShape,Windows::UI::Composition::ICompositionSpriteShape>::AddRef(a1 - 8);
}
