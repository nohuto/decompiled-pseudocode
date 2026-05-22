/*
 * XREFs of ?CreateRotateTransform@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionRotateTransform@@@Z @ 0x1800A8810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateRotateTransform(
        __int64 a1,
        struct IDCompositionRotateTransform **a2)
{
  return DirectComposition::CDevice::CreateRotateTransform((DirectComposition::CDevice *)(a1 - 16), a2);
}
