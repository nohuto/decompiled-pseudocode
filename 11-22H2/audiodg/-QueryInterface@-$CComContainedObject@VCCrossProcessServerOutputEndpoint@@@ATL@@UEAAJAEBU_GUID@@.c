/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140092D30
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140032FB0 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140032FD0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBJI@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140032FF0 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140033010 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKI@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140033030 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMI@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140033050 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBOA@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400331B0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400331D0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAJAEBU_GU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 496))(*(_QWORD *)(a1 + 496));
}
