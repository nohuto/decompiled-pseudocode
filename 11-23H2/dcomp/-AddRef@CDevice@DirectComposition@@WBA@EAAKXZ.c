/*
 * XREFs of ?AddRef@CDevice@DirectComposition@@WBA@EAAKXZ @ 0x1800A83F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDevice::AddRef(__int64 a1)
{
  return DirectComposition::CDevice::AddRef((DirectComposition::CDevice *)(a1 - 16));
}
