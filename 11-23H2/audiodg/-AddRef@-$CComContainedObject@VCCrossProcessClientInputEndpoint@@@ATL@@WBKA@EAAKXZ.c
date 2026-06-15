/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x140032B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 416);
}
