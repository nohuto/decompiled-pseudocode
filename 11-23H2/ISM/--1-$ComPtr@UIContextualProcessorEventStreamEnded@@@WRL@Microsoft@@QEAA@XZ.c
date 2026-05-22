/*
 * XREFs of ??1?$ComPtr@UIContextualProcessorEventStreamEnded@@@WRL@Microsoft@@QEAA@XZ @ 0x1800594A0
 * Callers:
 *     _InputProviderManager::OnSessionStatusNotification_::_1_::dtor$0 @ 0x18005959D (_InputProviderManager--OnSessionStatusNotification_--_1_--dtor$0.c)
 *     _DevicePostureHelpers::GetChassisType_::_1_::dtor$0 @ 0x18005CD70 (_DevicePostureHelpers--GetChassisType_--_1_--dtor$0.c)
 *     _DevicePostureHelpers::GetChassisType_::_1_::dtor$1 @ 0x18005CD7C (_DevicePostureHelpers--GetChassisType_--_1_--dtor$1.c)
 *     _DevicePostureHelpers::GetChassisType_::_1_::dtor$5 @ 0x18005CDAC (_DevicePostureHelpers--GetChassisType_--_1_--dtor$5.c)
 *     _DevicePostureHelpers::GetChassisType_::_1_::dtor$6 @ 0x18005CDB8 (_DevicePostureHelpers--GetChassisType_--_1_--dtor$6.c)
 *     _ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision_::_1_::dtor$0 @ 0x180063AE5 (_ContextualProcessorBuffer--EventStreamEndedAndProcessFinalDecision_--_1_--dtor$0.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E8D6C (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<IContextualProcessorEventStreamEnded>::~ComPtr<IContextualProcessorEventStreamEnded>()
{
  return Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease();
}
