/*
 * XREFs of ?SetContentWidth@CCaptureControllerProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureControllerProxy::SetContentWidth(
        DirectComposition::CCaptureControllerProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CCaptureControllerProxy *)((char *)this + 8),
           2,
           a2);
}
