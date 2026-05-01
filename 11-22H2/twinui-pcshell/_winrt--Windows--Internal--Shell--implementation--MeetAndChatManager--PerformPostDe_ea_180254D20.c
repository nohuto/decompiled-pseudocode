/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1_::_1_::dtor$0 @ 0x180254D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CorrelationVector@@QEAA@XZ @ 0x1801B94B8 (--1CorrelationVector@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 40) + 16LL;
  CorrelationVector::~CorrelationVector(*(void ***)(a2 + 64));
}
