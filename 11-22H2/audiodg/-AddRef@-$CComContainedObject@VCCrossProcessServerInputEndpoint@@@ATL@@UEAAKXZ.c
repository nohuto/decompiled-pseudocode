/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140090BF0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140032CD0 (-AddRef@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x140032CF0 (-AddRef@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBNA@EAAKXZ @ 0x140032D10 (-AddRef@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBNA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 8LL))(*(_QWORD *)(a1 + 488));
}
