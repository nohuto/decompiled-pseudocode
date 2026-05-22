/*
 * XREFs of ?UpdateRefreshRate@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJXZ @ 0x1800F6980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetProxy::UpdateRefreshRate(
        DirectComposition::CDDisplayRenderTargetProxy *this)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CDDisplayRenderTargetProxy *)((char *)this + 8),
           16,
           0LL);
}
