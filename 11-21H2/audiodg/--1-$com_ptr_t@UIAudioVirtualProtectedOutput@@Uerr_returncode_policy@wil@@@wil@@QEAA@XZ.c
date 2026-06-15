/*
 * XREFs of ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168
 * Callers:
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x1400031A0 (-Resume@CAudioPump@@UEAAJXZ.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140004184 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x140007430 (-AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x140007560 (-AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140007688 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140007778 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140008408 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001575C (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x140017630 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140019110 (-SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Window.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x1400196B0 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ??1CAudioPump@@QEAA@XZ @ 0x14001F4AC (--1CAudioPump@@QEAA@XZ.c)
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140021CB4 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x1400224FC (--1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ??1CStreamInstance@@QEAA@XZ @ 0x1400249B4 (--1CStreamInstance@@QEAA@XZ.c)
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x14002A240 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z @ 0x14002C6C0 (-IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$4 @ 0x140038C68 (_CSubmixImpl--CreateStream_--_1_--dtor$4.c)
 *     _IsCapXAPO_::_1_::dtor$1 @ 0x140039A18 (_IsCapXAPO_--_1_--dtor$1.c)
 *     ??1?$CComQIPtr@UIAudioDeviceEndpoint2@@$1?_GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63@@3U__s_GUID@@B@ATL@@QEAA@XZ @ 0x14004F9A4 (--1-$CComQIPtr@UIAudioDeviceEndpoint2@@$1-_GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63@@3U__s_GUID.c)
 *     ??1CApoEndpoint@@EEAA@XZ @ 0x14004F9D4 (--1CApoEndpoint@@EEAA@XZ.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140053D84 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x140057BF0 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x14005A07C (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14005A5C4 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 *     _lambda_70348e31779f8b8cef919996b578f4f9_::operator() @ 0x14005B634 (_lambda_70348e31779f8b8cef919996b578f4f9_--operator().c)
 *     __lambda_70348e31779f8b8cef919996b578f4f9_::operator()_::_1_::dtor$0 @ 0x14005B6A1 (__lambda_70348e31779f8b8cef919996b578f4f9_--operator()_--_1_--dtor$0.c)
 *     ?CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z @ 0x14005B760 (-CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z.c)
 *     ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x14005B950 (-GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x14005C410 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14005CA88 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$2 @ 0x14005D18D (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$2.c)
 *     AudioDGGetVpoFromVpoContext @ 0x140062030 (AudioDGGetVpoFromVpoContext.c)
 *     ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14006258C (-GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 *     _CStreamInstance::GetOta_::_1_::dtor$0 @ 0x140062766 (_CStreamInstance--GetOta_--_1_--dtor$0.c)
 *     ?GetCustomFormatCount@CAPOWrapperSrv@@UEAAJPEAI@Z @ 0x140066D10 (-GetCustomFormatCount@CAPOWrapperSrv@@UEAAJPEAI@Z.c)
 *     ?GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x140066EA0 (-GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     ?GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z @ 0x140066F00 (-GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFormatRepresentationRemote@CAPOWrapperSrv@@UEAAJIPEAPEAG@Z @ 0x140067000 (-GetFormatRepresentationRemote@CAPOWrapperSrv@@UEAAJIPEAPEAG@Z.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x1400670D0 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x1400834C8 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14008D4CC (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
