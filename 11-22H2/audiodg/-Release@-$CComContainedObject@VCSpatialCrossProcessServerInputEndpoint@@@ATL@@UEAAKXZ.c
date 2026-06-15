/*
 * XREFs of ?Release@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x14009A920
 * Callers:
 *     ?Release@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140034050 (-Release@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x140034070 (-Release@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x140034090 (-Release@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFCI@EAAKXZ @ 0x1400340B0 (-Release@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFCI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAKXZ @ 0x1400340D0 (-Release@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFDA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFJI@EAAKXZ @ 0x1400340F0 (-Release@-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFJI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1440) + 16LL))(*(_QWORD *)(a1 + 1440));
}
