/*
 * XREFs of ?Destroy@SpotLight@Composition@UI@Windows@@UEAAXXZ @ 0x18017C130
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCoordinateSpace@SpotLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180062730 (-SetCoordinateSpace@SpotLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z.c)
 */

void __fastcall Windows::UI::Composition::SpotLight::Destroy(Windows::UI::Composition::SpotLight *this)
{
  Windows::UI::Composition::SpotLight::SetCoordinateSpace(this, 0LL);
  Windows::UI::Composition::CompositionLight::Destroy(this);
}
