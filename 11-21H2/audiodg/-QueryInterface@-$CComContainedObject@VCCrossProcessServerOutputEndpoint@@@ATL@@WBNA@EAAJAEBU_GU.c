/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140035690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::QueryInterface(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::QueryInterface(a1 - 464);
}
