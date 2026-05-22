/*
 * XREFs of ?CreateAnimation@CDevice@DirectComposition@@W7EAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x1800A8570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateAnimation(__int64 a1, struct IDCompositionAnimation **a2)
{
  return DirectComposition::CDevice::CreateAnimation((DirectComposition::CDevice *)(a1 - 8), a2);
}
