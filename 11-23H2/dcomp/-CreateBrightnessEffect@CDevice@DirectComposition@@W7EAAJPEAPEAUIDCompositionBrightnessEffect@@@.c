/*
 * XREFs of ?CreateBrightnessEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionBrightnessEffect@@@Z @ 0x1800A85F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateBrightnessEffect(
        __int64 a1,
        struct IDCompositionBrightnessEffect **a2)
{
  return DirectComposition::CDevice::CreateBrightnessEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
