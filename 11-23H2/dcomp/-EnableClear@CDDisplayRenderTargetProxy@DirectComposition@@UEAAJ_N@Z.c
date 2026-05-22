/*
 * XREFs of ?EnableClear@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJ_N@Z @ 0x1800F1B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetProxy::EnableClear(
        DirectComposition::CDDisplayRenderTargetProxy *this,
        unsigned __int8 a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CDDisplayRenderTargetProxy *)((char *)this + 8),
           15,
           a2);
}
