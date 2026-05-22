/*
 * XREFs of ?SetContent@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIUnknown@@@Z @ 0x180004220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetContent(
        __int64 a1,
        struct DirectComposition::CResourceProxy *a2,
        struct IUnknown *a3)
{
  return DirectComposition::CResorceProxy_SetContent((DirectComposition *)((a1 + 8) & -(__int64)(a1 != 0)), a2, a3);
}
