/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_f7189cc794088eeaf33bed95e453010f_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18010D390
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RAEBUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUUniversalPropertyChangedEventArgs@12345@@_lambda_f7189cc794088eeaf33bed95e453010f_@@QEBA?A_PAEBUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEBUUniversalPropertyChangedEventArgs@23456@@Z @ 0x18010C3F8 (--$-RAEBUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEB.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs>,_lambda_f7189cc794088eeaf33bed95e453010f_>::Invoke(
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
    _lambda_f7189cc794088eeaf33bed95e453010f_::operator()<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher const &,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs const &>(
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
