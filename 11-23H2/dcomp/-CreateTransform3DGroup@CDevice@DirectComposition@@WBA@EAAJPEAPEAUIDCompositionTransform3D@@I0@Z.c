/*
 * XREFs of ?CreateTransform3DGroup@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionTransform3D@@I0@Z @ 0x1800A8A30
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
  return DirectComposition::CDevice::CreateTransform3DGroup((DirectComposition::CDevice *)(a1 - 16), a2, a3, a4);
}
