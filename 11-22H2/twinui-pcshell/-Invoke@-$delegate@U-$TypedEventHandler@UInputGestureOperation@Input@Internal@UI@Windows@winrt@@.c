/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_3cffccd3a732e2bf8b36cc1d5bf830f1_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18054F350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>,_lambda_3cffccd3a732e2bf8b36cc1d5bf830f1_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h]
  __int64 v6; // [rsp+40h] [rbp+18h]

  v6 = a3;
  v5 = a2;
  try
  {
    (*(void (**)(void))(a1 + 16))();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
