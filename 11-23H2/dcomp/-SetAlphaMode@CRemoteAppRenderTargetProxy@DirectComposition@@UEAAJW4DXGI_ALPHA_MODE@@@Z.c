/*
 * XREFs of ?SetAlphaMode@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1800F4480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetProxy::SetAlphaMode(
        DirectComposition::CRemoteAppRenderTargetProxy *this,
        enum DXGI_ALPHA_MODE a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CRemoteAppRenderTargetProxy *)((char *)this + 8),
           0,
           a2);
}
