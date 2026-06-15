/*
 * XREFs of ??0CConnectionNode@@QEAA@AEAV0@@Z @ 0x14000E594
 * Callers:
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000D8F8 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14001CC14 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 * Callees:
 *     ??4CConnectionNode@@QEAAXAEAV0@@Z @ 0x14000DAEC (--4CConnectionNode@@QEAAXAEAV0@@Z.c)
 */

// Hidden C++ exception states: #wind=2
CConnectionNode *__fastcall CConnectionNode::CConnectionNode(CConnectionNode *this, struct CConnectionNode *a2)
{
  *(_QWORD *)this = &CConnectionNode::`vftable';
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  CConnectionNode::operator=((__int64)this, (__int64)a2);
  return this;
}
