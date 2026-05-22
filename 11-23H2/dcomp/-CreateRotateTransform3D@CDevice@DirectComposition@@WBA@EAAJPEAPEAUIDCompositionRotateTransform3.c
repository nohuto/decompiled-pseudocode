/*
 * XREFs of ?CreateRotateTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionRotateTransform3D@@@Z @ 0x1800A87D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateRotateTransform3D(
        __int64 a1,
        struct IDCompositionRotateTransform3D **a2)
{
  return DirectComposition::CDevice::CreateRotateTransform3D((DirectComposition::CDevice *)(a1 - 16), a2);
}
