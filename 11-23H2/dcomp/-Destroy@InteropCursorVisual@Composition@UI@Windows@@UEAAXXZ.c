/*
 * XREFs of ?Destroy@InteropCursorVisual@Composition@UI@Windows@@UEAAXXZ @ 0x180024650
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@?$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ @ 0x1800A35AC (-Reset@-$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::InteropCursorVisual::Destroy(
        Windows::UI::Composition::InteropCursorVisual *this)
{
  InteropProxyRef<IDCompositionRemoteAppRenderTargetPartner>::Reset((char *)this + 312);
  Windows::UI::Composition::Visual::Destroy(this);
}
