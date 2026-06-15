/*
 * XREFs of ??3CAudioPump@@SAXPEAX@Z @ 0x14005ED9C
 * Callers:
 *     _CProcessingData::CopyEndpointList_::_1_::dtor$0 @ 0x140034274 (_CProcessingData--CopyEndpointList_--_1_--dtor$0.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$3 @ 0x14003466D (_privateCreateCrossProcessEndpoint_--_1_--dtor$3.c)
 *     __lambda_89f25345d625e50d879fcb99a1803143_::operator()_::_1_::dtor$6 @ 0x1400356CC (__lambda_89f25345d625e50d879fcb99a1803143_--operator()_--_1_--dtor$6.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$0 @ 0x140035739 (_CProcessingData--CopyAPOList_--_1_--dtor$0.c)
 *     _CAudioProcessor::AttachEndpointToConnection_::_1_::dtor$0 @ 0x140036070 (_CAudioProcessor--AttachEndpointToConnection_--_1_--dtor$0.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140091BBE (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140091D0A (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140091E56 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140091FA2 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14009A026 (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint___--CreateInstance_--.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14009A172 (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint___--CreateInstance_--_.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$0 @ 0x14009AB14 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$0.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$1 @ 0x14009AB20 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 */

void __fastcall CAudioPump::operator delete(void *a1)
{
  void *v2; // rax
  int v3; // r8d

  v2 = (void *)AERTGetDLLRTHeap();
  AERTFree(a1, v2, v3);
}
