/*
 * XREFs of ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14000DE14
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14000DEB0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140013870 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     _CPipeInstance::GetAPONodeAndConnection_::_1_::dtor$1 @ 0x14002B583 (_CPipeInstance--GetAPONodeAndConnection_--_1_--dtor$1.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$1 @ 0x140034821 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$1.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$2 @ 0x140034833 (_InitializeSystemEffectsInterface_--_1_--dtor$2.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$4 @ 0x140034857 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$4.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$5 @ 0x140034869 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$5.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$6 @ 0x140034B23 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$6.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$8 @ 0x140034D58 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$8.c)
 *     _CConnectionInstance::RemoveRenderConnection_::_1_::dtor$1 @ 0x140034E36 (_CConnectionInstance--RemoveRenderConnection_--_1_--dtor$1.c)
 *     _CConnectionNode::CConnectionNode_::_1_::dtor$0 @ 0x140034E91 (_CConnectionNode--CConnectionNode_--_1_--dtor$0.c)
 *     _CPipeInstance::InitializeVolumeInterface_::_1_::dtor$0 @ 0x140034EC0 (_CPipeInstance--InitializeVolumeInterface_--_1_--dtor$0.c)
 *     _CPipeInstance::InitializeVolumeInterface_::_1_::dtor$1 @ 0x140034ED2 (_CPipeInstance--InitializeVolumeInterface_--_1_--dtor$1.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$0 @ 0x140034EF6 (_InitializeSystemEffectsInterface_--_1_--dtor$0.c)
 *     _CAPONode::RegisterAPOWithProcessingHost_::_1_::dtor$0 @ 0x140034F08 (_CAPONode--RegisterAPOWithProcessingHost_--_1_--dtor$0.c)
 *     _CAPONode::CAPONode_::_1_::dtor$2 @ 0x1400351DD (_CAPONode--CAPONode_--_1_--dtor$2.c)
 *     _CAPONode::CAPONode_::_1_::dtor$3 @ 0x1400351F3 (_CAPONode--CAPONode_--_1_--dtor$3.c)
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$9 @ 0x140035546 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$9.c)
 *     _CConnectionInstance::CanDoInPlace_::_1_::dtor$0 @ 0x140035843 (_CConnectionInstance--CanDoInPlace_--_1_--dtor$0.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$7 @ 0x140035855 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$7.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$2 @ 0x140035867 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$2.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$4 @ 0x14003588B (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$4.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$9 @ 0x1400358C1 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$9.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$2 @ 0x140035C68 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$2.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$3 @ 0x140035C7A (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$2 @ 0x14005CAEF (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$2.c)
 *     _IsFixedFormatApo_::_1_::dtor$0 @ 0x14005CD2F (_IsFixedFormatApo_--_1_--dtor$0.c)
 *     _CConnectionInstance::AddCaptureConnection_::_1_::dtor$1 @ 0x1400615DA (_CConnectionInstance--AddCaptureConnection_--_1_--dtor$1.c)
 *     _CConnectionInstance::AddCaptureConnection_::_1_::dtor$3 @ 0x1400615F2 (_CConnectionInstance--AddCaptureConnection_--_1_--dtor$3.c)
 *     _CConnectionInstance::RemoveCaptureConnection_::_1_::dtor$1 @ 0x1400617DA (_CConnectionInstance--RemoveCaptureConnection_--_1_--dtor$1.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x14006EB30 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(__int64 *a1)
{
  return ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(a1);
}
