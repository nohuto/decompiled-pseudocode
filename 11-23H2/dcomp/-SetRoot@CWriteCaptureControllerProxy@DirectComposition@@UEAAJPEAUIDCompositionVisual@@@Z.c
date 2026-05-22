/*
 * XREFs of ?SetRoot@CWriteCaptureControllerProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x1800F5E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CWriteCaptureControllerProxy::SetRoot(
        DirectComposition::CWriteCaptureControllerProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CWriteCaptureControllerProxy *)((char *)this + 8),
           0,
           a2);
}
