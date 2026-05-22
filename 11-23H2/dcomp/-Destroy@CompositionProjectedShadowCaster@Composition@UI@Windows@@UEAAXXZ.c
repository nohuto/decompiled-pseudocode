/*
 * XREFs of ?Destroy@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAXXZ @ 0x18000D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMask@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18000D52C (-SetMask@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@.c)
 *     ?SetBrush@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18000D584 (-SetBrush@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234.c)
 *     ?SetAncestorClipVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18000D5DC (-SetAncestorClipVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@.c)
 *     ?SetCastingVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18000D650 (-SetCastingVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@.c)
 */

void __fastcall Windows::UI::Composition::CompositionProjectedShadowCaster::Destroy(
        Windows::UI::Composition::CompositionProjectedShadowCaster *this)
{
  if ( !*((_BYTE *)this + 200) )
  {
    Windows::UI::Composition::CompositionProjectedShadowCaster::SetBrush(this, 0LL);
    Windows::UI::Composition::CompositionProjectedShadowCaster::SetMask(this, 0LL);
    Windows::UI::Composition::CompositionProjectedShadowCaster::SetCastingVisual(this, 0LL);
    Windows::UI::Composition::CompositionProjectedShadowCaster::SetAncestorClipVisual(this, 0LL);
  }
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
