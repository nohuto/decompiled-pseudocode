/*
 * XREFs of ?SetTransform@CCaptureControllerProxy@DirectComposition@@UEAAJPEAUIDCompositionTransform@@@Z @ 0x1800F6460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureControllerProxy::SetTransform(
        DirectComposition::CCaptureControllerProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CCaptureControllerProxy *)((char *)this + 8),
           4,
           a2);
}
