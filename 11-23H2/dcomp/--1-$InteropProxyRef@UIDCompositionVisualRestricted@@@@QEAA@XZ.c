/*
 * XREFs of ??1?$InteropProxyRef@UIDCompositionVisualRestricted@@@@QEAA@XZ @ 0x1800A3E64
 * Callers:
 *     ??_GInteropVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18007C990 (--_GInteropVisual@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GInteropRedirectVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18015B570 (--_GInteropRedirectVisual@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EInteropCursorVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18015C320 (--_EInteropCursorVisual@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall InteropProxyRef<IDCompositionVisualRestricted>::~InteropProxyRef<IDCompositionVisualRestricted>(
        volatile __int64 *a1)
{
  InteropProxyRef<IDCompositionRemoteAppRenderTargetPartner>::Reset(a1);
}
