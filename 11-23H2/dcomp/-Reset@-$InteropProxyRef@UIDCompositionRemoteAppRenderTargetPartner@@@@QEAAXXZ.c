/*
 * XREFs of ?Reset@?$InteropProxyRef@UIDCompositionRemoteAppRenderTargetPartner@@@@QEAAXXZ @ 0x1800A35AC
 * Callers:
 *     ?Destroy@InteropCursorVisual@Composition@UI@Windows@@UEAAXXZ @ 0x180024650 (-Destroy@InteropCursorVisual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??_EInteropDDisplayRenderTarget@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180091920 (--_EInteropDDisplayRenderTarget@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAAXPEAUIDCompositionVisualRestricted@@@Z @ 0x1800A3580 (-Attach@-$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAAXPEAUIDCompositionVisualRestrict.c)
 *     ??1?$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAA@XZ @ 0x1800A3E64 (--1-$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAA@XZ.c)
 *     ?Destroy@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1800A3E80 (-Destroy@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@InteropRenderTarget@Composition@UI@Windows@@UEAAXXZ @ 0x1800A3EB0 (-Destroy@InteropRenderTarget@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionCursorVisualPartner@@@@QEAAXPEAUIDCompositionCursorVisualPartner@@@Z @ 0x1800A6EB0 (-Attach@-$InteropProxyRef@UIDCompositionCursorVisualPartner@@@@QEAAXPEAUIDCompositionCursorVisua.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionDesktopTreePartner@@@@QEAAXPEAUIDCompositionDesktopTreePartner@@@Z @ 0x1800A6EDC (-Attach@-$InteropProxyRef@UIDCompositionDesktopTreePartner@@@@QEAAXPEAUIDCompositionDesktopTreeP.c)
 *     ?Attach@?$InteropProxyRef@UIDCompositionRenderTargetPartner@@@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800A6F08 (-Attach@-$InteropProxyRef@UIDCompositionRenderTargetPartner@@@@QEAAXPEAUIDCompositionRenderTarge.c)
 *     ?RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x180197D74 (-RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z @ 0x1801983E4 (-RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJP_ea_1801983E4.c)
 * Callees:
 *     ?ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024678 (-ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

void __fastcall InteropProxyRef<IDCompositionRemoteAppRenderTargetPartner>::Reset(volatile __int64 *a1)
{
  void *v1; // rax

  v1 = (void *)_InterlockedExchange64(a1, 0LL);
  if ( v1 )
    DirectComposition::CDevice::ReleaseProxyForInterop(v1);
}
