/*
 * XREFs of ??3CAudioProcessor@@SAXPEAX@Z @ 0x14005B60C
 * Callers:
 *     _CAudioProcessor::AttachEndpointToConnection_::_1_::dtor$0 @ 0x140036EC4 (_CAudioProcessor--AttachEndpointToConnection_--_1_--dtor$0.c)
 *     _CProcessingData::CopyEndpointList_::_1_::dtor$0 @ 0x14003731E (_CProcessingData--CopyEndpointList_--_1_--dtor$0.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$0 @ 0x140037D30 (_CProcessingData--CopyAPOList_--_1_--dtor$0.c)
 *     __lambda_89f25345d625e50d879fcb99a1803143_::operator()_::_1_::dtor$7 @ 0x140037FB0 (__lambda_89f25345d625e50d879fcb99a1803143_--operator()_--_1_--dtor$7.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$3 @ 0x14003905C (_privateCreateCrossProcessEndpoint_--_1_--dtor$3.c)
 *     _ATL::CComCreator_ATL::CComObject_CAudioProcessor___::CreateInstance_::_1_::dtor$0 @ 0x1400390D9 (_ATL--CComCreator_ATL--CComObject_CAudioProcessor___--CreateInstance_--_1_--dtor$0.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140084DBE (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140084F0A (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140085056 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x1400851A2 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14008DD16 (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint___--CreateInstance_--.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14008DE62 (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint___--CreateInstance_--_.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$0 @ 0x14008E8B2 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$0.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$1 @ 0x14008E8BE (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400117E0 (-AERTFree@@YAXPEAX0@Z.c)
 */

void __fastcall CAudioProcessor::operator delete(void *a1)
{
  void *v2; // rax
  int v3; // r8d

  v2 = (void *)AERTGetDLLRTHeap();
  AERTFree(a1, v2, v3);
}
