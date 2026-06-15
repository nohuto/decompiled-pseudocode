/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140093CF0
 * Callers:
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140033610 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x140033630 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBNA@EAAKXZ @ 0x140033650 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBNA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 16LL))(*(_QWORD *)(a1 + 488));
}
