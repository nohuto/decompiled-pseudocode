/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001C5CC
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14001D720 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     _CSystemAudioDeviceCollection::Remove_::_1_::dtor$0 @ 0x14003663F (_CSystemAudioDeviceCollection--Remove_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$0 @ 0x140036672 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$0.c)
 *     _CStreamInstance::UnregisterResources_::_1_::dtor$0 @ 0x1400366D9 (_CStreamInstance--UnregisterResources_--_1_--dtor$0.c)
 *     _CSubmixImpl::Initialize_::_1_::dtor$3 @ 0x140036A01 (_CSubmixImpl--Initialize_--_1_--dtor$3.c)
 *     _PublishDeviceGraphWnfState_::_1_::dtor$4 @ 0x1400372B1 (_PublishDeviceGraphWnfState_--_1_--dtor$4.c)
 *     _CAudioPump::OutputPumpWorkRoutine_::_1_::dtor$1 @ 0x140038C00 (_CAudioPump--OutputPumpWorkRoutine_--_1_--dtor$1.c)
 *     _CAudioPump::OutputPumpWorkRoutine_::_1_::dtor$2 @ 0x140038C20 (_CAudioPump--OutputPumpWorkRoutine_--_1_--dtor$2.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$1 @ 0x140038C44 (_CSubmixImpl--CreateStream_--_1_--dtor$1.c)
 *     _CAPOProcessingHost::RegisterAPOWithProcessingHost_::_1_::dtor$0 @ 0x140038C9E (_CAPOProcessingHost--RegisterAPOWithProcessingHost_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$0 @ 0x140038CF6 (_CAudioDeviceGraph--Initialize_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$7 @ 0x140038D3E (_CAudioDeviceGraph--Initialize_--_1_--dtor$7.c)
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$0 @ 0x140038E23 (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$0.c)
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x1400393B5 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterDevice_::_1_::dtor$1 @ 0x140053122 (_CpuManager--RegisterDevice_--_1_--dtor$1.c)
 *     _CpuManager::RegisterProcess_::_1_::dtor$0 @ 0x140053301 (_CpuManager--RegisterProcess_--_1_--dtor$0.c)
 *     _CpuManager::RegisterThread_::_1_::dtor$0 @ 0x1400534E4 (_CpuManager--RegisterThread_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$0 @ 0x14005C777 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$1 @ 0x14005C783 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$1 @ 0x14005F929 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$7 @ 0x14005F971 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$7.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$1 @ 0x14005FBB9 (_CStreamGroup--CreateStream_--_1_--dtor$1.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$3 @ 0x14005FBD1 (_CStreamGroup--CreateStream_--_1_--dtor$3.c)
 *     _CAudioHistoryBufferManager::Add_::_1_::dtor$0 @ 0x1400634CE (_CAudioHistoryBufferManager--Add_--_1_--dtor$0.c)
 *     _CAudioHistoryBufferManager::GetAudioHistoryControlForStream_::_1_::dtor$1 @ 0x140063826 (_CAudioHistoryBufferManager--GetAudioHistoryControlForStream_--_1_--dtor$1.c)
 *     _CAPOProcessingHost::AddEndpointPropertyChangeNotificationClient_::_1_::dtor$2 @ 0x1400654E1 (_CAPOProcessingHost--AddEndpointPropertyChangeNotificationClient_--_1_--dtor$2.c)
 *     _CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler_::_1_::dtor$0 @ 0x140065860 (_CAPOProcessingHost--GetAudioSystemEffectPropertyChangeNotificationHandler_--_1_--dtor$0.c)
 *     _CAPOProcessingHost::GetEndpointNotificationHandler_::_1_::dtor$0 @ 0x140065BD2 (_CAPOProcessingHost--GetEndpointNotificationHandler_--_1_--dtor$0.c)
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140066420 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 *     _CAPOServiceProvider::GetApoWorkQueueId_::_1_::dtor$0 @ 0x140067796 (_CAPOServiceProvider--GetApoWorkQueueId_--_1_--dtor$0.c)
 *     _CAPOProcessingHostObject::QueueNotification_::_1_::dtor$0 @ 0x140068274 (_CAPOProcessingHostObject--QueueNotification_--_1_--dtor$0.c)
 *     _CAPOProcessingHostObject::StartSendingNotifications_::_1_::dtor$0 @ 0x140068548 (_CAPOProcessingHostObject--StartSendingNotifications_--_1_--dtor$0.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient_::_1_::dtor$0 @ 0x140069694 (_CAPOEndpointNotificationsHandler--AddEndpointPropertyChangeNotificationClient_--_1_--dtor$0.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient_::_1_::dtor$0 @ 0x1400697B2 (_CAPOEndpointNotificationsHandler--AddEndpointVolumeNotificationClient_--_1_--dtor$0.c)
 *     _CAPOEndpointNotificationsHandler::OnPropertyValueChanged_::_1_::dtor$1 @ 0x140069D96 (_CAPOEndpointNotificationsHandler--OnPropertyValueChanged_--_1_--dtor$1.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient_::_1_::dtor$0 @ 0x14006A7EB (_CAudioSystemEffectsPropertyChangeNotificationsHandler--AddNotificationClient_--_1_--dtor$0.c)
 *     _CAudioPump::CheckForPause_::_1_::dtor$0 @ 0x14006B346 (_CAudioPump--CheckForPause_--_1_--dtor$0.c)
 *     _CAudioPump::CheckForPause_::_1_::dtor$1 @ 0x14006B352 (_CAudioPump--CheckForPause_--_1_--dtor$1.c)
 *     _CRTThreadManager::GetApoWorkQueueId_::_1_::dtor$1 @ 0x14006C4AD (_CRTThreadManager--GetApoWorkQueueId_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(a1);
}
