/*
 * XREFs of ?ShowPinDialog@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@V?$shared_ptr@VPinOperationContext@@@std@@_N@Z @ 0x180252260
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$2 @ 0x180251C70 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3,
        char a4)
{
  void *v7; // rax
  std::_Ref_count_base *v8; // rcx
  _BYTE v10[8]; // [rsp+30h] [rbp-228h] BYREF
  _DWORD v11[120]; // [rsp+38h] [rbp-220h] BYREF
  __int64 v12; // [rsp+218h] [rbp-40h]

  v12 = a3;
  v10[0] = a4;
  v7 = operator new(0x1D1uLL);
  v11[0] = 0;
  winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__InitCoro_2(
    (__int64)v11,
    (__int64)v7 + 112,
    a2,
    a3,
    v10,
    a1);
  v8 = *(std::_Ref_count_base **)(a3 + 8);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
