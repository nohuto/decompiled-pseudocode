/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140083DF0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140035370 (-AddRef@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x140035390 (-AddRef@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBNA@EAAKXZ @ 0x1400353B0 (-AddRef@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBNA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 8LL))(*(_QWORD *)(a1 + 488));
}
