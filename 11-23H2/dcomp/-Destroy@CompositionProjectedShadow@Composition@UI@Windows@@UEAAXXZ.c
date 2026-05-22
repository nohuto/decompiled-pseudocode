/*
 * XREFs of ?Destroy@CompositionProjectedShadow@Composition@UI@Windows@@UEAAXXZ @ 0x180006BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAllReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x180006D48 (-RemoveAllReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?RemoveAllCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x1800073F8 (-RemoveAllCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?SetLightSource@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@@Z @ 0x1800076F4 (-SetLightSource@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234.c)
 */

void __fastcall Windows::UI::Composition::CompositionProjectedShadow::Destroy(
        Windows::UI::Composition::CompositionProjectedShadow *this)
{
  Windows::UI::Composition::CompositionProjectedShadow::RemoveAllCasters(this);
  Windows::UI::Composition::CompositionProjectedShadow::RemoveAllReceivers(this);
  Windows::UI::Composition::CompositionProjectedShadow::SetLightSource(this, 0LL);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
