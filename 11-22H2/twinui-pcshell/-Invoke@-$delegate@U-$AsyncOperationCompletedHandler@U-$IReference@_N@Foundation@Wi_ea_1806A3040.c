/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_a26f18ab584c88017ddfe4edd20bfc0d_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x1806A3040
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBA@AEBU?$IAsyncOperation@I@123@AEBW4AsyncStatus@123@@Z @ 0x1802E7638 (--R-$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBA@AEBU-$IAsyncOperation@I@123.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>,_lambda_a26f18ab584c88017ddfe4edd20bfc0d_>::Invoke(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  v5 = a3;
  v6 = 0LL;
  (*(void (__fastcall **)(_QWORD, void *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
    *(_QWORD *)(a1 + 8),
    &winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>>,
    &v6);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>::operator()(&v6, &v4, &v5);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return 0LL;
}
