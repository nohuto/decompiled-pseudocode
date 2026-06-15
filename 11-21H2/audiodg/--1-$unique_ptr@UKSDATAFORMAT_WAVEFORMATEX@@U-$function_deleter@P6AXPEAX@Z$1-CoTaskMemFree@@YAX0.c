/*
 * XREFs of ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004CCC0
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14001D720 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$7 @ 0x1400367B2 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$7.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$8 @ 0x1400367C4 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$8.c)
 *     _CAudioProcessor::ValidateConnectionFormatMatchesEndpoint_::_1_::dtor$0 @ 0x140036EA0 (_CAudioProcessor--ValidateConnectionFormatMatchesEndpoint_--_1_--dtor$0.c)
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$0 @ 0x140037920 (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$10 @ 0x140038870 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$10.c)
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::dtor$3 @ 0x140039608 (_CAPOProcessingHost--RegisterAPONotifications_--_1_--dtor$3.c)
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14007BA10 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$9 @ 0x14007BFF1 (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$9.c)
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
