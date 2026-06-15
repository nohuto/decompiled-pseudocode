/*
 * XREFs of WPP_SF_d @ 0x18000E914
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180009730 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000CDB0 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180010330 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180010760 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x180010D70 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18001131C (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015AF0 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x1800163A4 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180016588 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800166BC (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180017C80 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800189CC (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180018D28 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800192B0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001BBC4 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18001C294 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18001C440 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18001C5CC (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Do_call @ 0x18001D5E0 (std--_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_--_Do_call.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F460 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18001FD18 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x1800205A4 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x180020EBC (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020FAC (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180021AF0 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180021C7C (-ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180021D14 (-ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021F00 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180022044 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180022130 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180022214 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800222F8 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180022440 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800226F4 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18002531C (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180025F90 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x1800260D0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18002624C (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800263A8 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800264D4 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180026620 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180027960 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 *     std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call @ 0x1800281E0 (std--_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_--_Do_call.c)
 *     PbmSetSmtcSubscriptionState @ 0x180029100 (PbmSetSmtcSubscriptionState.c)
 *     std::_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_::_Do_call @ 0x180030F70 (std--_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_--_Do_call.c)
 *     ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x180032DF0 (-HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_d(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, 0LL);
}
