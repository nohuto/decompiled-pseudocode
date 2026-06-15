/*
 * XREFs of ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F560
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CD30 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000E9E0 (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18000EDC0 (-GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_.c)
 *     _lambda_78bc9aa717e0c7ae8337a2b0ddd14613_::__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_ @ 0x180016220 (_lambda_78bc9aa717e0c7ae8337a2b0ddd14613_--__lambda_78bc9aa717e0c7ae8337a2b0ddd14613_.c)
 *     ??1VirtualAudioSessionInfo@@UEAA@XZ @ 0x18001C260 (--1VirtualAudioSessionInfo@@UEAA@XZ.c)
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x18001C6F0 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18001CFE0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18001E200 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18001E2E0 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x18001E530 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_ @ 0x18002028C (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--__lambda_aa732a8a991b7eb0f1632fe44cffa677_.c)
 *     ??1DeactivatableDuckingDescriptor@@UEAA@XZ @ 0x180020410 (--1DeactivatableDuckingDescriptor@@UEAA@XZ.c)
 *     _lambda_4d82e2a18adfd26d1e0b2998ee994ec4_::operator() @ 0x180020840 (_lambda_4d82e2a18adfd26d1e0b2998ee994ec4_--operator().c)
 *     _lambda_6c758f270a739346e4977fa18103cf5e_::operator() @ 0x180020B0C (_lambda_6c758f270a739346e4977fa18103cf5e_--operator().c)
 *     _lambda_a3aac110b84197fe884df272735eece2_::operator() @ 0x180020BD4 (_lambda_a3aac110b84197fe884df272735eece2_--operator().c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800223A8 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     std::_Func_impl_no_alloc__lambda_69dc6b3d18ca39047544878b55e3db40__long_IAudioSessionInfo___::_Do_call @ 0x180023280 (std--_Func_impl_no_alloc__lambda_69dc6b3d18ca39047544878b55e3db40__long_IAudioSessionInfo___--_D.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800248E0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncod.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180024EB0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAXV-$com_ptr_t@UIWeakReference@.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x180024F98 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_ptr_t@UIAppli.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180025A94 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ @ 0x180025C74 (-AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180026748 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ @ 0x18002692C (-DisconnectExclusiveModeStreams@CProcess@@QEAAXXZ.c)
 *     ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x180026AC0 (-FindReusableGroupingParam@CProcess@@UEAA-AU_GUID@@PEBU2@@Z.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180026C64 (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_polic.c)
 *     ?RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x180028A60 (-RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z.c)
 *     ?ResetReusedSessionGroupingParams@CProcess@@IEAAXXZ @ 0x1800292CC (-ResetReusedSessionGroupingParams@CProcess@@IEAAXXZ.c)
 *     ?GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z @ 0x18002CBF0 (-GetProcessFromStreamInfo@CApplicationManager@@QEAAJPEAUIAudioStreamInfo@@PEAPEAVCProcess@@@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18002F9CC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180030A4C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAMAEA_J@Z @ 0x1800324FC (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClien.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180032E08 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x18003C7DC (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 *     ??1CEndpointVolumeState@@QEAA@XZ @ 0x180040E18 (--1CEndpointVolumeState@@QEAA@XZ.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180042520 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     ?GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180042F10 (-GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180043090 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180043C40 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     _CApplicationManager::OnStreamStarted_::_1_::dtor$1 @ 0x180048FA0 (_CApplicationManager--OnStreamStarted_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$6 @ 0x180049020 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$6.c)
 *     _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$12 @ 0x180049080 (_CApplicationManager--UpdateVolumeForAllAppsInSession_--_1_--dtor$12.c)
 *     _CApplication::RecalculateVolume_::_1_::dtor$5 @ 0x1800491A0 (_CApplication--RecalculateVolume_--_1_--dtor$5.c)
 *     _ApplicationSpecificEndpointInfo::GetPersistentId_::_1_::dtor$0 @ 0x180049220 (_ApplicationSpecificEndpointInfo--GetPersistentId_--_1_--dtor$0.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x1800492A0 (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$4 @ 0x1800494A0 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$4.c)
 *     _GetPolicyVolumeForAudioStream_::_1_::dtor$0 @ 0x180049530 (_GetPolicyVolumeForAudioStream_--_1_--dtor$0.c)
 *     _GetPolicyVolumeForAudioStream_::_1_::dtor$1 @ 0x180049550 (_GetPolicyVolumeForAudioStream_--_1_--dtor$1.c)
 *     _CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor$0 @ 0x180049660 (_CPlaybackManager--QueueStreamStoppedWorkItem_--_1_--dtor$0.c)
 *     _CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor$1 @ 0x180049680 (_CPlaybackManager--QueueStreamStoppedWorkItem_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$5 @ 0x180049F67 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$5.c)
 *     _CDuckingManager::OnRenderCommunicationsStreamStateChanged_::_1_::dtor$9 @ 0x18004A1F3 (_CDuckingManager--OnRenderCommunicationsStreamStateChanged_--_1_--dtor$9.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18004A304 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CApplication::DelinkProcess_::_1_::dtor$1 @ 0x18004A56E (_CApplication--DelinkProcess_--_1_--dtor$1.c)
 *     _CProcess::RegisterProcessNotification_::_1_::dtor$0 @ 0x18004A6AF (_CProcess--RegisterProcessNotification_--_1_--dtor$0.c)
 *     _CPlaybackManager::QueueStreamStartedWorkItem_::_1_::dtor$1 @ 0x18004AA9F (_CPlaybackManager--QueueStreamStartedWorkItem_--_1_--dtor$1.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$0 @ 0x18004ABC1 (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$0.c)
 *     _CEndpointVolumeState::CEndpointVolumeState_::_1_::dtor$0 @ 0x18004B1EB (_CEndpointVolumeState--CEndpointVolumeState_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
