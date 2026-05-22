/*
 * XREFs of ?CreateScaleTransform@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionScaleTransform@@@Z @ 0x1800A8890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateScaleTransform(
        __int64 a1,
        struct IDCompositionScaleTransform **a2)
{
  return DirectComposition::CDevice::CreateScaleTransform((DirectComposition::CDevice *)(a1 - 8), a2);
}
