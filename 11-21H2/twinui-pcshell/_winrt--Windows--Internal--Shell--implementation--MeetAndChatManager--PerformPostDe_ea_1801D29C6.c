/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801D29C6
 * Callers:
 *     <none>
 * Callees:
 *     ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x1800C7F64 (--1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 40) + 32LL;
  MeetAndChatTelemetry::MeetAndChatManagerOperation::~MeetAndChatManagerOperation(*(MeetAndChatTelemetry::MeetAndChatManagerOperation **)(a2 + 80));
}
