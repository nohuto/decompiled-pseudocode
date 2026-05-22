/*
 * XREFs of ?Release@ComboButtonProcessor@@W7EAAKXZ @ 0x18004EB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ComboButtonProcessor::Release(__int64 a1)
{
  return MPCFocusTarget::Release((MPCFocusTarget *)(a1 - 8));
}
