/*
 * XREFs of ?SetClip@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAUIDCompositionClip@@@Z @ 0x1800F5020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionCursorVisualPartner>::SetClip(
        __int64 a1,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty((DirectComposition::CResourceProxy *)(a1 + 8), 6, a2);
}
