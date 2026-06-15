/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x140035350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 480);
}
