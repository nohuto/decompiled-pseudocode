/*
 * XREFs of ?EnableClear@CLegacyRenderTargetProxy@DirectComposition@@UEAAJ_N@Z @ 0x1800F1BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetProxy::EnableClear(
        DirectComposition::CLegacyRenderTargetProxy *this,
        unsigned __int8 a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CLegacyRenderTargetProxy *)((char *)this + 8),
           12,
           a2);
}
