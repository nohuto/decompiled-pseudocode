/*
 * XREFs of ?CreateScaleTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionScaleTransform3D@@@Z @ 0x1800A8870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateScaleTransform3D(
        __int64 a1,
        struct IDCompositionScaleTransform3D **a2)
{
  return DirectComposition::CDevice::CreateScaleTransform3D((DirectComposition::CDevice *)(a1 - 16), a2);
}
