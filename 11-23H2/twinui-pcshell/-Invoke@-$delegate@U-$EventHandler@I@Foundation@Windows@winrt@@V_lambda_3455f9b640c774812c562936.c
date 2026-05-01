/*
 * XREFs of ?Invoke@?$delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_3455f9b640c774812c562936cfdab1ef_@@@impl@winrt@@UEAAHPEAXI@Z @ 0x18027E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180093070 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??R?$EventHandler@I@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBI@Z @ 0x18027E100 (--R-$EventHandler@I@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_3455f9b640c774812c562936cfdab1ef_>::Invoke(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, _QWORD *, void **); // rbx
  void **v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(void (__fastcall **)(__int64, _QWORD *, void **))(*(_QWORD *)v3 + 24LL);
  v5 = winrt::put_abi((winrt *)&v7, a2);
  v4(v3, winrt::impl::guid_v<winrt::Windows::Foundation::EventHandler<unsigned int>>, v5);
  try
  {
    winrt::Windows::Foundation::EventHandler<unsigned int>::operator()(&v7, &v8, &v9);
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
