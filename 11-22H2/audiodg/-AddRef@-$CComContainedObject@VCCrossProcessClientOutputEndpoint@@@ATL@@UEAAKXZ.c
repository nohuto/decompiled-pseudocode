/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140090BB0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x140032BF0 (-AddRef@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x140032C10 (-AddRef@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x140032C30 (-AddRef@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAKXZ @ 0x140032C50 (-AddRef@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x140032C70 (-AddRef@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x140032C90 (-AddRef@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBOA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBPA@EAAKXZ @ 0x140032CB0 (-AddRef@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBPA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 504) + 8LL))(*(_QWORD *)(a1 + 504));
}
