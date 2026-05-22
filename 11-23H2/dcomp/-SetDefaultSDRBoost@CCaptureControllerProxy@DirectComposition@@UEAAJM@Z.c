/*
 * XREFs of ?SetDefaultSDRBoost@CCaptureControllerProxy@DirectComposition@@UEAAJM@Z @ 0x1800F5230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureControllerProxy::SetDefaultSDRBoost(
        DirectComposition::CCaptureControllerProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CCaptureControllerProxy *)((char *)this + 8),
           7,
           a2);
}
