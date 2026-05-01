/*
 * XREFs of ?GetResults@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUIRandomAccessStreamReference@Streams@Storage@Windows@3@XZ @ 0x18003A300
 * Callers:
 *     ?GetResults@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18003A2B0 (-GetResults@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStreamRe.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x1803531FC (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 *     ?rethrow_if_failed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@78@@impl@winrt@@IEBAXXZ @ 0x18041F160 (-rethrow_if_failed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperationWithProgres.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference> const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,void>::GetResults(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *SRWLock; // [rsp+50h] [rbp+8h]

  SRWLock = (RTL_SRWLOCK *)(a1 + 48);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  if ( *(_DWORD *)(a1 + 88) != 1 )
  {
    winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>::rethrow_if_failed(a1);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call((winrt::hresult_illegal_method_call *)pExceptionObject);
    throw (winrt::hresult_illegal_method_call *)pExceptionObject;
  }
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  *a2 = v4;
  ReleaseSRWLockExclusive_0(SRWLock);
  return a2;
}
