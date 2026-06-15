/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x14004A22C
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400054C0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000A030 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000A150 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140015CD0 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x1400237B0 (-PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     _CSystemAudioDeviceSharedBase::SetGraphState_::_1_::dtor$0 @ 0x140034A63 (_CSystemAudioDeviceSharedBase--SetGraphState_--_1_--dtor$0.c)
 *     _CAudioPump::OutputPumpWorkRoutine_::_1_::dtor$0 @ 0x140034C60 (_CAudioPump--OutputPumpWorkRoutine_--_1_--dtor$0.c)
 *     _CAudioPump::InputPumpWorkRoutine_::_1_::dtor$0 @ 0x140038EE4 (_CAudioPump--InputPumpWorkRoutine_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::Cleanup_::_1_::dtor$0 @ 0x140057496 (_CSystemAudioDeviceExclusive--Cleanup_--_1_--dtor$0.c)
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140057700 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 *     _CSystemAudioDeviceSharedBase::Cleanup_::_1_::dtor$0 @ 0x140058B25 (_CSystemAudioDeviceSharedBase--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::DumpDeviceGraph_::_1_::dtor$0 @ 0x140058C24 (_CSystemAudioDeviceSharedBase--DumpDeviceGraph_--_1_--dtor$0.c)
 *     ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x140058D70 (-GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z.c)
 *     _CSystemAudioDeviceOffloadGraph::Cleanup_::_1_::dtor$0 @ 0x14005ADA5 (_CSystemAudioDeviceOffloadGraph--Cleanup_--_1_--dtor$0.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14005B570 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x140063EB1 (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$2 @ 0x140067D45 (_CSubmixImpl--CreateStream_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
