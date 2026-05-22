/*
 * XREFs of ?Release@MPCFocusTarget@@WFA@EAAKXZ @ 0x18007AB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall MPCFocusTarget::Release(__int64 a1)
{
  return SystemButtonProcessor::Release((SystemButtonProcessor *)(a1 - 80));
}
