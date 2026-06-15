/*
 * XREFs of ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14000DE14
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14000DEB0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140013870 (-IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_00.c)
 *     _CPipeInstance::GetAPONodeAndConnection_::_1_::dtor$1 @ 0x14002B5BF (_CPipeInstance--GetAPONodeAndConnection_--_1_--dtor$1.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$1 @ 0x140034861 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$1.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$2 @ 0x140034873 (_InitializeSystemEffectsInterface_--_1_--dtor$2.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$4 @ 0x140034897 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$4.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$5 @ 0x1400348A9 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$5.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$6 @ 0x140034B63 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$6.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$8 @ 0x140034D98 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$8.c)
 *     _CConnectionInstance::RemoveRenderConnection_::_1_::dtor$1 @ 0x140034E76 (_CConnectionInstance--RemoveRenderConnection_--_1_--dtor$1.c)
 *     _CConnectionNode::CConnectionNode_::_1_::dtor$0 @ 0x140034ED1 (_CConnectionNode--CConnectionNode_--_1_--dtor$0.c)
 *     _CPipeInstance::InitializeVolumeInterface_::_1_::dtor$0 @ 0x140034F00 (_CPipeInstance--InitializeVolumeInterface_--_1_--dtor$0.c)
 *     _CPipeInstance::InitializeVolumeInterface_::_1_::dtor$1 @ 0x140034F12 (_CPipeInstance--InitializeVolumeInterface_--_1_--dtor$1.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$0 @ 0x140034F36 (_InitializeSystemEffectsInterface_--_1_--dtor$0.c)
 *     _CAPONode::RegisterAPOWithProcessingHost_::_1_::dtor$0 @ 0x140034F48 (_CAPONode--RegisterAPOWithProcessingHost_--_1_--dtor$0.c)
 *     _CAPONode::CAPONode_::_1_::dtor$2 @ 0x14003521D (_CAPONode--CAPONode_--_1_--dtor$2.c)
 *     _CAPONode::CAPONode_::_1_::dtor$3 @ 0x140035233 (_CAPONode--CAPONode_--_1_--dtor$3.c)
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$9 @ 0x140035586 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$9.c)
 *     _CConnectionInstance::CanDoInPlace_::_1_::dtor$0 @ 0x140035883 (_CConnectionInstance--CanDoInPlace_--_1_--dtor$0.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$7 @ 0x140035895 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$7.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$2 @ 0x1400358A7 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$2.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$4 @ 0x1400358CB (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$4.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$9 @ 0x140035901 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$9.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$2 @ 0x140035CA8 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$2.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$3 @ 0x140035CBA (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$2 @ 0x14005CB3F (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$2.c)
 *     _IsFixedFormatApo_::_1_::dtor$0 @ 0x14005CD7F (_IsFixedFormatApo_--_1_--dtor$0.c)
 *     _CConnectionInstance::AddCaptureConnection_::_1_::dtor$1 @ 0x14006162A (_CConnectionInstance--AddCaptureConnection_--_1_--dtor$1.c)
 *     _CConnectionInstance::AddCaptureConnection_::_1_::dtor$3 @ 0x140061642 (_CConnectionInstance--AddCaptureConnection_--_1_--dtor$3.c)
 *     _CConnectionInstance::RemoveCaptureConnection_::_1_::dtor$1 @ 0x14006182A (_CConnectionInstance--RemoveCaptureConnection_--_1_--dtor$1.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x14006EB80 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(__int64 *a1)
{
  return ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(a1);
}
