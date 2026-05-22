/*
 * XREFs of ?CreateAnimation@CDevice@DirectComposition@@WBA@EAAJPEAPEAUIDCompositionAnimation@@@Z @ 0x1800A8590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::CreateAnimation(__int64 a1, struct IDCompositionAnimation **a2)
{
  return DirectComposition::CDevice::CreateAnimation((DirectComposition::CDevice *)(a1 - 16), a2);
}
