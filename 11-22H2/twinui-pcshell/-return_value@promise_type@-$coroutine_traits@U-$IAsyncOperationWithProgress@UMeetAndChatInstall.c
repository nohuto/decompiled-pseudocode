/*
 * XREFs of ?return_value@promise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@QEAAXAEBUMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@Z @ 0x1806C1858
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x180254250 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_180254250.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 */

void __fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type::return_value(
        RTL_SRWLOCK *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  _Platform_AcquireSRWLockExclusive(a1 + 6);
  winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)&a1[12], a2);
  ReleaseSRWLockExclusive_0(a1 + 6);
}
