/*
 * XREFs of ?SetContentHeight@CWriteCaptureControllerProxy@DirectComposition@@UEAAJM@Z @ 0x1800F51F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CWriteCaptureControllerProxy::SetContentHeight(
        DirectComposition::CWriteCaptureControllerProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CWriteCaptureControllerProxy *)((char *)this + 8),
           3,
           a2);
}
