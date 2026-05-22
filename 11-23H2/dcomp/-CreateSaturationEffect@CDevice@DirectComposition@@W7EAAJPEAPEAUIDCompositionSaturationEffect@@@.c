/*
 * XREFs of ?CreateSaturationEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionSaturationEffect@@@Z @ 0x1800A8830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateSaturationEffect(
        __int64 a1,
        struct IDCompositionSaturationEffect **a2)
{
  return DirectComposition::CDevice::CreateSaturationEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
