/*
 * XREFs of ?Release@TipToGlassProcessor@@W7EAAKXZ @ 0x1800683B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TipToGlassProcessor::Release(__int64 a1)
{
  return LightDismissProcessor::Release((LightDismissProcessor *)(a1 - 8));
}
