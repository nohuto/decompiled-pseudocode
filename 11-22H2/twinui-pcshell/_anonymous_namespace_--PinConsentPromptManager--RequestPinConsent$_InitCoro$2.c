/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2 @ 0x180251498
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent @ 0x180251AEC (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent.c)
 * Callees:
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::get_return_object @ 0x180069A30 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180069A30.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x180251610 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::_parameters_ @ 0x18069DB80 (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent_--_4_--_parameters_--_paramet.c)
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type::promise_type @ 0x18069E15C (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOperation_win_ea_18069E15C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__InitCoro_2(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v8; // r10

  _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::_parameters_(
    a2 + 305,
    a6,
    a4,
    a5,
    a2,
    a3);
  *(_QWORD *)a2 = anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v8 != 0 ? 2 : 65538;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type::promise_type(a2 - 112);
  winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::get_return_object(
    a2 - 112,
    a3);
  *(_BYTE *)(a2 + 304) = 0;
  return anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_1(a2);
}
