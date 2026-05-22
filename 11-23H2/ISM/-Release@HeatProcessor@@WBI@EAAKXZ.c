/*
 * XREFs of ?Release@HeatProcessor@@WBI@EAAKXZ @ 0x180065A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall HeatProcessor::Release(__int64 a1)
{
  return OneCoreUAPInputHost::Release((OneCoreUAPInputHost *)(a1 - 24));
}
