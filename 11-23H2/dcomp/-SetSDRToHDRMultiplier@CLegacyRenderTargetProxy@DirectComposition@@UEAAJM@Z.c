/*
 * XREFs of ?SetSDRToHDRMultiplier@CLegacyRenderTargetProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetProxy::SetSDRToHDRMultiplier(
        DirectComposition::CLegacyRenderTargetProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CLegacyRenderTargetProxy *)((char *)this + 8),
           11,
           a2);
}
