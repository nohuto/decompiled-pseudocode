/*
 * XREFs of ?CreateHueRotationEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionHueRotationEffect@@@Z @ 0x1800A86B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateHueRotationEffect(
        __int64 a1,
        struct IDCompositionHueRotationEffect **a2)
{
  return DirectComposition::CDevice::CreateHueRotationEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
