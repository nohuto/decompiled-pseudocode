/*
 * XREFs of ?SetVailDpi@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJI@Z @ 0x1800F65B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetProxy::SetVailDpi(
        DirectComposition::CRemoteAppRenderTargetProxy *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CRemoteAppRenderTargetProxy *)((char *)this + 8),
           4,
           a2);
}
