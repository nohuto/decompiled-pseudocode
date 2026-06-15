/*
 * XREFs of WPP_SF_d @ 0x18001F3E8
 * Callers:
 *     PbmSetSmtcSubscriptionState @ 0x180002940 (PbmSetSmtcSubscriptionState.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x180009420 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180009590 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x1800097E0 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180009BE0 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000C4E0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18000CBB0 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18000D230 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000EBE0 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180012CB0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180012E50 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180012F94 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18001583C (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180021130 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180021410 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x180021AB0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180021FDC (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180025DC0 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18002647C (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180026748 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180027410 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180027C58 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180028360 (-PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18002A2D4 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18002A410 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18002A58C (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002D028 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18002D374 (-MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18002DD74 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E318 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18002E4E8 (-ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18002E594 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18002E720 (-ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18002E7B8 (-ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18002E854 (-ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002E95C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002EAA0 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18002EBD0 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18002ECB4 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18002ED8C (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18002EE64 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002EF7C (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18002F260 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18002F558 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18002F6FC (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18002FBA0 (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x180030450 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x1800307B0 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 *     ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x18003C328 (-OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x18003C7DC (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 *     ?Initialize@CAudioThreadPool@@QEAAJXZ @ 0x1800475D4 (-Initialize@CAudioThreadPool@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_d(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, 0LL);
}
