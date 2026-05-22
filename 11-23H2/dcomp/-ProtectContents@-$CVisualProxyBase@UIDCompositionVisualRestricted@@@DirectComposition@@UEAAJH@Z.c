/*
 * XREFs of ?ProtectContents@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJH@Z @ 0x1800F2720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::ProtectContents(
        __int64 a1,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           48,
           a2);
}
