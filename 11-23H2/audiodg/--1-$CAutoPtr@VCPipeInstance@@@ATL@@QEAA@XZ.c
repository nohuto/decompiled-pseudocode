/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x14004A248
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400054C0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$10 @ 0x140034B47 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$14 @ 0x140034D6A (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$14.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo_::_1_::dtor$4 @ 0x14005C568 (_CPipeInstance--CreateBridgeStreamPipeInstanceToTargetApo_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x14005CB13 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::dtor$0 @ 0x140063B61 (_CStreamGroup--CreateBridgeStreamToTargetStreamGroup_--_1_--dtor$0.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$0 @ 0x140067D2D (_CSubmixImpl--CreateStream_--_1_--dtor$0.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x14006841B (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
CPipeInstance *__fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(CPipeInstance **a1)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1);
}
