/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@V_lambda_a50a735157eb4c90c0d6617f7958c0ad_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18047EB00
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@QEBA@AEBUSearchAppHost@Shell@UI@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x1800502EC (--R-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>,_lambda_a50a735157eb4c90c0d6617f7958c0ad_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  v6 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
    *(_QWORD *)(a1 + 8),
    winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>,
    &v6);
  v5[0] = a3;
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>::operator()(
      &v6,
      &v7,
      v5);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
