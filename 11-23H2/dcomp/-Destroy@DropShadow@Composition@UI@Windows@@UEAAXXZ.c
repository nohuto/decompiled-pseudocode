/*
 * XREFs of ?Destroy@DropShadow@Composition@UI@Windows@@UEAAXXZ @ 0x180182D90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMask@DropShadow@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x180182FE8 (-SetMask@DropShadow@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z.c)
 */

void __fastcall Windows::UI::Composition::DropShadow::Destroy(Windows::UI::Composition::DropShadow *this)
{
  Windows::UI::Composition::DropShadow::SetMask(this, 0LL);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
