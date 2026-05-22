/*
 * XREFs of ?CreateVisual@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x1800A8B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateVisual(__int64 a1, struct IDCompositionVisual2 **a2)
{
  return DirectComposition::CDevice::CreateVisual((DirectComposition::CDevice *)(a1 - 8), a2);
}
