/*
 * XREFs of ?Destroy@InteropRenderTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1800A3EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ @ 0x180028D00 (-Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Reset@?$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ @ 0x1800A35AC (-Reset@-$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::InteropRenderTarget::Destroy(
        Windows::UI::Composition::InteropRenderTarget *this)
{
  InteropProxyRef<IDCompositionRemoteAppRenderTargetPartner>::Reset((volatile __int64 *)this + 19);
  Windows::UI::Composition::ProxyObject::Destroy(this);
  Windows::UI::Composition::ProxyObject::ReleaseResouceHandle(this);
}
