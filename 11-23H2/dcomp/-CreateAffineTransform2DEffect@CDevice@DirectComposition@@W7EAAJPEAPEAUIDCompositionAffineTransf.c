/*
 * XREFs of ?CreateAffineTransform2DEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionAffineTransform2DEffect@@@Z @ 0x1800A8550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateAffineTransform2DEffect(
        __int64 a1,
        struct IDCompositionAffineTransform2DEffect **a2)
{
  return DirectComposition::CDevice::CreateAffineTransform2DEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
