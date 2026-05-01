/*
 * XREFs of ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@PEAUHWND__@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1801D0070
 * Callers:
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::catch$103 @ 0x1801C793A (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--catch$103.c)
 *     __anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1_::_1_::catch$35 @ 0x1801CA706 (__anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1_--_1_--catch$35.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1_::_1_::catch$8 @ 0x1801CDDAD (_winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_Re_ea_1801CDDAD.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1_::_1_::catch$13 @ 0x1801CE1A8 (_winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_R_ea_1801CE1A8.c)
 *     _FallbackFlyoutView::Hide$_ResumeCoro$1_::_1_::catch$4 @ 0x1801D42DE (_FallbackFlyoutView--Hide$_ResumeCoro$1_--_1_--catch$4.c)
 *     _FallbackFlyoutView::Show$_ResumeCoro$1_::_1_::catch$4 @ 0x1801D4716 (_FallbackFlyoutView--Show$_ResumeCoro$1_--_1_--catch$4.c)
 *     _ApplicationFlyoutView::Hide$_ResumeCoro$1_::_1_::catch$5 @ 0x1801D5470 (_ApplicationFlyoutView--Hide$_ResumeCoro$1_--_1_--catch$5.c)
 *     _ApplicationFlyoutView::Show$_ResumeCoro$1_::_1_::catch$6 @ 0x1801D59EE (_ApplicationFlyoutView--Show$_ResumeCoro$1_--_1_--catch$6.c)
 * Callees:
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x180341628 (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18041CF04 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??1exception_ptr@std@@QEAA@XZ @ 0x18041D16C (--1exception_ptr@std@@QEAA@XZ.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x18041D194 (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x18041EAD4 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18041F138 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::unhandled_exception(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, (struct winrt::slim_mutex *)(a1 + 48));
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=(a1 + 32, v2);
  std::exception_ptr::~exception_ptr((std::exception_ptr *)v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)(a1 + 32));
  try
  {
    std::rethrow_exception(v3);
  }
  catch ( winrt::hresult_canceled )
  {
    *(_DWORD *)(a1 + 88) = 2;
  }
  catch ( ... )
  {
    *(_DWORD *)(a1 + 88) = 3;
  }
  ReleaseSRWLockExclusive_0(SRWLock);
}
