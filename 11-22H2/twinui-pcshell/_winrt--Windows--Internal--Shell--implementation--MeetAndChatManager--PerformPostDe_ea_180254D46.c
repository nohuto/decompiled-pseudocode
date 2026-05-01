/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1_::_1_::dtor$1 @ 0x180254D46
 * Callers:
 *     <none>
 * Callees:
 *     ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x1800BA728 (--1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 40) + 32LL;
  MeetAndChatTelemetry::MeetAndChatManagerOperation::~MeetAndChatManagerOperation(*(MeetAndChatTelemetry::MeetAndChatManagerOperation **)(a2 + 72));
}
