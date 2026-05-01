/*
 * XREFs of ?ErrorCode@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@78@@impl@winrt@@QEAA?AUhresult@3@XZ @ 0x1806B1AF4
 * Callers:
 *     ?get_ErrorCode@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHPEAUhresult@3@@Z @ 0x1806C1210 (-get_ErrorCode@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperationWithProgress@UMeetAn.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1804DF9CC (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1804E0BE0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>::ErrorCode(
        __int64 a1,
        _DWORD *a2)
{
  std::exception_ptr *v4; // rcx
  _DWORD *result; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  SRWLock = (RTL_SRWLOCK *)(a1 + 48);
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  try
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 88) - 2) <= 1 )
    {
      v4 = std::exception_ptr::exception_ptr((std::exception_ptr *)v6, (const struct std::exception_ptr *)(a1 + 32));
      std::rethrow_exception(v4);
    }
    *a2 = 0;
    ReleaseSRWLockExclusive_0(SRWLock);
    result = a2;
  }
  catch ( ... )
  {
    winrt::to_hresult(a2);
    return a2;
  }
  return result;
}
