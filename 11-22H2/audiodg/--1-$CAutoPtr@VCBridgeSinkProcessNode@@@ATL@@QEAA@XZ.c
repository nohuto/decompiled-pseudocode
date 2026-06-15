/*
 * XREFs of ??1?$CAutoPtr@VCBridgeSinkProcessNode@@@ATL@@QEAA@XZ @ 0x14005C044
 * Callers:
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x14003484F (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$3 @ 0x140034885 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$2 @ 0x140034AD9 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$3 @ 0x140034AEB (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$8 @ 0x140034B75 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$2 @ 0x140034CF6 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$9 @ 0x140034D08 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$9.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$4 @ 0x140034D1A (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$12 @ 0x140034D2C (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$12.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$9 @ 0x1400358EF (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$9.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo_::_1_::dtor$1 @ 0x14005C5A0 (_CPipeInstance--CreateBridgeStreamPipeInstanceToTargetApo_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo_::_1_::dtor$2 @ 0x14005C5AC (_CPipeInstance--CreateBridgeStreamPipeInstanceToTargetApo_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x14005CB33 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x14005CB4B (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x14005CB57 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 *     ?Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14005D1FC (-Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PE.c)
 *     ?CreateBridgeSinkProcessNode@CBridgeSinkProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVCStreamProcessNode@@@Z @ 0x14005D558 (-CreateBridgeSinkProcessNode@CBridgeSinkProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAP.c)
 *     ?CreateBridgeSourceProcessNode@CBridgeSourceProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVCStreamProcessNode@@@Z @ 0x14005D688 (-CreateBridgeSourceProcessNode@CBridgeSourceProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<CBridgeSinkProcessNode>::~CAutoPtr<CBridgeSinkProcessNode>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
