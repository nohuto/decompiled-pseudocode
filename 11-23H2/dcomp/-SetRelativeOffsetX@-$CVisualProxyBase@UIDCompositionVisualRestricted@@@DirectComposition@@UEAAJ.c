/*
 * XREFs of ?SetRelativeOffsetX@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJM@Z @ 0x18000DD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetRelativeOffsetX(
        __int64 a1,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           0x1Fu,
           a2);
}
