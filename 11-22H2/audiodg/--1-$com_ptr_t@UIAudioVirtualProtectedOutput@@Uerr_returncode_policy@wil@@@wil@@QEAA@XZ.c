/*
 * XREFs of ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38
 * Callers:
 *     ??1CStreamInstance@@QEAA@XZ @ 0x1400029AC (--1CStreamInstance@@QEAA@XZ.c)
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140004118 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140004B14 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140004F38 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400054C0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x140008EC0 (-Resume@CAudioPump@@UEAAJXZ.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14000DEB0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSpatializerInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F2D8 (-InitializeSpatializerInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject.c)
 *     ?InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000F480 (-InitializeSilenceMonitorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObj.c)
 *     ?GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z @ 0x14000F540 (-GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140013A40 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140013AFC (-InitializeMatrixInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z.c)
 *     ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x1400148F4 (-SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Window.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14001624C (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140019128 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x14001BCF0 (-AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x14001CAF0 (-AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x14001E41C (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14001FCC4 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 *     ??1CEndpointInstance@@QEAA@XZ @ 0x14002301C (--1CEndpointInstance@@QEAA@XZ.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$12 @ 0x1400345DD (_CAudioPump--CAudioPump_--_1_--dtor$12.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$14 @ 0x14003460F (_CAudioPump--CAudioPump_--_1_--dtor$14.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$4 @ 0x140035BF4 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$4.c)
 *     _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$2 @ 0x140035ED5 (_CEndpointInstance--CreateStreamEndpointInstance_--_1_--dtor$2.c)
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::dtor$4 @ 0x14003672E (_CAPOProcessingHost--RegisterAPONotifications_--_1_--dtor$4.c)
 *     ??1?$CComQIPtr@UIAudioDeviceEndpoint2@@$1?_GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63@@3U__s_GUID@@B@ATL@@QEAA@XZ @ 0x14004F0C8 (--1-$CComQIPtr@UIAudioDeviceEndpoint2@@$1-_GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63@@3U__s_GUID.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140055800 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x14005CCFC (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x14005CF04 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14005EBF0 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     _lambda_70348e31779f8b8cef919996b578f4f9_::operator() @ 0x14005EE14 (_lambda_70348e31779f8b8cef919996b578f4f9_--operator().c)
 *     __lambda_70348e31779f8b8cef919996b578f4f9_::operator()_::_1_::dtor$0 @ 0x14005EE81 (__lambda_70348e31779f8b8cef919996b578f4f9_--operator()_--_1_--dtor$0.c)
 *     ?CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z @ 0x14005F160 (-CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z.c)
 *     ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x14005F350 (-GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x1400600E0 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140060A84 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$2 @ 0x1400611AC (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$2.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$4 @ 0x1400611C4 (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$4.c)
 *     AudioDGGetVpoFromVpoContext @ 0x140066D50 (AudioDGGetVpoFromVpoContext.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400674B0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$4 @ 0x140067DAD (_CSubmixImpl--CreateStream_--_1_--dtor$4.c)
 *     ?GetCustomFormatCount@CAPOWrapperSrv@@UEAAJPEAI@Z @ 0x14006E7E0 (-GetCustomFormatCount@CAPOWrapperSrv@@UEAAJPEAI@Z.c)
 *     ?GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z @ 0x14006E9A0 (-GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFormatRepresentationRemote@CAPOWrapperSrv@@UEAAJIPEAPEAG@Z @ 0x14006EAB0 (-GetFormatRepresentationRemote@CAPOWrapperSrv@@UEAAJIPEAPEAG@Z.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x14006EB80 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 *     ??1CAudioPump@@QEAA@XZ @ 0x140073724 (--1CAudioPump@@QEAA@XZ.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x140073EE0 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     ?GetOta@CStreamInstance@@UEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x1400779A0 (-GetOta@CStreamInstance@@UEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtecte.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14009028C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14009984C (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
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
