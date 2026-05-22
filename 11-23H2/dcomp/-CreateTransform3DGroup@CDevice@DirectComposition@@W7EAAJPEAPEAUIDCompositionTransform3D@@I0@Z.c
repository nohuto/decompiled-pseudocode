/*
 * XREFs of ?CreateTransform3DGroup@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTransform3D@@I0@Z @ 0x1800A8A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateTransform3DGroup(
        __int64 a1,
        struct IDCompositionTransform3D **a2,
        unsigned int a3,
        struct IDCompositionTransform3D **a4)
{
  return DirectComposition::CDevice::CreateTransform3DGroup((DirectComposition::CDevice *)(a1 - 8), a2, a3, a4);
}
