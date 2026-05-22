/*
 * XREFs of ?CreateTranslateTransform@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionTranslateTransform@@@Z @ 0x1800A8AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateTranslateTransform(
        __int64 a1,
        struct IDCompositionTranslateTransform **a2)
{
  return DirectComposition::CDevice::CreateTranslateTransform((DirectComposition::CDevice *)(a1 - 16), a2);
}
