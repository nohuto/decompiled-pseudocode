/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x1806A3C60
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x180251610 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____________lambda_ef8a17c265bb0005e522c2850a8986c4___ @ 0x18069C918 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--pair_std--shared_ptr.c)
 */

bool __fastcall anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rdx
  __int64 v5; // r8
  std::_Ref_count_base *v7; // rcx
  bool v8; // bl
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 32);
  v10 = 0LL;
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____________lambda_ef8a17c265bb0005e522c2850a8986c4___(
    &v10,
    v3,
    v5,
    a3);
  v7 = (std::_Ref_count_base *)a3[1];
  v8 = v10 != *(_QWORD *)(a1 + 32);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return v8;
}
