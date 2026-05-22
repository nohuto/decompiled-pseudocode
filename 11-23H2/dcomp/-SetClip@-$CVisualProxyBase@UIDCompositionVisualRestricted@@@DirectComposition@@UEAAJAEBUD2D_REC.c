/*
 * XREFs of ?SetClip@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJAEBUD2D_RECT_F@@@Z @ 0x180011990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetClip(__int64 a1, const void *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           0xCu,
           a2,
           0x10uLL);
}
