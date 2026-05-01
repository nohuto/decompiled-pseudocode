/*
 * XREFs of ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@78@@impl@winrt@@QEAAXXZ @ 0x18041D458
 * Callers:
 *     ?Cancel@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x18041D400 (-Cancel@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winr.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803531C8 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x18041CD6C (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 *     ?cancel@cancellable_promise@winrt@@QEAAXXZ @ 0x18041EA80 (-cancel@cancellable_promise@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>::Cancel(
        __int64 a1)
{
  void *v2; // rax
  __int64 v3; // rbx
  _BYTE v4[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  if ( !*(_DWORD *)(a1 + 88) )
  {
    *(_DWORD *)(a1 + 88) = 2;
    winrt::hresult_error::hresult_error((__int64)v5, 0x800704C7);
    v2 = std::make_exception_ptr<winrt::hresult_canceled>(v4, v5);
    __ExceptionPtrAssign((void *)(a1 + 32), v2);
    __ExceptionPtrDestroy(v4);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&v6,
      (winrt::Windows::Foundation::IUnknown *)(a1 + 64));
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 48));
  v3 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  winrt::cancellable_promise::cancel((winrt::cancellable_promise *)(a1 + 72));
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
}
