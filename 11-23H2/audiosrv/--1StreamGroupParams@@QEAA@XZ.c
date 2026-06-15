/*
 * XREFs of ??1StreamGroupParams@@QEAA@XZ @ 0x180016C24
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x18000FFF0 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180010920 (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x180016988 (--1CAudioStream@@UEAA@XZ.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180043A3C (-BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAU.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x1800D8694 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9228 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 * Callees:
 *     ?_Tidy@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXXZ @ 0x18004A8FC (-_Tidy@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall StreamGroupParams::~StreamGroupParams(StreamGroupParams *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    CoTaskMemFree(v2);
  std::vector<_GUID>::_Tidy((char *)this + 56);
  CoTaskMemFree(*((LPVOID *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  CoTaskMemFree(*(LPVOID *)this);
  *(_QWORD *)this = 0LL;
}
