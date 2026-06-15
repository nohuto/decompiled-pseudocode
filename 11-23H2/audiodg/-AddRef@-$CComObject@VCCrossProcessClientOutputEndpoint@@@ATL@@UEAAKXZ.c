/*
 * XREFs of ?AddRef@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140090BE0
 * Callers:
 *     ?AddRef@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x140032DF0 (-AddRef@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x140032E10 (-AddRef@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x140032E30 (-AddRef@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAKXZ @ 0x140032E50 (-AddRef@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x140032E70 (-AddRef@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x140032E90 (-AddRef@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBOA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBPA@EAAKXZ @ 0x140032EB0 (-AddRef@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBPA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::AddRef(__int64 a1)
{
  return ATL::SafeIncrementReferenceMultiThread((int *)(a1 + 504));
}
