/*
 * XREFs of ?CreateMatrixTransform3D@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionMatrixTransform3D@@@Z @ 0x1800A8710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateMatrixTransform3D(
        __int64 a1,
        struct IDCompositionMatrixTransform3D **a2)
{
  return DirectComposition::CDevice::CreateMatrixTransform3D((DirectComposition::CDevice *)(a1 - 16), a2);
}
