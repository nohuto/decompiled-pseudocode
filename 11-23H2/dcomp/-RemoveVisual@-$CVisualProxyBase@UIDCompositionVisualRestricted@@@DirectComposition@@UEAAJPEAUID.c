/*
 * XREFs of ?RemoveVisual@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x1800F40B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::RemoveVisual(
        __int64 a1,
        struct DirectComposition::CResourceProxy *a2,
        struct IDCompositionVisual *a3)
{
  return DirectComposition::CResorceProxy_RemoveVisual((DirectComposition *)((a1 + 8) & -(__int64)(a1 != 0)), a2, a3);
}
