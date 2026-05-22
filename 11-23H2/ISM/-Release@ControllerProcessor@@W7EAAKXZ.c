/*
 * XREFs of ?Release@ControllerProcessor@@W7EAAKXZ @ 0x180066630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ControllerProcessor::Release(__int64 a1)
{
  return TouchProcessor::Release((TouchProcessor *)(a1 - 8));
}
