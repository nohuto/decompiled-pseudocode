/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140039D70
 * Callers:
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140032D30 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x140032D50 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x140032D70 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKI@EAAKXZ @ 0x140032D90 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x140032DB0 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x140032DD0 (-AddRef@-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBOA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAKXZ @ 0x140032F30 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAKXZ @ 0x140032F50 (-AddRef@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 496));
}
