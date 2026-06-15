/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAKXZ @ 0x140035BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::Release(__int64 a1)
{
  return ATL::CComObject<CCrossProcessClientOutputEndpoint>::Release(a1 - 464);
}
