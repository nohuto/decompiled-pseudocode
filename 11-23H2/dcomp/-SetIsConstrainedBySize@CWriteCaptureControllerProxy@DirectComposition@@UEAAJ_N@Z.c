/*
 * XREFs of ?SetIsConstrainedBySize@CWriteCaptureControllerProxy@DirectComposition@@UEAAJ_N@Z @ 0x1800F5790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CWriteCaptureControllerProxy::SetIsConstrainedBySize(
        DirectComposition::CWriteCaptureControllerProxy *this,
        unsigned __int8 a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CWriteCaptureControllerProxy *)((char *)this + 8),
           6,
           a2);
}
