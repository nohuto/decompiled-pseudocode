/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAKXZ @ 0x1400338D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::Release(__int64 a1)
{
  return ATL::CComObject<CCrossProcessClientInputEndpoint>::Release(a1 - 488);
}
