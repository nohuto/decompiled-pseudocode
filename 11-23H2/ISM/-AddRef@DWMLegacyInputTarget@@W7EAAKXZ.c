/*
 * XREFs of ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x180069E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMLegacyInputTarget::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 8));
}
