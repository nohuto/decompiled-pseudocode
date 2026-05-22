/*
 * XREFs of ?SetRelativeHeight@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJM@Z @ 0x180012320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetRelativeHeight(
        __int64 a1,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           0x23u,
           a2);
}
