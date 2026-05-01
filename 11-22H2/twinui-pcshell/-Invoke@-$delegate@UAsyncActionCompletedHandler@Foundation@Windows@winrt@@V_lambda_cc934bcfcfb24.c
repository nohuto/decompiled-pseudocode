/*
 * XREFs of ?Invoke@?$delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@V_lambda_cc934bcfcfb2415fd654dddf326e340e_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x1804FD630
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??RAsyncActionCompletedHandler@Foundation@Windows@winrt@@QEBA@AEBUIAsyncAction@123@AEBW4AsyncStatus@123@@Z @ 0x180186268 (--RAsyncActionCompletedHandler@Foundation@Windows@winrt@@QEBA@AEBUIAsyncAction@123@AEBW4AsyncSta.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,_lambda_cc934bcfcfb2415fd654dddf326e340e_>::Invoke(
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
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
    *(_QWORD *)(a1 + 8),
    winrt::impl::guid_v<winrt::Windows::Foundation::AsyncActionCompletedHandler>,
    &v6);
  winrt::Windows::Foundation::AsyncActionCompletedHandler::operator()(&v6, &v4, &v5);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return 0LL;
}
