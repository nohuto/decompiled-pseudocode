/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x140055290
 * Callers:
 *     _CSystemAudioDeviceSharedBase::Cleanup_::_1_::dtor$0 @ 0x14003662D (_CSystemAudioDeviceSharedBase--Cleanup_--_1_--dtor$0.c)
 *     _CAudioPump::OutputPumpWorkRoutine_::_1_::dtor$0 @ 0x140038BE0 (_CAudioPump--OutputPumpWorkRoutine_--_1_--dtor$0.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$2 @ 0x140038C56 (_CSubmixImpl--CreateStream_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceSharedBase::SetGraphState_::_1_::dtor$0 @ 0x1400394CC (_CSystemAudioDeviceSharedBase--SetGraphState_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::Cleanup_::_1_::dtor$0 @ 0x1400554E6 (_CSystemAudioDeviceExclusive--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::DumpDeviceGraph_::_1_::dtor$0 @ 0x140056754 (_CSystemAudioDeviceSharedBase--DumpDeviceGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::Cleanup_::_1_::dtor$0 @ 0x140057E85 (_CSystemAudioDeviceOffloadGraph--Cleanup_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x14005FBAD (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
 *     _CAudioPump::InputPumpWorkRoutine_::_1_::dtor$0 @ 0x14006B942 (_CAudioPump--InputPumpWorkRoutine_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
