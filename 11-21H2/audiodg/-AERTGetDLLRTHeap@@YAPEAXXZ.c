/*
 * XREFs of ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C
 * Callers:
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140005DA0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14000A294 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14000BF30 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000C580 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000EF90 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     _lambda_89f25345d625e50d879fcb99a1803143_::operator() @ 0x1400108C0 (_lambda_89f25345d625e50d879fcb99a1803143_--operator().c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140010D80 (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140011C40 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140011DE0 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x1400196B0 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x14001EB20 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIIPEBGPEAXI_J3PEAUICrossPr.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140020A10 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140020E04 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140021BE0 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140021F70 (--_G-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z @ 0x1400224B0 (--_G-$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z @ 0x140027E70 (--_G-$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140027F14 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ??3CAudioProcessor@@SAXPEAX@Z @ 0x14005B60C (--3CAudioProcessor@@SAXPEAX@Z.c)
 *     ??_ECAPONode@@UEAAPEAXI@Z @ 0x1400689F0 (--_ECAPONode@@UEAAPEAXI@Z.c)
 *     wil::details::lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___::_lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___ @ 0x1400816A8 (wil--details--lambda_call__lambda_4077c0e74b282fea5d37049cc4734ddb___--_lambda_call__lambda_4077.c)
 *     ??_GCProcessorTransaction@@QEAAPEAXI@Z @ 0x140081A0C (--_GCProcessorTransaction@@QEAAPEAXI@Z.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140083680 (--_E-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140083700 (--_E-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140083780 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140083800 (--_G-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140083880 (--_E-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400838E0 (--_G-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140083940 (--_E-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140084CA4 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140084DF0 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140084F3C (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPE.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140085088 (-CreateInstance@-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJP.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140088AB0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14008D630 (--_G-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14008D6B0 (--_G-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14008D730 (--_E-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14008D790 (--_G-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008DBFC (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@AT.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14008DD48 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL.c)
 *     privateCreateSpatialCrossProcessEndpoint @ 0x14008E774 (privateCreateSpatialCrossProcessEndpoint.c)
 * Callees:
 *     <none>
 */

unsigned __int64 AERTGetDLLRTHeap(void)
{
  BOOL inited; // eax
  LPVOID Context; // [rsp+30h] [rbp+8h] BYREF

  inited = InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context);
  return (unsigned __int64)Context & -(__int64)inited;
}
