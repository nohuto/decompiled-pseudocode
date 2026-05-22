/*
 * XREFs of ?EnableClear@CRemoteRenderTargetProxy@DirectComposition@@UEAAJ_N@Z @ 0x1800F1BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteRenderTargetProxy::EnableClear(
        DirectComposition::CRemoteRenderTargetProxy *this,
        unsigned __int8 a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CRemoteRenderTargetProxy *)((char *)this + 8),
           4,
           a2);
}
