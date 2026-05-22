/*
 * XREFs of ?CreateCompositeEffect@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionCompositeEffect@@@Z @ 0x1800A8630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CDevice::CreateCompositeEffect(__int64 a1, struct IDCompositionCompositeEffect **a2)
{
  return DirectComposition::CDevice::CreateCompositeEffect((DirectComposition::CDevice *)(a1 - 8), a2);
}
