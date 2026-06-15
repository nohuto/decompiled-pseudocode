/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEBQEAVCConnectionNode@@@Z @ 0x14000DC74
 * Callers:
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000D8F8 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14001CC14 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAPEAVCNode@12@AEBQEAVCConnectionNode@@PEAV312@1@Z @ 0x14000DCAC (-NewNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAPEAVCNode@12@AEBQEA.c)
 */

__int64 __fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::AddHead(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::NewNode(a1, a2, 0LL, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
