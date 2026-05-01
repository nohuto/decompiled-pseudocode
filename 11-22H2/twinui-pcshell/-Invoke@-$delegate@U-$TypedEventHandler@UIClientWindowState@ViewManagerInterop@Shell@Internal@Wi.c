/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@UIClientWindowReadyForPresentationChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_bef65ec9d7e5e7cbe5d032e5d418e177_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18040FF10
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowReadyForPresentationChangedEventArgs@12345@@_lambda_bef65ec9d7e5e7cbe5d032e5d418e177_@@QEBA?A_PAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowReadyForPresentationChangedEventArgs@23456@@Z @ 0x18040EA54 (--$-RAEBUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@AEBUIClientWindowRe.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs>,_lambda_bef65ec9d7e5e7cbe5d032e5d418e177_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = a1 + 8;
  try
  {
    _lambda_bef65ec9d7e5e7cbe5d032e5d418e177_::operator()<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState const &,winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs const &>(
      v3,
      &v6,
      &v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
