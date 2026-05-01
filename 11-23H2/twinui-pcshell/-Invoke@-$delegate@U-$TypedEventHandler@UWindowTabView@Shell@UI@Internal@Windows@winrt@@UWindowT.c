/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UWindowTabView@Shell@UI@Internal@Windows@winrt@@UWindowTabViewPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_183baf27b090b4cfecd741efea205505_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1800706D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabView,winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs>,_lambda_183baf27b090b4cfecd741efea205505_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  v4 = a2;
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *))(a1 + 16))(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 24), &v4, &v5);
  return 0LL;
}
