/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001E19C
 * Callers:
 *     _CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem_::_1_::catch$9 @ 0x180048BA0 (_CHostedAppInteractivityManager--QueueHostedAppInteractivityChangedWorkItem_--_1_--catch$9.c)
 *     _QueueGenericWorkItem_::_1_::catch$21 @ 0x180048CF0 (_QueueGenericWorkItem_--_1_--catch$21.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::catch$14 @ 0x1800493C0 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--catch$14.c)
 *     _CWindowsPolicyManager::SetDuckingGainForId_::_1_::catch$3 @ 0x180049E1A (_CWindowsPolicyManager--SetDuckingGainForId_--_1_--catch$3.c)
 *     _CLockedList_CDuckingNotification_1_0_::AddInterface_::_1_::catch$5 @ 0x180049FF2 (_CLockedList_CDuckingNotification_1_0_--AddInterface_--_1_--catch$5.c)
 *     _CDuckingManager::ForEachDuckableSession_::_1_::catch$5 @ 0x18004A095 (_CDuckingManager--ForEachDuckableSession_--_1_--catch$5.c)
 *     _CLockedList_CDuckingNotification_1_0_::ForEachEntry_::_1_::catch$6 @ 0x18004A0E3 (_CLockedList_CDuckingNotification_1_0_--ForEachEntry_--_1_--catch$6.c)
 *     _CDuckingNotification::Init_::_1_::catch$1 @ 0x18004A122 (_CDuckingNotification--Init_--_1_--catch$1.c)
 *     _CDuckingManager::OnRenderCommunicationsStreamStateChanged_::_1_::catch$24 @ 0x18004A205 (_CDuckingManager--OnRenderCommunicationsStreamStateChanged_--_1_--catch$24.c)
 *     _CDuckingManager::OnStateChanged_::_1_::catch$10 @ 0x18004A256 (_CDuckingManager--OnStateChanged_--_1_--catch$10.c)
 *     _CDuckingManager::RuntimeClassInitialize_::_1_::catch$3 @ 0x18004A2B6 (_CDuckingManager--RuntimeClassInitialize_--_1_--catch$3.c)
 *     _CProcess::AddSession_::_1_::catch$9 @ 0x18004A520 (_CProcess--AddSession_--_1_--catch$9.c)
 *     _CApplication::GetSmtcProcesses_::_1_::catch$4 @ 0x18004A580 (_CApplication--GetSmtcProcesses_--_1_--catch$4.c)
 *     _CProcess::RegisterMixedRealitySpatialAudioFormatPolicyChange_::_1_::catch$4 @ 0x18004A673 (_CProcess--RegisterMixedRealitySpatialAudioFormatPolicyChange_--_1_--catch$4.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::catch$8 @ 0x18004A719 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--catch$8.c)
 *     _CProcess::RuntimeClassInitialize_::_1_::catch$3 @ 0x18004A76A (_CProcess--RuntimeClassInitialize_--_1_--catch$3.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::catch$23 @ 0x18004AA0C (_CApplicationManager--ProcessInteractivityNotification_--_1_--catch$23.c)
 *     _CPlaybackManager::OnAppClosed_::_1_::catch$5 @ 0x18004AA5D (_CPlaybackManager--OnAppClosed_--_1_--catch$5.c)
 *     PbmAllowMediaPlaybackForApp$catch$5 @ 0x18004AAC3 (PbmAllowMediaPlaybackForApp$catch$5.c)
 *     PbmReportApplicationState$catch$5 @ 0x18004AB05 (PbmReportApplicationState$catch$5.c)
 *     _CAastPreStartContext::RuntimeClassInitialize_::_1_::catch$4 @ 0x18004ABD3 (_CAastPreStartContext--RuntimeClassInitialize_--_1_--catch$4.c)
 *     _TSSession::Create_::_1_::catch$3 @ 0x18004ADAA (_TSSession--Create_--_1_--catch$3.c)
 *     _GetNotificationDataSize_::_1_::catch$0 @ 0x18004ADF8 (_GetNotificationDataSize_--_1_--catch$0.c)
 *     _TsSessionCreate_::_1_::catch$15 @ 0x18004AEE8 (_TsSessionCreate_--_1_--catch$15.c)
 *     _TsSessionIdAddActiveMediaApp_::_1_::catch$3 @ 0x18004AF2A (_TsSessionIdAddActiveMediaApp_--_1_--catch$3.c)
 *     _TsSessionIdAddAppManagerClient_::_1_::catch$5 @ 0x18004AF66 (_TsSessionIdAddAppManagerClient_--_1_--catch$5.c)
 *     _TsSessionIdAddNotify_::_1_::catch$6 @ 0x18004AFC6 (_TsSessionIdAddNotify_--_1_--catch$6.c)
 *     _TsSessionIdScreenReaderStateChanged_::_1_::catch$3 @ 0x18004B002 (_TsSessionIdScreenReaderStateChanged_--_1_--catch$3.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::catch$13 @ 0x18004B25F (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--catch$13.c)
 *     _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::catch$4 @ 0x18004B2D4 (_ApplicationSpecificEndpointInfo--AddRelatedProcess_--_1_--catch$4.c)
 *     _ApplicationSpecificEndpointInfo::GetAppKey_::_1_::catch$13 @ 0x18004B37C (_ApplicationSpecificEndpointInfo--GetAppKey_--_1_--catch$13.c)
 *     _ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::catch$5 @ 0x18004B3BB (_ApplicationSpecificEndpointInfo--GetRelatedProcesses_--_1_--catch$5.c)
 *     _ApplicationSpecificEndpointInfo::RemoveRelatedProcess_::_1_::catch$4 @ 0x18004B451 (_ApplicationSpecificEndpointInfo--RemoveRelatedProcess_--_1_--catch$4.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18001B74C (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
