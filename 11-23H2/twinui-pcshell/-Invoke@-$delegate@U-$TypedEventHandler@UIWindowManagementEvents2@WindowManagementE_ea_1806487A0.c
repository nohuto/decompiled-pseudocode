/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UArrangedWindowJointResizeCompletedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_9aa085e7309e058b5efa55087e797051_@@@impl@winrt@@UEAAHPEAXUstruct_Windows_Internal_Shell_WindowManagementEvents_ArrangedWindowJointResizeCompletedEventArgs@23@@Z @ 0x1806487A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2,winrt::Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>,_lambda_9aa085e7309e058b5efa55087e797051_>::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  v4 = a2;
  try
  {
    (*(void (**)(void))(a1 + 16))();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
