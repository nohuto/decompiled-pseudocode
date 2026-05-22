/*
 * XREFs of ?AddRef@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x180079D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GameControllerRawInputProvider::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 24));
}
