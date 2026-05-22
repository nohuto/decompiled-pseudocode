/*
 * XREFs of ?Release@ControllerProcessor@@WEI@EAAKXZ @ 0x1800528E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ControllerProcessor::Release(__int64 a1)
{
  return TouchProcessor::Release((TouchProcessor *)(a1 - 72));
}
