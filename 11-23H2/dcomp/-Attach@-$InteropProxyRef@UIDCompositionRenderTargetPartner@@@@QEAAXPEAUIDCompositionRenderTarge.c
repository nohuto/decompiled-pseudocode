/*
 * XREFs of ?Attach@?$InteropProxyRef@UIDCompositionRenderTargetPartner@@@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800A6F08
 * Callers:
 *     ?RuntimeClassInitialize@InteropRemoteRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@@Z @ 0x180091814 (-RuntimeClassInitialize@InteropRemoteRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_N@Z @ 0x1800926B8 (-RuntimeClassInitialize@InteropLegacyRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@I@Z @ 0x18019ACBC (-RuntimeClassInitialize@InteropDDisplayRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@.c)
 * Callees:
 *     ?Reset@?$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ @ 0x1800A35AC (-Reset@-$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ.c)
 */

void __fastcall InteropProxyRef<IDCompositionRenderTargetPartner>::Attach(volatile __int64 *a1, volatile __int64 a2)
{
  InteropProxyRef<IDCompositionRemoteAppRenderTargetPartner>::Reset(a1);
  *a1 = a2;
}
