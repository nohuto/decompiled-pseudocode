/*
 * XREFs of ??0?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@AEBU01@@Z @ 0x18069DFD8
 * Callers:
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____________lambda_ef8a17c265bb0005e522c2850a8986c4___ @ 0x18069C918 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--pair_std--shared_ptr.c)
 *     _anonymous_namespace_::PinConsentPromptManager::_PinConsentPromptManager @ 0x18069EA68 (_anonymous_namespace_--PinConsentPromptManager--_PinConsentPromptManager.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

_QWORD *__fastcall std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a1,
    a2);
  v4 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 + 16);
  *(_QWORD *)v4 = *(_QWORD *)(v3 + 16);
  winrt::Windows::Foundation::IUnknown::add_ref(v4);
  return a1;
}
