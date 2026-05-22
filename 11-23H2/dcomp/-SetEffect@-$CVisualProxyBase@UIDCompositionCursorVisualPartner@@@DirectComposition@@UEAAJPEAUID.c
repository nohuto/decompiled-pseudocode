/*
 * XREFs of ?SetEffect@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAUIDCompositionEffect@@@Z @ 0x18000AF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionCursorVisualPartner>::SetEffect(
        __int64 a1,
        struct IUnknown *a2,
        struct IDCompositionEffect *a3)
{
  return DirectComposition::CResorceProxy_SetEffect((DirectComposition *)((a1 + 8) & -(__int64)(a1 != 0)), a2, a3);
}
