/*
 * XREFs of ??1?$CAutoPtr@VCBridgeSinkProcessNode@@@ATL@@QEAA@XZ @ 0x14005BFF4
 * Callers:
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x14003480F (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$3 @ 0x140034845 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$2 @ 0x140034A99 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$3 @ 0x140034AAB (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$8 @ 0x140034B35 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$2 @ 0x140034CB6 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$9 @ 0x140034CC8 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$9.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$4 @ 0x140034CDA (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$12 @ 0x140034CEC (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$12.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$9 @ 0x1400358AF (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$9.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo_::_1_::dtor$1 @ 0x14005C550 (_CPipeInstance--CreateBridgeStreamPipeInstanceToTargetApo_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo_::_1_::dtor$2 @ 0x14005C55C (_CPipeInstance--CreateBridgeStreamPipeInstanceToTargetApo_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x14005CAE3 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x14005CAFB (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x14005CB07 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 *     ?Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14005D1AC (-Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PE.c)
 *     ?CreateBridgeSinkProcessNode@CBridgeSinkProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVCStreamProcessNode@@@Z @ 0x14005D508 (-CreateBridgeSinkProcessNode@CBridgeSinkProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAP.c)
 *     ?CreateBridgeSourceProcessNode@CBridgeSourceProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVCStreamProcessNode@@@Z @ 0x14005D638 (-CreateBridgeSourceProcessNode@CBridgeSourceProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
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
