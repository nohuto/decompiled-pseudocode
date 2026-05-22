/*
 * XREFs of ?Destroy@LayerVisual@Composition@UI@Windows@@UEAAXXZ @ 0x180086530
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z @ 0x180086560 (-SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z.c)
 *     ?SetShadow@LayerVisual@Composition@UI@Windows@@QEAAXPEAVCompositionShadow@234@@Z @ 0x180086634 (-SetShadow@LayerVisual@Composition@UI@Windows@@QEAAXPEAVCompositionShadow@234@@Z.c)
 */

void __fastcall Windows::UI::Composition::LayerVisual::Destroy(Windows::UI::Composition::LayerVisual *this)
{
  Windows::UI::Composition::LayerVisual::SetEffect(this, 0LL);
  Windows::UI::Composition::LayerVisual::SetShadow(this, 0LL);
  Windows::UI::Composition::Visual::Destroy(this);
}
