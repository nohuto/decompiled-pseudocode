/*
 * XREFs of ?SetIsCapturing@CWriteCaptureControllerProxy@DirectComposition@@UEAAJ_N@Z @ 0x1800F5750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CWriteCaptureControllerProxy::SetIsCapturing(
        DirectComposition::CWriteCaptureControllerProxy *this,
        unsigned __int8 a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CWriteCaptureControllerProxy *)((char *)this + 8),
           1,
           a2);
}
