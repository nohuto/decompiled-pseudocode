/*
 * XREFs of ?UpdateRefreshRate@CLegacyRenderTargetProxy@DirectComposition@@UEAAJXZ @ 0x1800F69A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetProxy::UpdateRefreshRate(
        DirectComposition::CLegacyRenderTargetProxy *this)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CLegacyRenderTargetProxy *)((char *)this + 8),
           13,
           0LL);
}
