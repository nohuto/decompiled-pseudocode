/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140060DB8
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x1400218B4 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x14002A49C (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x140039145 (_Windows--Media--Devices--AudioDeviceModulesManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents_::_1_::dtor$3 @ 0x14007A897 (_Windows--Media--Devices--Internal--AudioDeviceBrokerDevice--InitializeEvents_--_1_--dtor$3.c)
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14007BA10 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$0 @ 0x14007BF85 (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$0.c)
 *     _wil::details_abi::FeatureStateData::RecordFeatureUsage_::_1_::dtor$0 @ 0x14007CC74 (_wil--details_abi--FeatureStateData--RecordFeatureUsage_--_1_--dtor$0.c)
 *     _wil::details::FeatureStateManager::SubscribeToEnabledStateChanges_::_1_::dtor$0 @ 0x14007F958 (_wil--details--FeatureStateManager--SubscribeToEnabledStateChanges_--_1_--dtor$0.c)
 *     _wil::details::FeatureStateManager::SubscribeToUsageFlush_::_1_::dtor$0 @ 0x14007FA0F (_wil--details--FeatureStateManager--SubscribeToUsageFlush_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(a1);
}
