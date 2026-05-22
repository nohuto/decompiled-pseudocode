/*
 * XREFs of ?AddVisual@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionVisual@@H0@Z @ 0x18000F870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::AddVisual(
        __int64 a1,
        struct DirectComposition::CResourceProxy *a2,
        struct IDCompositionVisual *a3,
        int a4,
        struct IDCompositionVisual *a5)
{
  return DirectComposition::CResorceProxy_AddVisual(
           (DirectComposition *)((a1 + 8) & -(__int64)(a1 != 0)),
           a2,
           a3,
           a4,
           a5);
}
