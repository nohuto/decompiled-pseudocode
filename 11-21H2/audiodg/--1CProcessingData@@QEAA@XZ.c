/*
 * XREFs of ??1CProcessingData@@QEAA@XZ @ 0x14002CAC0
 * Callers:
 *     _CRealTimeSafeStruct_CProcessingData_1_::SwapRTPointer_::_1_::dtor$3 @ 0x1400372C3 (_CRealTimeSafeStruct_CProcessingData_1_--SwapRTPointer_--_1_--dtor$3.c)
 *     ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x140082358 (-NonRTCancelSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ.c)
 *     _CRealTimeSafeStruct_CProcessingData_1_::NonRTCancelSafePointer_::_1_::dtor$3 @ 0x14008244A (_CRealTimeSafeStruct_CProcessingData_1_--NonRTCancelSafePointer_--_1_--dtor$3.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000BCC0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 */

void __fastcall CProcessingData::~CProcessingData(CProcessingData *this)
{
  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((__int64 *)this + 12);
  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((__int64 *)this + 6);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)this);
}
