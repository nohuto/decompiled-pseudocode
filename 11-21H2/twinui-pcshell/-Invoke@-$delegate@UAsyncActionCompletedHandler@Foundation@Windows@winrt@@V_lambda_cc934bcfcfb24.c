/*
 * XREFs of ?Invoke@?$delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@V_lambda_cc934bcfcfb2415fd654dddf326e340e_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18041E000
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??RAsyncActionCompletedHandler@Foundation@Windows@winrt@@QEBAXAEBUIAsyncAction@123@AEBW4AsyncStatus@123@@Z @ 0x1800FC41C (--RAsyncActionCompletedHandler@Foundation@Windows@winrt@@QEBAXAEBUIAsyncAction@123@AEBW4AsyncSta.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,_lambda_cc934bcfcfb2415fd654dddf326e340e_>::Invoke(
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
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
    *(_QWORD *)(a1 + 8),
    winrt::impl::guid_v<winrt::Windows::Foundation::AsyncActionCompletedHandler>,
    &v4);
  try
  {
    winrt::Windows::Foundation::AsyncActionCompletedHandler::operator()(&v4, &v5, &v6);
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
