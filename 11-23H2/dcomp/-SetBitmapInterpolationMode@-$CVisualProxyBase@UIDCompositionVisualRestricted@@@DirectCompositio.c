/*
 * XREFs of ?SetBitmapInterpolationMode@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJW4DCOMPOSITION_BITMAP_INTERPOLATION_MODE@@@Z @ 0x180065A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetBitmapInterpolationMode(
        __int64 a1,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           7,
           a2);
}
