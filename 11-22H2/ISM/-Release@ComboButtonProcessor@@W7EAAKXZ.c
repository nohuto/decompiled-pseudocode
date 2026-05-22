/*
 * XREFs of ?Release@ComboButtonProcessor@@W7EAAKXZ @ 0x180079550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ComboButtonProcessor::Release(__int64 a1)
{
  return SystemButtonProcessor::Release((SystemButtonProcessor *)(a1 - 8));
}
