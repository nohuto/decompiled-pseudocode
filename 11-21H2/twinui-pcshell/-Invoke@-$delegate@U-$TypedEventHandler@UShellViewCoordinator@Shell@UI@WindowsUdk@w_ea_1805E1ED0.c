/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShowShellViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_6b0b16da3cf77b36e3abbc296541c710_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805E1ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??R_lambda_6b0b16da3cf77b36e3abbc296541c710_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShowShellViewRequestedEventArgs@2345@@Z @ 0x1805E0A7C (--R_lambda_6b0b16da3cf77b36e3abbc296541c710_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>,_lambda_6b0b16da3cf77b36e3abbc296541c710_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rdx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 8;
  v6 = a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  try
  {
    _lambda_6b0b16da3cf77b36e3abbc296541c710_::operator()(v3, v4, &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
