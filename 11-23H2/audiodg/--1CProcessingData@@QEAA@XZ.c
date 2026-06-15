/*
 * XREFs of ??1CProcessingData@@QEAA@XZ @ 0x14000AC30
 * Callers:
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000A8CC (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     _CRealTimeSafeStruct_CProcessingData_1_::SwapRTPointer_::_1_::dtor$3 @ 0x140034BBF (_CRealTimeSafeStruct_CProcessingData_1_--SwapRTPointer_--_1_--dtor$3.c)
 *     ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x14008F420 (-NonRTCancelSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ.c)
 *     _CRealTimeSafeStruct_CProcessingData_1_::NonRTCancelSafePointer_::_1_::dtor$3 @ 0x14008F512 (_CRealTimeSafeStruct_CProcessingData_1_--NonRTCancelSafePointer_--_1_--dtor$3.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000D414 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 */

void __fastcall CProcessingData::~CProcessingData(CProcessingData *this)
{
  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((char *)this + 96);
  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll((char *)this + 48);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll(this);
}
