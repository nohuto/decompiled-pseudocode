/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@V_lambda_78f7d337d49b97370c3dc31259bf8ace_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180512F80
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@QEBA@AEBUITapInvokeSetting@TouchKeyboard@Shell@Internal@23@AEBUIInspectable@123@@Z @ 0x18050CF88 (--R-$TypedEventHandler@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UIInspecta.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Foundation::IInspectable>,_lambda_78f7d337d49b97370c3dc31259bf8ace_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  v4 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
    *(_QWORD *)(a1 + 8),
    winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Foundation::IInspectable>>,
    &v4);
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Foundation::IInspectable>::operator()(
      &v4,
      &v5,
      &v6);
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
