/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140050AB0
 * Callers:
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$10 @ 0x1400371C0 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$14 @ 0x1400385F8 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$14.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$0 @ 0x140038C32 (_CSubmixImpl--CreateStream_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$4 @ 0x140059826 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x140059D80 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$0 @ 0x14005F91D (_CStreamGroup--CreateBridgeStream_--_1_--dtor$0.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x1400629B7 (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(CPipeInstance **a1)
{
  ATL::CAutoPtr<CPipeInstance>::Free(a1);
}
