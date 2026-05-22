/*
 * XREFs of ?CreateTranslateTransform3D@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionTranslateTransform3D@@@Z @ 0x1800A8A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateTranslateTransform3D(
        __int64 a1,
        struct IDCompositionTranslateTransform3D **a2)
{
  return DirectComposition::CDevice::CreateTranslateTransform3D((DirectComposition::CDevice *)(a1 - 8), a2);
}
