/*
 * XREFs of ?Release@TapProcessor@@WBA@EAAKXZ @ 0x18004EAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall TapProcessor::Release(__int64 a1)
{
  return TouchProcessor::Release((TouchProcessor *)(a1 - 16));
}
