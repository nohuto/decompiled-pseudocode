/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_dfc53eb855280adfc513fa31c55f1c7f_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1801A3EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800F79D0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??R?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@QEBAXAEBUSearchAppHost@Shell@UI@WindowsUdk@3@AEBUSearchAppActivatedEventArgs@5673@@Z @ 0x1801A3D98 (--R-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@23.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>,_lambda_dfc53eb855280adfc513fa31c55f1c7f_>::Invoke(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, void *, void **); // rbx
  void **v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v7 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(void (__fastcall **)(__int64, void *, void **))(*(_QWORD *)v3 + 24LL);
  v5 = winrt::put_abi((winrt *)&v7, a2);
  v4(
    v3,
    &winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>,
    v5);
  try
  {
    winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>::operator()(
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
