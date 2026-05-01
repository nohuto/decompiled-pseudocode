/*
 * XREFs of ??$get_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180067EF0
 * Callers:
 *     ??$call@AEAV_lambda_c4edbeba96dcef3322467452933ed6cc_@@@?$factory_cache_entry@UWindowTabBroker@Shell@UI@Internal@Windows@winrt@@UIWindowTabBrokerStatics@23456@@impl@winrt@@QEAA?AUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@2@AEAV_lambda_c4edbeba96dcef3322467452933ed6cc_@@@Z @ 0x180067D9C (--$call@AEAV_lambda_c4edbeba96dcef3322467452933ed6cc_@@@-$factory_cache_entry@UWindowTabBroker@S.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068A90 (--$get_runtime_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@imp.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
