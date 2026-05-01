/*
 * XREFs of ??$Start@$$V@UserInitiatedInstall@MeetAndChatTelemetry@@SA?AV01@XZ @ 0x1805BF64C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1801D1BE0.c)
 * Callees:
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805C02C4 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_Tl_ea_1805C02C4.c)
 *     ?StartActivity@UserInitiatedInstall@MeetAndChatTelemetry@@QEAAXXZ @ 0x1805CE8E4 (-StartActivity@UserInitiatedInstall@MeetAndChatTelemetry@@QEAAXXZ.c)
 */

MeetAndChatTelemetry::UserInitiatedInstall *__fastcall MeetAndChatTelemetry::UserInitiatedInstall::Start<>(
        MeetAndChatTelemetry::UserInitiatedInstall *this)
{
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &MeetAndChatTelemetry::UserInitiatedInstall::`vftable';
  MeetAndChatTelemetry::UserInitiatedInstall::StartActivity(this);
  return this;
}
