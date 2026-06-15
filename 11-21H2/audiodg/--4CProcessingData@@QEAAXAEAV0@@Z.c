/*
 * XREFs of ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14008199C
 * Callers:
 *     ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x140082358 (-NonRTCancelSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ.c)
 * Callees:
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000C580 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000FDA0 (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 */

void __fastcall CProcessingData::operator=(void *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  CProcessingData::CopyAPOList(a1, (__int64)a1, a2);
  CProcessingData::CopyEndpointList(v4, (__int64)a1 + 48, a2 + 48);
  CProcessingData::CopyEndpointList(v5, (__int64)a1 + 96, a2 + 96);
}
