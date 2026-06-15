/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140023460
 * Callers:
 *     ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140032ED0 (-AddRef@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x140032EF0 (-AddRef@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBNA@EAAKXZ @ 0x140032F10 (-AddRef@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBNA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 488));
}
