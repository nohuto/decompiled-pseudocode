/*
 * XREFs of ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200
 * Callers:
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180014ED0 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18001CDF0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18001CFC0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStrea.c)
 *     ?OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z @ 0x18001D2E0 (-OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z.c)
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x18001D380 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x18001D820 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18001E010 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18001E0F0 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x18001E340 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x18001E850 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x1800204C0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x180020AAC (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18002A8C0 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002CE38 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x180032A2C (--1CAastPreStartContext@@UEAA@XZ.c)
 *     _lambda_3e5545835e9bff8590988e372067e9cf_::operator() @ 0x180034378 (_lambda_3e5545835e9bff8590988e372067e9cf_--operator().c)
 *     _lambda_6d6c0a46572599aafa6340809d3efbaf_::operator() @ 0x180034488 (_lambda_6d6c0a46572599aafa6340809d3efbaf_--operator().c)
 *     _lambda_e1820d83b8f95df3942edf6c97432ab5_::operator() @ 0x1800348DC (_lambda_e1820d83b8f95df3942edf6c97432ab5_--operator().c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x180034E14 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180037E18 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180037EDC (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x180037FD0 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800380C4 (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180038214 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180038374 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x1800383B4 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDisconnect@@YAXK@Z @ 0x18003847C (-TsSessionIdDisconnect@@YAXK@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x1800384D0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x18003861C (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 *     ?TsSessionIdGetUserDuckingPreference@@YAKK@Z @ 0x1800386EC (-TsSessionIdGetUserDuckingPreference@@YAKK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18003874C (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x1800387AC (-TsSessionIdIsMuted@@YA_NK@Z.c)
 *     ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x180038808 (-TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x1800388BC (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180038954 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x1800389E0 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180038AD4 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdSetUserDuckingPreference@@YAXKM@Z @ 0x180038C74 (-TsSessionIdSetUserDuckingPreference@@YAXKM@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180038CD4 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x180038D80 (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x180038E00 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180039098 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18003969C (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_::_Do_call @ 0x180039E10 (std--_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_--_Do_call.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18003A880 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CApplicationManager::Lock(__int64 a1, _QWORD *a2)
{
  char *v3; // rbx

  v3 = (char *)g_ApplicationManager + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  *a2 = v3;
  return a2;
}
