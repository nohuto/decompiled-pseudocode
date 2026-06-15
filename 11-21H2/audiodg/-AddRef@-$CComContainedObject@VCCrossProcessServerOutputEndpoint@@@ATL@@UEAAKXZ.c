/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140083DB0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x1400352B0 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x1400352D0 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x1400352F0 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKI@EAAKXZ @ 0x140035310 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x140035330 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x140035350 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBOA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAKXZ @ 0x1400353D0 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAKXZ @ 0x1400353F0 (-AddRef@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 8LL))(*(_QWORD *)(a1 + 496));
}
