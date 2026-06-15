/*
 * XREFs of ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A200
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400054C0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140007820 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140015CD0 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14001624C (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001B78C (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ?GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x14001C8E0 (-GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU-$IVector@PEAV.c)
 *     ?ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEndpoint@@@Z @ 0x14001CDFC (-ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEn.c)
 *     ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x14001D9D0 (-Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEvent.c)
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$0 @ 0x140035307 (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$6 @ 0x140035BC6 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$6.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$10 @ 0x140035BFC (_FillAPOInitSystemEffectsStructure_--_1_--dtor$10.c)
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::dtor$3 @ 0x140035FE0 (_CAPOProcessingHost--RegisterAPONotifications_--_1_--dtor$3.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$8 @ 0x140035FF2 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$8.c)
 *     _CAudioProcessor::ValidateConnectionFormatMatchesEndpoint_::_1_::dtor$0 @ 0x1400360D7 (_CAudioProcessor--ValidateConnectionFormatMatchesEndpoint_--_1_--dtor$0.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14004F28C (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x14004F473 (_FillAuxiliaryInputInitStruct_--_1_--dtor$2.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14006829C (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400773B0 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140088C50 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$9 @ 0x14008934B (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$9.c)
 *     ?SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14008BE40 (-SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
