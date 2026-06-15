/*
 * XREFs of ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x14008D950
 * Callers:
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140035E70 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x140035E90 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x140035EB0 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFCI@EAAKXZ @ 0x140035ED0 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFCI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAKXZ @ 0x140035EF0 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFJI@EAAKXZ @ 0x140035F10 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFJI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 1440));
}
