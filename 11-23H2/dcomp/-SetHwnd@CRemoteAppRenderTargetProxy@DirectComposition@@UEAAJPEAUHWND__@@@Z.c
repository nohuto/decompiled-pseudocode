/*
 * XREFs of ?SetHwnd@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJPEAUHWND__@@@Z @ 0x1800F5510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetProxy::SetHwnd(
        DirectComposition::CRemoteAppRenderTargetProxy *this,
        __int64 a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CRemoteAppRenderTargetProxy *)((char *)this + 8),
           3,
           a2);
}
