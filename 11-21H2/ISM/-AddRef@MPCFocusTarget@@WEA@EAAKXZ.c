/*
 * XREFs of ?AddRef@MPCFocusTarget@@WEA@EAAKXZ @ 0x18004FEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::AddRef(__int64 a1)
{
  return ComboButtonProcessor::AddRef((ComboButtonProcessor *)(a1 - 64));
}
