/*
 * XREFs of ?AddRef@GameControllerRawInputProvider@@WCA@EAAKXZ @ 0x180079D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GameControllerRawInputProvider::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 32));
}
