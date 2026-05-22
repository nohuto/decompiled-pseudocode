/*
 * XREFs of ?SetRoot@CDesktopTreeProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x1800955D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDesktopTreeProxy::SetRoot(
        DirectComposition::CDesktopTreeProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CDesktopTreeProxy *)((char *)this + 8),
           1,
           a2);
}
