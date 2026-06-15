/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1400584F8
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001C5A8 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x14001C688 (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14002A6D4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudi.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x14002A8EC (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x14002A92C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x14002A9A8 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x14003605E (_Windows--Media--Devices--AudioDeviceModulesManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CBridgeSourceEndpoint::AddBridgeSourceEndpointConsumer_::_1_::dtor$0 @ 0x1400796CF (_CBridgeSourceEndpoint--AddBridgeSourceEndpointConsumer_--_1_--dtor$0.c)
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x140087608 (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents_::_1_::dtor$3 @ 0x1400879FB (_Windows--Media--Devices--Internal--AudioDeviceBrokerDevice--InitializeEvents_--_1_--dtor$3.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x1400880EC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140088C50 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$0 @ 0x1400892DF (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$0.c)
 *     _wil::details_abi::FeatureStateData::RecordFeatureUsage_::_1_::dtor$0 @ 0x140089FE9 (_wil--details_abi--FeatureStateData--RecordFeatureUsage_--_1_--dtor$0.c)
 *     _wil::details::FeatureStateManager::SubscribeToEnabledStateChanges_::_1_::dtor$0 @ 0x14008CDBE (_wil--details--FeatureStateManager--SubscribeToEnabledStateChanges_--_1_--dtor$0.c)
 *     _wil::details::FeatureStateManager::SubscribeToUsageFlush_::_1_::dtor$0 @ 0x14008CE7D (_wil--details--FeatureStateManager--SubscribeToUsageFlush_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
