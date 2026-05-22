/*
 * XREFs of ?Release@HeatProcessor@@WBA@EAAKXZ @ 0x18006AC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall HeatProcessor::Release(__int64 a1)
{
  return OneCoreUAPInputHost::Release((OneCoreUAPInputHost *)(a1 - 16));
}
