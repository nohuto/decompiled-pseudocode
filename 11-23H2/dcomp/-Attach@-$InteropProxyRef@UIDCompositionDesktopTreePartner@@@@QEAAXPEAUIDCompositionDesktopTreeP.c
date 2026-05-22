/*
 * XREFs of ?Attach@?$InteropProxyRef@UIDCompositionDesktopTreePartner@@@@QEAAXPEAUIDCompositionDesktopTreePartner@@@Z @ 0x1800A6EDC
 * Callers:
 *     ?RuntimeClassInitialize@InteropDesktopTree@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@@Z @ 0x180093C58 (-RuntimeClassInitialize@InteropDesktopTree@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUI.c)
 * Callees:
 *     ?Reset@?$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ @ 0x1800A35AC (-Reset@-$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ.c)
 */

void __fastcall InteropProxyRef<IDCompositionDesktopTreePartner>::Attach(volatile __int64 *a1, volatile __int64 a2)
{
  InteropProxyRef<IDCompositionRemoteAppRenderTargetPartner>::Reset(a1);
  *a1 = a2;
}
