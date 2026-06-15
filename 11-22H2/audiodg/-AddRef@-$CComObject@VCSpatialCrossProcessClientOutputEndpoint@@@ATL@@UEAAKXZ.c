/*
 * XREFs of ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140099CB0
 * Callers:
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x140033A90 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x140033AB0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x140033AD0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCI@EAAKXZ @ 0x140033AF0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAKXZ @ 0x140033B10 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDI@EAAKXZ @ 0x140033B30 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFGI@EAAKXZ @ 0x140033B50 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFGI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 1400));
}
