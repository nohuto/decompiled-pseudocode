/*
 * XREFs of ?CreateTransformGroup@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTransform@@I0@Z @ 0x1800A8A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateTransformGroup(
        __int64 a1,
        struct IDCompositionTransform **a2,
        unsigned int a3,
        struct IDCompositionTransform **a4)
{
  return DirectComposition::CDevice::CreateTransformGroup((DirectComposition::CDevice *)(a1 - 8), a2, a3, a4);
}
