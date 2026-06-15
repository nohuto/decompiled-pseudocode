/*
 * XREFs of ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C
 * Callers:
 *     ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140002B30 (--_G-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140002C34 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140002CF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400034CC (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400035DC (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140005BC0 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?ReleaseConnection@CConnectionNode@@QEAAXPEAUIDeviceGraphObjectCache@@@Z @ 0x14000A7C4 (-ReleaseConnection@CConnectionNode@@QEAAXPEAUIDeviceGraphObjectCache@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000D414 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000D8F8 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ??_ECConnectionNode@@UEAAPEAXI@Z @ 0x140010170 (--_ECConnectionNode@@UEAAPEAXI@Z.c)
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x140010C00 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140010D48 (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ @ 0x14001101C (-GetFreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400118B0 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x140011F68 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x140012544 (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140015694 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ??_ECPrivateAPO@@UEAAPEAXI@Z @ 0x140015A50 (--_ECPrivateAPO@@UEAAPEAXI@Z.c)
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140015B70 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400171E0 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3W4__MIDL___M.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14001CC14 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14001F9C0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ??_ECAPONode@@UEAAPEAXI@Z @ 0x140022050 (--_ECAPONode@@UEAAPEAXI@Z.c)
 *     ??3CAudioPump@@SAXPEAX@Z @ 0x14005ED9C (--3CAudioPump@@SAXPEAX@Z.c)
 *     ??_G?$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z @ 0x14005EE50 (--_G-$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z @ 0x14005EEB0 (--_G-$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x140073E90 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     wil::details::lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___::_lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___ @ 0x14008E8B8 (wil--details--lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___--_lambda_call__lambda_4077.c)
 *     ??_GCProcessorTransaction@@QEAAPEAXI@Z @ 0x14008EE34 (--_GCProcessorTransaction@@QEAAPEAXI@Z.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400903F0 (--_E-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140090470 (--_E-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400904F0 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140090570 (--_G-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400905F0 (--_E-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140090650 (--_G-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400906B0 (--_E-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140091AA4 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140091BF0 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140091D3C (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140091E88 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     wil::details::lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___::_lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___ @ 0x140095098 (wil--details--lambda_call__lambda_a1295d98ccc7f8ed99ce5b050cf8ba33___--_lambda_call__lambda_a129.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x1400959B0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140099960 (--_G-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400999E0 (--_G-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140099A60 (--_E-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140099AC0 (--_G-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140099F0C (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@AT.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14009A058 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL.c)
 *     privateCreateSpatialCrossProcessEndpoint @ 0x14009A9E4 (privateCreateSpatialCrossProcessEndpoint.c)
 * Callees:
 *     <none>
 */

unsigned __int64 AERTGetDLLRTHeap(void)
{
  BOOL inited; // eax
  LPVOID Context; // [rsp+30h] [rbp+8h] BYREF

  inited = InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context);
  return (unsigned __int64)Context & -(__int64)inited;
}
