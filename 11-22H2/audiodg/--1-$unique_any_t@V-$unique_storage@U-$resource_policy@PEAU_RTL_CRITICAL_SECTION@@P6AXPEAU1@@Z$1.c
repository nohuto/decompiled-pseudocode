/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140008288
 * Callers:
 *     ?OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x1400021F0 (-OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140002CF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400054C0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140007DF0 (-OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400085F0 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140008860 (-AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14001E010 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     _CAPOProcessingHost::RegisterAPOWithProcessingHost_::_1_::dtor$0 @ 0x140034732 (_CAPOProcessingHost--RegisterAPOWithProcessingHost_--_1_--dtor$0.c)
 *     _CSubmixImpl::OnConnectedToStream_::_1_::dtor$2 @ 0x140034947 (_CSubmixImpl--OnConnectedToStream_--_1_--dtor$2.c)
 *     _CAudioPump::OutputPumpWorkRoutine_::_1_::dtor$1 @ 0x140034960 (_CAudioPump--OutputPumpWorkRoutine_--_1_--dtor$1.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$0 @ 0x1400349CA (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$0.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$2 @ 0x1400349EE (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$2.c)
 *     _CSubmixImpl::OnConnectedToStream_::_1_::dtor$0 @ 0x140034A43 (_CSubmixImpl--OnConnectedToStream_--_1_--dtor$0.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x140034C8D (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CAudioPump::OutputPumpWorkRoutine_::_1_::dtor$2 @ 0x140034CC0 (_CAudioPump--OutputPumpWorkRoutine_--_1_--dtor$2.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$0 @ 0x140035F2F (_CAudioDeviceGraph--Initialize_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$7 @ 0x140035F9B (_CAudioDeviceGraph--Initialize_--_1_--dtor$7.c)
 *     _GraphStreamingResourceManager::RegisterThread_::_1_::dtor$0 @ 0x1400364E2 (_GraphStreamingResourceManager--RegisterThread_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x140036666 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CAudioPump::CheckForPause_::_1_::dtor$0 @ 0x140038AE9 (_CAudioPump--CheckForPause_--_1_--dtor$0.c)
 *     _CAudioPump::CheckForPause_::_1_::dtor$1 @ 0x140038AF5 (_CAudioPump--CheckForPause_--_1_--dtor$1.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x1400547AA (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x140054999 (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x140054B8C (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Remove_::_1_::dtor$0 @ 0x140056804 (_CSystemAudioDeviceCollection--Remove_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Cleanup_::_1_::dtor$0 @ 0x14005F142 (_CAudioDeviceGraph--Cleanup_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$0 @ 0x14006083C (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$1 @ 0x140060848 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::dtor$1 @ 0x140063BBD (_CStreamGroup--CreateBridgeStreamToTargetStreamGroup_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::dtor$7 @ 0x140063C05 (_CStreamGroup--CreateBridgeStreamToTargetStreamGroup_--_1_--dtor$7.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x140063F0D (_CStreamGroup--CreateStream_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$3 @ 0x140063F25 (_CStreamGroup--CreateStream_--_1_--dtor$3.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$1 @ 0x140067D89 (_CSubmixImpl--CreateStream_--_1_--dtor$1.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$8 @ 0x140067DDD (_CSubmixImpl--CreateStream_--_1_--dtor$8.c)
 *     _CAudioHistoryBufferManager::Add_::_1_::dtor$0 @ 0x1400696C8 (_CAudioHistoryBufferManager--Add_--_1_--dtor$0.c)
 *     _CAudioHistoryBufferManager::GetAudioHistoryControlForStream_::_1_::dtor$1 @ 0x140069A3A (_CAudioHistoryBufferManager--GetAudioHistoryControlForStream_--_1_--dtor$1.c)
 *     _CAPOProcessingHost::AddEndpointPropertyChangeNotificationClient_::_1_::dtor$1 @ 0x14006C380 (_CAPOProcessingHost--AddEndpointPropertyChangeNotificationClient_--_1_--dtor$1.c)
 *     _CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler_::_1_::dtor$0 @ 0x14006C74D (_CAPOProcessingHost--GetAudioSystemEffectPropertyChangeNotificationHandler_--_1_--dtor$0.c)
 *     _CAPOProcessingHost::GetEndpointNotificationHandler_::_1_::dtor$0 @ 0x14006CEDB (_CAPOProcessingHost--GetEndpointNotificationHandler_--_1_--dtor$0.c)
 *     _CAPOProcessingHost::GetMicBoostNotificationHandler_::_1_::dtor$0 @ 0x14006D335 (_CAPOProcessingHost--GetMicBoostNotificationHandler_--_1_--dtor$0.c)
 *     _CAPOServiceProvider::GetApoWorkQueueId_::_1_::dtor$0 @ 0x14006F36F (_CAPOServiceProvider--GetApoWorkQueueId_--_1_--dtor$0.c)
 *     _CAPOProcessingHostObject::QueueNotification_::_1_::dtor$0 @ 0x14007019C (_CAPOProcessingHostObject--QueueNotification_--_1_--dtor$0.c)
 *     _CAPOProcessingHostObject::StartSendingNotifications_::_1_::dtor$0 @ 0x1400704A9 (_CAPOProcessingHostObject--StartSendingNotifications_--_1_--dtor$0.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient_::_1_::dtor$0 @ 0x140071973 (_CAPOEndpointNotificationsHandler--AddEndpointPropertyChangeNotificationClient_--_1_--dtor$0.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient_::_1_::dtor$0 @ 0x140071B15 (_CAPOEndpointNotificationsHandler--AddEndpointVolumeNotificationClient_--_1_--dtor$0.c)
 *     _CAPOEndpointNotificationsHandler::OnNotifyVolume2_::_1_::dtor$0 @ 0x140071FDA (_CAPOEndpointNotificationsHandler--OnNotifyVolume2_--_1_--dtor$0.c)
 *     _CAPOEndpointNotificationsHandler::OnNotifyVolume_::_1_::dtor$0 @ 0x1400721C7 (_CAPOEndpointNotificationsHandler--OnNotifyVolume_--_1_--dtor$0.c)
 *     _CAPOEndpointNotificationsHandler::OnPropertyValueChanged_::_1_::dtor$1 @ 0x1400723CD (_CAPOEndpointNotificationsHandler--OnPropertyValueChanged_--_1_--dtor$1.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient_::_1_::dtor$0 @ 0x140072DCB (_CAudioSystemEffectsPropertyChangeNotificationsHandler--AddNotificationClient_--_1_--dtor$0.c)
 *     _CRTThreadManager::GetApoWorkQueueId_::_1_::dtor$1 @ 0x140074C2B (_CRTThreadManager--GetApoWorkQueueId_--_1_--dtor$1.c)
 *     _CDeviceOrientationNotificationsHandler::AddNotificationClient_::_1_::dtor$0 @ 0x140076E2F (_CDeviceOrientationNotificationsHandler--AddNotificationClient_--_1_--dtor$0.c)
 *     _CMicBoostNotificationsHandler::AddNotificationClient_::_1_::dtor$0 @ 0x14007811F (_CMicBoostNotificationsHandler--AddNotificationClient_--_1_--dtor$0.c)
 *     _CBridgeSourceEndpoint::RuntimeClassInitialize_::_1_::dtor$3 @ 0x140079F3C (_CBridgeSourceEndpoint--RuntimeClassInitialize_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
