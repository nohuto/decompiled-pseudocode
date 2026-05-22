/*
 * XREFs of ?Attach@?$InteropProxyRef@UIDCompositionCursorVisualPartner@@@@QEAAXPEAUIDCompositionCursorVisualPartner@@@Z @ 0x1800A6EB0
 * Callers:
 *     ?RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z @ 0x180198E8C (-RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z.c)
 * Callees:
 *     ?Reset@?$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ @ 0x1800A35AC (-Reset@-$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ.c)
 */

void __fastcall InteropProxyRef<IDCompositionCursorVisualPartner>::Attach(volatile __int64 *a1, volatile __int64 a2)
{
  InteropProxyRef<IDCompositionRemoteAppRenderTargetPartner>::Reset(a1);
  *a1 = a2;
}
