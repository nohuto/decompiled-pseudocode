/*
 * XREFs of ??1?$CComQIPtr@UIAudioDeviceEndpoint2@@$1?_GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63@@3U__s_GUID@@B@ATL@@QEAA@XZ @ 0x14004F9A4
 * Callers:
 *     _CPipeInstance::Stop_::_1_::dtor$0 @ 0x140036963 (_CPipeInstance--Stop_--_1_--dtor$0.c)
 *     _GetMaxSupportedConnectionVersion_::_1_::dtor$0 @ 0x140038072 (_GetMaxSupportedConnectionVersion_--_1_--dtor$0.c)
 *     _GetMaxSupportedConnectionVersion_::_1_::dtor$1 @ 0x140038084 (_GetMaxSupportedConnectionVersion_--_1_--dtor$1.c)
 *     _CAudioDeviceGraph::RegisterSpatialPipe_::_1_::dtor$1 @ 0x1400388D4 (_CAudioDeviceGraph--RegisterSpatialPipe_--_1_--dtor$1.c)
 *     _CAudioDeviceGraph::RegisterSpatialPipe_::_1_::dtor$3 @ 0x1400388F0 (_CAudioDeviceGraph--RegisterSpatialPipe_--_1_--dtor$3.c)
 *     _CPipeInstance::SetModulesManagerOnAPOs_::_1_::dtor$1 @ 0x140038BA0 (_CPipeInstance--SetModulesManagerOnAPOs_--_1_--dtor$1.c)
 *     _CPipeInstance::EngageSpatialAudioStreamProcessorAPO_::_1_::dtor$0 @ 0x140039692 (_CPipeInstance--EngageSpatialAudioStreamProcessorAPO_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceBase::ActivateEndpoint_::_1_::dtor$3 @ 0x140054224 (_CSystemAudioDeviceBase--ActivateEndpoint_--_1_--dtor$3.c)
 *     _CSystemAudioDeviceBase::ActivateEndpoint_::_1_::dtor$4 @ 0x140054230 (_CSystemAudioDeviceBase--ActivateEndpoint_--_1_--dtor$4.c)
 *     _IsFixedFormatApo_::_1_::dtor$0 @ 0x14005A0FF (_IsFixedFormatApo_--_1_--dtor$0.c)
 *     _IsFixedFormatApo_::_1_::dtor$1 @ 0x14005A10B (_IsFixedFormatApo_--_1_--dtor$1.c)
 *     _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$4 @ 0x14005A828 (_CAPOEndpointProcessNode--CreateAPOEndpointProcessNode_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComQIPtr<IAudioDeviceEndpoint2,&__s_GUID const _GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63>::~CComQIPtr<IAudioDeviceEndpoint2,&__s_GUID const _GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63>(
        __int64 *a1)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(a1);
}
