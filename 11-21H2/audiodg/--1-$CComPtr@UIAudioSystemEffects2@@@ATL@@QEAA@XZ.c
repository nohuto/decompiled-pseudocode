/*
 * XREFs of ??1?$CComPtr@UIAudioSystemEffects2@@@ATL@@QEAA@XZ @ 0x1400173D4
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x140017630 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     _CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor$0 @ 0x140036FC0 (_CPipeInstance--DeactivateAPOsAndRemoveConnections_--_1_--dtor$0.c)
 *     _CConnectionInstance::RemoveRenderConnection_::_1_::dtor$0 @ 0x140036FE0 (_CConnectionInstance--RemoveRenderConnection_--_1_--dtor$0.c)
 *     _CAPONode::CAPONode_::_1_::dtor$0 @ 0x140037780 (_CAPONode--CAPONode_--_1_--dtor$0.c)
 *     _CAPONode::CAPONode_::_1_::dtor$2 @ 0x1400377C0 (_CAPONode--CAPONode_--_1_--dtor$2.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$17 @ 0x140037D50 (_CProcessingData--CopyAPOList_--_1_--dtor$17.c)
 *     _CProcessingData::CopyAPOList_::_1_::dtor$19 @ 0x140037D90 (_CProcessingData--CopyAPOList_--_1_--dtor$19.c)
 *     __lambda_89f25345d625e50d879fcb99a1803143_::operator()_::_1_::dtor$14 @ 0x140037FF0 (__lambda_89f25345d625e50d879fcb99a1803143_--operator()_--_1_--dtor$14.c)
 *     _CPipeInstance::CreateAPOConnectionList_::_1_::dtor$0 @ 0x1400386F0 (_CPipeInstance--CreateAPOConnectionList_--_1_--dtor$0.c)
 *     _CPipeInstance::GetVirtualSurroundAPO_::_1_::dtor$0 @ 0x140038910 (_CPipeInstance--GetVirtualSurroundAPO_--_1_--dtor$0.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$1 @ 0x140038930 (_InitializeSystemEffectsInterface_--_1_--dtor$1.c)
 *     _CPipeInstance::GetAdaptiveSpatialAudioRenderer_::_1_::dtor$0 @ 0x140038950 (_CPipeInstance--GetAdaptiveSpatialAudioRenderer_--_1_--dtor$0.c)
 *     _CPipeInstance::GetAdaptiveSpatialAudioRenderer_::_1_::dtor$2 @ 0x140038970 (_CPipeInstance--GetAdaptiveSpatialAudioRenderer_--_1_--dtor$2.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$2 @ 0x1400389B0 (_InitializeSystemEffectsInterface_--_1_--dtor$2.c)
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$16 @ 0x1400389D0 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$16.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$0 @ 0x140038A30 (_InitializeSystemEffectsInterface_--_1_--dtor$0.c)
 *     _CPipeInstance::SetModulesManagerOnAPOs_::_1_::dtor$2 @ 0x140038BC0 (_CPipeInstance--SetModulesManagerOnAPOs_--_1_--dtor$2.c)
 *     _CPipeInstance::ResetAPOs_::_1_::dtor$0 @ 0x14003935B (_CPipeInstance--ResetAPOs_--_1_--dtor$0.c)
 *     _CPipeInstance::OnDisconnectedFromRightSubmix_::_1_::dtor$1 @ 0x14003937F (_CPipeInstance--OnDisconnectedFromRightSubmix_--_1_--dtor$1.c)
 *     _CApoEndpoint::RuntimeClassInitialize_::_1_::dtor$0 @ 0x14005027F (_CApoEndpoint--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CPipeInstance::GetAPONodeAndConnection_::_1_::dtor$0 @ 0x140059F08 (_CPipeInstance--GetAPONodeAndConnection_--_1_--dtor$0.c)
 *     _CConnectionInstance::AddCaptureConnection_::_1_::dtor$0 @ 0x14005D5B6 (_CConnectionInstance--AddCaptureConnection_--_1_--dtor$0.c)
 *     _CConnectionInstance::AddCaptureConnection_::_1_::dtor$2 @ 0x14005D5CE (_CConnectionInstance--AddCaptureConnection_--_1_--dtor$2.c)
 *     _CConnectionInstance::RemoveCaptureConnection_::_1_::dtor$0 @ 0x14005D7B6 (_CConnectionInstance--RemoveCaptureConnection_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComPtr<IAudioSystemEffects2>::~CComPtr<IAudioSystemEffects2>(__int64 *a1)
{
  return ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(a1);
}
