/*
 * XREFs of ?SetSDRToHDRMultiplier@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetProxy::SetSDRToHDRMultiplier(
        DirectComposition::CDDisplayRenderTargetProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CDDisplayRenderTargetProxy *)((char *)this + 8),
           14,
           a2);
}
