/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805E1E60
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Z @ 0x1805E0DD8 (--R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>,_lambda_ab0ddc0523f74db67f1d98d90aaf8740_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **v3; // rbx
  volatile signed __int32 *v4; // rdx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **)(a1 + 8);
  v6 = a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  try
  {
    _lambda_ab0ddc0523f74db67f1d98d90aaf8740_::operator()(v3, v4, &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
