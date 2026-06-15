/*
 * XREFs of WPP_SF_Idd @ 0x1800DDCD4
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x180010920 (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Idd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_a12ee458e5d235ad00fc6562119251bf_Traceguids, 10LL, (__int64 *)va);
}
