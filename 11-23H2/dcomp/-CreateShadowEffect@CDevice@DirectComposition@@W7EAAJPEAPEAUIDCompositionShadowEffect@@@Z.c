/*
 * XREFs of ?CreateShadowEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionShadowEffect@@@Z @ 0x1800A88D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateShadowEffect(__int64 a1, struct IDCompositionShadowEffect **a2)
{
  return DirectComposition::CDevice::CreateShadowEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
