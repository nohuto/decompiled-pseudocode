/*
 * XREFs of ??1?$unique_ptr@UAUDIO_NOTIFICATION_BLOCK@@U?$default_delete@UAUDIO_NOTIFICATION_BLOCK@@@std@@@std@@QEAA@XZ @ 0x18004B11C
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x18000FFF0 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N_N66W4_BridgeStreamProperties@@6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x18006F1CC (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$13 @ 0x18007046D (_InitializeStreamAndModeDescriptors_--_1_--dtor$13.c)
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800ED1C0 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<AUDIO_NOTIFICATION_BLOCK>::~unique_ptr<AUDIO_NOTIFICATION_BLOCK>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, 0x50uLL);
}
