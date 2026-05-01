/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_cf08e7fff4dde67b8d19a7111b5062ba_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18023E870
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@123@AEBW4AsyncStatus@123@@Z @ 0x18004EF30 (--R-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180093070 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Management::Deployment::PackageVolume>,_lambda_cf08e7fff4dde67b8d19a7111b5062ba_>::Invoke(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, void *, void **); // rbx
  void **v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(void (__fastcall **)(__int64, void *, void **))(*(_QWORD *)v3 + 24LL);
  v5 = winrt::put_abi((winrt *)&v7, a2);
  v4(
    v3,
    &winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Management::Deployment::PackageVolume>>,
    v5);
  try
  {
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::operator()(
      &v7,
      &v8,
      &v9);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
