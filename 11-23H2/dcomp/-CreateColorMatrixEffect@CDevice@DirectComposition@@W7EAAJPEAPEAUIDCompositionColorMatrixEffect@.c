/*
 * XREFs of ?CreateColorMatrixEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionColorMatrixEffect@@@Z @ 0x1800A8610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateColorMatrixEffect(
        __int64 a1,
        struct IDCompositionColorMatrixEffect **a2)
{
  return DirectComposition::CDevice::CreateColorMatrixEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
