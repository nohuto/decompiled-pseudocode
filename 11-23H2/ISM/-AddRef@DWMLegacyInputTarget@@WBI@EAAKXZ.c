/*
 * XREFs of ?AddRef@DWMLegacyInputTarget@@WBI@EAAKXZ @ 0x180069ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMLegacyInputTarget::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 24));
}
