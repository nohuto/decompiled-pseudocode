/*
 * XREFs of ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000CE70
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140006FD4 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000A320 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000C590 (-CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STRE.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14001CF18 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140025EEC (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005C1B4 (-CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14005C650 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCProcessNode@@PEAV312@1@Z @ 0x14000CF28 (-NewNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAPEAVCN.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::NewNode(a1, a2, a1[1], 0LL);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
