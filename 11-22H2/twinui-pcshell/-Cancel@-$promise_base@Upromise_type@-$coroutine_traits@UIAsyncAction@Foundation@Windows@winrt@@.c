/*
 * XREFs of ?Cancel@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1804FD2B8
 * Callers:
 *     ?Cancel@?$produce@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@@impl@winrt@@UEAAHXZ @ 0x1804FD260 (-Cancel@-$produce@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation_ea_1804FD260.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?store@?$_Atomic_storage@W4AsyncStatus@Foundation@Windows@winrt@@$03@std@@QEAAXW4AsyncStatus@Foundation@Windows@winrt@@W4memory_order@2@@Z @ 0x1801862A4 (-store@-$_Atomic_storage@W4AsyncStatus@Foundation@Windows@winrt@@$03@std@@QEAAXW4AsyncStatus@Fou.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803E2DC4 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x1804FCF74 (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 *     ?cancel@cancellable_promise@winrt@@QEAAXXZ @ 0x1804FDAB0 (-cancel@cancellable_promise@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::Cancel(
        __int64 a1)
{
  const void *v2; // rax
  __int64 v3; // rbx
  _BYTE v4[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  if ( !*(_DWORD *)(a1 + 88) )
  {
    std::_Atomic_storage<enum winrt::Windows::Foundation::AsyncStatus,4>::store((unsigned int *)(a1 + 88), 2);
    winrt::hresult_error::hresult_error((__int64)v5, winrt::impl::error_canceled);
    v2 = (const void *)std::make_exception_ptr<winrt::hresult_canceled>((__int64)v4, (__int64)v5);
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
