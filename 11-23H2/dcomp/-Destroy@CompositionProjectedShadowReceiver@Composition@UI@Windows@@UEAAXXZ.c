/*
 * XREFs of ?Destroy@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAXXZ @ 0x180010A00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMask@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x180010A30 (-SetMask@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@23.c)
 *     ?SetReceivingVisual@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z @ 0x180010A7C (-SetReceivingVisual@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAXPEAVVisual@2.c)
 */

void __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiver::Destroy(
        Windows::UI::Composition::CompositionProjectedShadowReceiver *this)
{
  Windows::UI::Composition::CompositionProjectedShadowReceiver::SetMask(this, 0LL);
  Windows::UI::Composition::CompositionProjectedShadowReceiver::SetReceivingVisual(this, 0LL);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
