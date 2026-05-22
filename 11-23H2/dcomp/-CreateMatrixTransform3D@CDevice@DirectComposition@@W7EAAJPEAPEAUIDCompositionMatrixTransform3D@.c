/*
 * XREFs of ?CreateMatrixTransform3D@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionMatrixTransform3D@@@Z @ 0x1800A86F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateMatrixTransform3D(
        __int64 a1,
        struct IDCompositionMatrixTransform3D **a2)
{
  return DirectComposition::CDevice::CreateMatrixTransform3D((DirectComposition::CDevice *)(a1 - 8), a2);
}
