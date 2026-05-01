/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_ca0d86618838526d860e51cc8ad0ffdb_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x180713D90
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBA@AEBU?$IAsyncOperation@I@123@AEBW4AsyncStatus@123@@Z @ 0x1802E7638 (--R-$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBA@AEBU-$IAsyncOperation@I@123.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStream>,_lambda_ca0d86618838526d860e51cc8ad0ffdb_>::Invoke(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  v4 = 0LL;
  (*(void (__fastcall **)(_QWORD, void *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
    *(_QWORD *)(a1 + 8),
    &winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStream>>,
    &v4);
  try
  {
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>::operator()(&v4, &v5, &v6);
    if ( v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
