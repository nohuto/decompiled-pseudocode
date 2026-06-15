/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140026C54
 * Callers:
 *     _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::CMModulesNotificationCallback_::_1_::dtor$4 @ 0x1400824B2 (_Windows--Media--Devices--Internal--AudioDeviceBrokerDevice--CMModulesNotificationC_ea_1400824B2.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$11 @ 0x140089363 (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$11.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x14008D43F (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Win_ea_14008D43F.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
