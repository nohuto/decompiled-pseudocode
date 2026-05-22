/*
 * XREFs of ?Destroy@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1800A3E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@?$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ @ 0x1800A35AC (-Reset@-$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::InteropRemoteAppRenderTarget::Destroy(
        Windows::UI::Composition::InteropRemoteAppRenderTarget *this)
{
  InteropProxyRef<IDCompositionRemoteAppRenderTargetPartner>::Reset((volatile __int64 *)this + 19);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
