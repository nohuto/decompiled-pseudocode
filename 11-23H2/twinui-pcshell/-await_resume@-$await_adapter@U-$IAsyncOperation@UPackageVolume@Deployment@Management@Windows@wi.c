/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180248A84
 * Callers:
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x180248B5C (-await_resume@-$notify_awaiter@U-$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@w.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180093070 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
winrt *__fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::await_resume(
        __int64 a1,
        winrt *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, void **); // rbx
  void **v8; // rax
  int v9; // eax
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  v4 = *(unsigned int *)(a1 + 20);
  if ( (int)v4 < 0 )
    winrt::throw_hresult(v4);
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v5 = *(__int64 **)(a1 + 8);
  *(_QWORD *)a2 = 0LL;
  v6 = *v5;
  v7 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)*v5 + 64LL);
  v8 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v9 = v7(v6, v8);
  if ( v9 < 0 )
    winrt::throw_hresult((unsigned int)v9);
  return a2;
}
