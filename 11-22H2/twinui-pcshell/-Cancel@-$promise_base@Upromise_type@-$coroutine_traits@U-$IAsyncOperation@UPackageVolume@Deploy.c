/*
 * XREFs of ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180225B38
 * Callers:
 *     ?Cancel@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x180225AE0 (-Cancel@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winr.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?store@?$_Atomic_storage@W4AsyncStatus@Foundation@Windows@winrt@@$03@std@@QEAAXW4AsyncStatus@Foundation@Windows@winrt@@W4memory_order@2@@Z @ 0x1801862A4 (-store@-$_Atomic_storage@W4AsyncStatus@Foundation@Windows@winrt@@$03@std@@QEAAXW4AsyncStatus@Fou.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x1804FCF74 (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 *     ??R?$delegate_base@X$$V@impl@winrt@@QEBA@XZ @ 0x1804FD174 (--R-$delegate_base@X$$V@impl@winrt@@QEBA@XZ.c)
 *     ?cancel@cancellable_promise@winrt@@QEAAXXZ @ 0x1804FDAB0 (-cancel@cancellable_promise@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,LockScreenWidgetPackageHelperBase *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>,void>::Cancel(
        __int64 a1)
{
  __int64 v2; // rax
  const void *v3; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  if ( !*(_DWORD *)(a1 + 88) )
  {
    std::_Atomic_storage<enum winrt::Windows::Foundation::AsyncStatus,4>::store((unsigned int *)(a1 + 88), 2);
    v2 = winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v5);
    v3 = (const void *)std::make_exception_ptr<winrt::hresult_canceled>(v4, v2);
    __ExceptionPtrAssign((void *)(a1 + 32), v3);
    __ExceptionPtrDestroy(v4);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&v6,
      (winrt::Windows::Foundation::IUnknown *)(a1 + 64));
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 48));
  if ( v6 )
    winrt::impl::delegate_base<void,>::operator()(&v6);
  winrt::cancellable_promise::cancel((winrt::cancellable_promise *)(a1 + 72));
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v6);
}
