/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_688536045750b024e9c980c09e4232a8_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180674BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@12345@@_lambda_688536045750b024e9c980c09e4232a8_@@QEBA?A_PAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@23456@@Z @ 0x18067483C (--$-RAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindo.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs>,_lambda_688536045750b024e9c980c09e4232a8_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = (__int64 *)(a1 + 8);
  try
  {
    _lambda_688536045750b024e9c980c09e4232a8_::operator()<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 const &,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs const &>(
      v3,
      (__int64)&v6,
      (__int64)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
