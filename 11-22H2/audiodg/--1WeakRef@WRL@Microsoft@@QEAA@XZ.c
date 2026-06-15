/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x14007099C
 * Callers:
 *     _CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock_::_1_::dtor$0 @ 0x140035DE4 (_CDeviceGraphObjectCacheManager--GetObjectCacheForEndpoint_UnderLock_--_1_--dtor$0.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents_::_1_::dtor$0 @ 0x14003607A (_Windows--Media--Devices--AudioDeviceModulesManager--RegisterBrokerEvents_--_1_--dtor$0.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize_::_1_::dtor$1 @ 0x14003608C (_Windows--Media--Devices--Internal--AudioDeviceBroker--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectCacheManager::SaveObjectCacheForEndpoint_::_1_::dtor$0 @ 0x1400362CD (_CDeviceGraphObjectCacheManager--SaveObjectCacheForEndpoint_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectCacheManager::SaveObjectCacheForEndpoint_::_1_::dtor$1 @ 0x1400362DF (_CDeviceGraphObjectCacheManager--SaveObjectCacheForEndpoint_--_1_--dtor$1.c)
 *     _CBridgeSourceEndpoint::RuntimeClassInitialize_::_1_::dtor$2 @ 0x140079F30 (_CBridgeSourceEndpoint--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     __lambda_1b9955d17458c359845ab36b6c965754_::operator()_::_1_::dtor$0 @ 0x140081134 (__lambda_1b9955d17458c359845ab36b6c965754_--operator()_--_1_--dtor$0.c)
 *     __lambda_55ffd9a6dada497864f0060e7c2442fc_::operator()_::_1_::dtor$0 @ 0x1400813F8 (__lambda_55ffd9a6dada497864f0060e7c2442fc_--operator()_--_1_--dtor$0.c)
 *     __lambda_8ef619453896d5e01f26f7f9c9aeedcd_::operator()_::_1_::dtor$0 @ 0x140081640 (__lambda_8ef619453896d5e01f26f7f9c9aeedcd_--operator()_--_1_--dtor$0.c)
 *     __lambda_94df8e4eb6a44bb980b4bfeb2aef9d84_::operator()_::_1_::dtor$0 @ 0x1400816EC (__lambda_94df8e4eb6a44bb980b4bfeb2aef9d84_--operator()_--_1_--dtor$0.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$1 @ 0x1400838FF (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Win_ea_1400838FF.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$1 @ 0x140083AE9 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_140083AE9.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$2 @ 0x140083AF5 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_140083AF5.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$3 @ 0x140083B01 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_140083B01.c)
 *     _RpcOptionsHelper::GetRpcOptions_::_1_::dtor$0 @ 0x1400861B9 (_RpcOptionsHelper--GetRpcOptions_--_1_--dtor$0.c)
 *     _Windows::Internal::Details::GitInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs____Windows::Internal::GitPtrSupportsAgile_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs______2_::Invoke_::_1_::dtor$0 @ 0x140087FA7 (_Windows--Internal--Details--GitInvokeHelper_Windows--Foundation--ITypedEventHandler_Windows--Me.c)
 *     _Windows::Internal::Details::GitInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs____Windows::Internal::GitPtrSupportsAgile_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs______2_::Invoke_::_1_::dtor$0 @ 0x140088067 (_Windows--Internal--Details--GitInvokeHelper_Windows--Foundation--ITypedEventHandle_ea_140088067.c)
 *     _Windows::Internal::Details::GitInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager___Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs____Windows::Internal::GitPtrSupportsAgile_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager___Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs______2_::Invoke_::_1_::dtor$0 @ 0x140088127 (_Windows--Internal--Details--GitInvokeHelper_Windows--Foundation--ITypedEventHandle_ea_140088127.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x1400991FE (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::WeakRef::~WeakRef(__int64 *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(this);
}
