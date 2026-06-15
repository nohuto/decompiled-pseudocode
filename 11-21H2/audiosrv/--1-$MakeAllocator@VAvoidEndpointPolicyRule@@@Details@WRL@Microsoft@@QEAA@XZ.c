/*
 * XREFs of ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800C6A24
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x180003500 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180013460 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180016FE0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x18001A2C0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800397C0 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@K.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x180062D4C (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNo.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_BluetoothControls::BluetoothMute_BluetoothControls::BluetoothMute_unsigned_short___&_BluetoothControls::BluetoothMute___IControlChangeNotify___&__::_1_::dtor$0 @ 0x180062E3B (_Microsoft--WRL--Details--MakeAndInitialize_BluetoothControls--BluetoothMute_BluetoothControls--.c)
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolume@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x180062E5C (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChange.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_BluetoothControls::BluetoothVolume_BluetoothControls::BluetoothVolume_unsigned_short___&_BluetoothControls::BluetoothVolume___IControlChangeNotify___&__::_1_::dtor$0 @ 0x180062F4B (_Microsoft--WRL--Details--MakeAndInitialize_BluetoothControls--BluetoothVolume_BluetoothControls.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Sarm::CSpatialAudioResourceManager_ISpatialAudioResourceManager_IAudioPolicyManager___&__::_1_::dtor$0 @ 0x18006C700 (_Microsoft--WRL--Details--MakeAndInitialize_Sarm--CSpatialAudioResourceManager_ISpatialAudioReso.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__::_1_::dtor$0 @ 0x18006D740 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__--_1_--.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristicsCache_IEndpointCharacteristicsCache_IPolicyConfigInternal___&__tlgProvider_t_const___&__::_1_::dtor$0 @ 0x18006EAFC (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristicsCache_IEndpointCharacteristi.c)
 *     _Microsoft::WRL::Details::Make_AtmosCheck__::_1_::dtor$1 @ 0x1800713B2 (_Microsoft--WRL--Details--Make_AtmosCheck__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateReader_SpatialAudioDeviceStateReader_unsigned_short_const___&_IPropertyStore___&__::_1_::dtor$0 @ 0x1800713E8 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateReader_SpatialAudioDeviceStat.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_BluetoothControls::BluetoothMute_IMuteControlHandler_IMMDevice___&_IControlChangeNotify___&__::_1_::dtor$0 @ 0x1800C639C (_Microsoft--WRL--Details--MakeAndInitialize_BluetoothControls--BluetoothMute_IMuteControlHandler.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_BluetoothControls::BluetoothVolume_IVolumeControlHandler_IMMDevice___&_IControlChangeNotify___&__::_1_::dtor$0 @ 0x1800C649C (_Microsoft--WRL--Details--MakeAndInitialize_BluetoothControls--BluetoothVolume_IVolumeControlHan.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioEffectsWatcher_IAudioEffectsWatcher_unsigned_short_const___&_unsigned_long_&_int_&_enum_DiscoverySettings_&__::_1_::dtor$0 @ 0x1800D25D0 (_Microsoft--WRL--Details--MakeAndInitialize_AudioEffectsWatcher_IAudioEffectsWatcher_unsigned_sh.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioEffectsWatcher::CMMNotificationDelegator_IMMNotificationClient_unsigned_short_const___&_void____::_1_::dtor$0 @ 0x1800D26E5 (_Microsoft--WRL--Details--MakeAndInitialize_AudioEffectsWatcher--CMMNotificationDelegator_IMMNot.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamGroupParams___&_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&_unsigned_long_&__::_1_::dtor$0 @ 0x1800F66FF (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamG.c)
 *     _Microsoft::WRL::Details::Make_ResourceGroupInstance_unsigned___int64_&_ATL::CComPtr_IKsControl__&_unsigned_short_(&)[257]_unsigned_long_&__::_1_::dtor$1 @ 0x180109579 (_Microsoft--WRL--Details--Make_ResourceGroupInstance_unsigned___int64_-_ATL--CComPt_ea_180109579.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProcess___&_enum__AUDIO_STREAM_EXTENDED_CATEGORY_unsigned_short_const___&_enum___MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001_&__::_1_::dtor$0 @ 0x18010F177 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProces.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_DialogSession_DialogSession_IAudioProcess___unsigned_short_const___&__::_1_::dtor$0 @ 0x18010F27F (_Microsoft--WRL--Details--MakeAndInitialize_DialogSession_DialogSession_IAudioProcess___unsigned.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualAudioSessionInfo_VirtualAudioSessionInfo_IAudioProcess___&_unsigned_short_const___&_bool_bool_enum__AudioSessionState__::_1_::dtor$0 @ 0x18010FA75 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualAudioSessionInfo_VirtualAudioSessionInfo_IAud.c)
 *     _Microsoft::WRL::Details::Make_CBtAudioResourceManager__GUID_const_&__::_1_::dtor$1 @ 0x180113697 (_Microsoft--WRL--Details--Make_CBtAudioResourceManager__GUID_const_-__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__::_1_::dtor$0 @ 0x180125554 (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__--_1_.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AvoidEndpointPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$0 @ 0x1801309DB (_Microsoft--WRL--Details--MakeAndInitialize_AvoidEndpointPolicyRule_IPolicyRule_IAudioProcess___.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CommunicationsRemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$0 @ 0x180130AE6 (_Microsoft--WRL--Details--MakeAndInitialize_CommunicationsRemapPolicyRule_IPolicyRule_IAudioProc.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$0 @ 0x180130BE7 (_Microsoft--WRL--Details--MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___-__Dynam.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDevicePropertyWriter_SpatialAudioDevicePropertyWriter_unsigned_short_const___&_IPropertyStore___&__::_1_::dtor$0 @ 0x180135564 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDevicePropertyWriter_SpatialAudioDeviceP.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderProperties__GUID_const_&_int_&__::_1_::dtor$0 @ 0x1801388DA (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderPro.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataDictionary_enum_DictionaryLoadKind__GUID_const_&_unsigned_short_&_std::nullptr_t_unsigned_char___&_unsigned_int_&__::_1_::dtor$0 @ 0x18013A762 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataD.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice___&_unsigned_int_&__tagpropertykey_const___&__::_1_::dtor$0 @ 0x18014E1F6 (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice___-_un.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
