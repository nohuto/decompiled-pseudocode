/*
 * XREFs of ?CreateBlendEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionBlendEffect@@@Z @ 0x1800A85D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateBlendEffect(__int64 a1, struct IDCompositionBlendEffect **a2)
{
  return DirectComposition::CDevice::CreateBlendEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
