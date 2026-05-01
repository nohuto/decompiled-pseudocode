/*
 * XREFs of ??$Start@W4MeetAndChatManagerOperationKind@MeetAndChatTelemetry@@AEAVCorrelationVector@@@MeetAndChatManagerOperation@MeetAndChatTelemetry@@SA?AV01@$$QEAW4MeetAndChatManagerOperationKind@1@AEAVCorrelationVector@@@Z @ 0x1801BD9A8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x180254A90 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_180254A90.c)
 * Callees:
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA82C (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x1800BB51C (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall MeetAndChatTelemetry::MeetAndChatManagerOperation::Start<enum MeetAndChatTelemetry::MeetAndChatManagerOperationKind,CorrelationVector &>(
        struct wil::details::IFailureCallback *a1,
        char *a2,
        volatile signed __int64 **a3)
{
  wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(a1);
  *(_QWORD *)a1 = &MeetAndChatTelemetry::MeetAndChatManagerOperation::`vftable';
  MeetAndChatTelemetry::MeetAndChatManagerOperation::StartActivity((__int64)a1, *a2, a3);
  return a1;
}
