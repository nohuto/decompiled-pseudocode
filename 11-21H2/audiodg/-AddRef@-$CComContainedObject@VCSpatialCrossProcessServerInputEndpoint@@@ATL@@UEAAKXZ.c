/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x14008D8F0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140035CD0 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x140035CF0 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x140035D10 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFCI@EAAKXZ @ 0x140035D30 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFCI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAKXZ @ 0x140035D50 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFJI@EAAKXZ @ 0x140035D70 (-AddRef@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFJI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1440) + 8LL))(*(_QWORD *)(a1 + 1440));
}
