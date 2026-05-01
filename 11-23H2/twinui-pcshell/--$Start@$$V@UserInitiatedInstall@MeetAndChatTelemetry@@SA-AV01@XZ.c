/*
 * XREFs of ??$Start@$$V@UserInitiatedInstall@MeetAndChatTelemetry@@SA?AV01@XZ @ 0x1806AF7C0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 * Callees:
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1806B0458 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_Tl_ea_1806B0458.c)
 *     ?StartActivity@UserInitiatedInstall@MeetAndChatTelemetry@@QEAAXXZ @ 0x1806C020C (-StartActivity@UserInitiatedInstall@MeetAndChatTelemetry@@QEAAXXZ.c)
 */

MeetAndChatTelemetry::UserInitiatedInstall *__fastcall MeetAndChatTelemetry::UserInitiatedInstall::Start<>(
        MeetAndChatTelemetry::UserInitiatedInstall *this)
{
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &MeetAndChatTelemetry::UserInitiatedInstall::`vftable';
  MeetAndChatTelemetry::UserInitiatedInstall::StartActivity(this);
  return this;
}
