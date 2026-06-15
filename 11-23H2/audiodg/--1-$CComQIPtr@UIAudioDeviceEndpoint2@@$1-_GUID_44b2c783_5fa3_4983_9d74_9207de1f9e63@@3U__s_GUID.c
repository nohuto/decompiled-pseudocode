/*
 * XREFs of ??1?$CComQIPtr@UIAudioDeviceEndpoint2@@$1?_GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63@@3U__s_GUID@@B@ATL@@QEAA@XZ @ 0x14004F088
 * Callers:
 *     _CPipeInstance::EngageSpatialAudioStreamProcessorAPO_::_1_::dtor$0 @ 0x140034613 (_CPipeInstance--EngageSpatialAudioStreamProcessorAPO_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::RegisterSpatialPipe_::_1_::dtor$3 @ 0x140034EE4 (_CAudioDeviceGraph--RegisterSpatialPipe_--_1_--dtor$3.c)
 *     _CPipeInstance::InitializeSilenceMonitorInterface_::_1_::dtor$0 @ 0x140034F1A (_CPipeInstance--InitializeSilenceMonitorInterface_--_1_--dtor$0.c)
 *     _GetMaxSupportedConnectionVersion_::_1_::dtor$0 @ 0x140034F3E (_GetMaxSupportedConnectionVersion_--_1_--dtor$0.c)
 *     _CPipeInstance::Start_::_1_::dtor$0 @ 0x140035831 (_CPipeInstance--Start_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::RegisterSpatialPipe_::_1_::dtor$1 @ 0x140035A31 (_CAudioDeviceGraph--RegisterSpatialPipe_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceBase::ActivateEndpoint_::_1_::dtor$3 @ 0x140055C60 (_CSystemAudioDeviceBase--ActivateEndpoint_--_1_--dtor$3.c)
 *     _CSystemAudioDeviceBase::ActivateEndpoint_::_1_::dtor$4 @ 0x140055C6C (_CSystemAudioDeviceBase--ActivateEndpoint_--_1_--dtor$4.c)
 *     _IsFixedFormatApo_::_1_::dtor$1 @ 0x14005CD3B (_IsFixedFormatApo_--_1_--dtor$1.c)
 *     _CPipeInstance::Stop_::_1_::dtor$0 @ 0x14005CFAE (_CPipeInstance--Stop_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComQIPtr<IAudioDeviceEndpoint2,&__s_GUID const _GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63>::~CComQIPtr<IAudioDeviceEndpoint2,&__s_GUID const _GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63>(
        __int64 *a1)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(a1);
}
