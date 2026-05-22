/*
 * XREFs of ?CreateGaussianBlurEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionGaussianBlurEffect@@@Z @ 0x1800A8690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateGaussianBlurEffect(
        __int64 a1,
        struct IDCompositionGaussianBlurEffect **a2)
{
  return DirectComposition::CDevice::CreateGaussianBlurEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
