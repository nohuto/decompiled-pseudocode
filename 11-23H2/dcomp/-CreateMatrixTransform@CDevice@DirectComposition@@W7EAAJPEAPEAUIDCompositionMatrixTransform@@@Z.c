/*
 * XREFs of ?CreateMatrixTransform@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionMatrixTransform@@@Z @ 0x1800A8730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateMatrixTransform(
        __int64 a1,
        struct IDCompositionMatrixTransform **a2)
{
  return DirectComposition::CDevice::CreateMatrixTransform((DirectComposition::CDevice *)(a1 - 8), a2);
}
