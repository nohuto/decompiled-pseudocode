/*
 * XREFs of ?Progress@promise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@QEAA?AU?$AsyncOperationProgressHandler@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@XZ @ 0x1805CD83C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___::Invoke @ 0x1805CCD50 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationProgressHandler_winrt--Windows--.c)
 *     ?get_Progress@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805CF6F0 (-get_Progress@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperationWithProgress@UMeetAnd.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type::Progress(
        RTL_SRWLOCK *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  _Platform_AcquireSRWLockExclusive(a1 + 6);
  *(RTL_SRWLOCK *)a2 = a1[13];
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  ReleaseSRWLockExclusive_0(a1 + 6);
  return a2;
}
