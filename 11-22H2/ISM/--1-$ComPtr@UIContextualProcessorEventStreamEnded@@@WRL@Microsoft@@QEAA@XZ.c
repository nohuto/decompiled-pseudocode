/*
 * XREFs of ??1?$ComPtr@UIContextualProcessorEventStreamEnded@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A8F4
 * Callers:
 *     _InputProviderManager::OnSessionStatusNotification_::_1_::dtor$0 @ 0x180061CD5 (_InputProviderManager--OnSessionStatusNotification_--_1_--dtor$0.c)
 *     _GamepadInterceptionHelper::Create_::_1_::dtor$0 @ 0x18006A8B7 (_GamepadInterceptionHelper--Create_--_1_--dtor$0.c)
 *     _DevicePostureHelpers::GetChassisType_::_1_::dtor$0 @ 0x18006EA17 (_DevicePostureHelpers--GetChassisType_--_1_--dtor$0.c)
 *     _DevicePostureHelpers::GetChassisType_::_1_::dtor$1 @ 0x18006EA23 (_DevicePostureHelpers--GetChassisType_--_1_--dtor$1.c)
 *     _DevicePostureHelpers::GetChassisType_::_1_::dtor$5 @ 0x18006EA53 (_DevicePostureHelpers--GetChassisType_--_1_--dtor$5.c)
 *     _DevicePostureHelpers::GetChassisType_::_1_::dtor$6 @ 0x18006EA5F (_DevicePostureHelpers--GetChassisType_--_1_--dtor$6.c)
 *     _ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision_::_1_::dtor$0 @ 0x1800775F5 (_ContextualProcessorBuffer--EventStreamEndedAndProcessFinalDecision_--_1_--dtor$0.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800F7CEC (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<IContextualProcessorEventStreamEnded>::~ComPtr<IContextualProcessorEventStreamEnded>()
{
  return Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease();
}
