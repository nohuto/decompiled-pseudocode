/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140085F40
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140035630 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140035650 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBJI@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140035670 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBNA@EAAJAEBU_GUI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 488))(*(_QWORD *)(a1 + 488));
}
