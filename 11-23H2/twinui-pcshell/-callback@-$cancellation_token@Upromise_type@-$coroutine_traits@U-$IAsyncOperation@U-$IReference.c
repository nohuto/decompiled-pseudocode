/*
 * XREFs of ?callback@?$cancellation_token@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@impl@winrt@@QEBAX$$QEAU?$delegate@$$V@3@@Z @ 0x1806AE49C
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::cancellation_token<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>::callback(
        RTL_SRWLOCK **a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  RTL_SRWLOCK *v3; // rsi
  RTL_SRWLOCK *v4; // rbx

  v3 = *a1;
  v4 = *a1 + 6;
  _Platform_AcquireSRWLockExclusive(v4);
  if ( LODWORD(v3[11].Ptr) == 2 )
  {
    ReleaseSRWLockExclusive_0(v4);
    if ( *(_QWORD *)a2 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 24LL))(*(_QWORD *)a2);
  }
  else
  {
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)&v3[8], a2);
    ReleaseSRWLockExclusive_0(v4);
  }
}
