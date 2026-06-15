/*
 * XREFs of ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14000D8B0
 * Callers:
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000A8CC (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x14001FB5C (-NonRTGrabSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ.c)
 *     ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x14008F470 (-NonRTCancelSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ.c)
 * Callees:
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000D8F8 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x140012544 (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 */

__int64 __fastcall CProcessingData::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  CProcessingData::CopyAPOList(a1, a1, a2);
  CProcessingData::CopyEndpointList(v4, a1 + 48, a2 + 48);
  return CProcessingData::CopyEndpointList(v5, a1 + 96, a2 + 96);
}
