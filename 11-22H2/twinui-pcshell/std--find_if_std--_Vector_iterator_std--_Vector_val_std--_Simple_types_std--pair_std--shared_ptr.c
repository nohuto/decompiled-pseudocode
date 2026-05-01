/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____________lambda_ef8a17c265bb0005e522c2850a8986c4___ @ 0x18069C918
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x1806A3C60 (_anonymous_namespace_--PinConsentPromptManager--IsPromptOutstandingForPinOperation.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??0?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@AEBU01@@Z @ 0x18069DFD8 (--0-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x18069F680 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____________lambda_ef8a17c265bb0005e522c2850a8986c4___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 i; // rsi
  _QWORD *v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // r8
  char v11; // r15
  std::_Ref_count_base *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-38h] BYREF

  for ( i = a2; i != a3; i += 24LL )
  {
    v8 = (_QWORD *)std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(
                     v16,
                     i);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v14,
      v8);
    v9 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
           &v15,
           a4);
    v11 = AreEquivalentPinOperations(v9, v10);
    if ( v8[2] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(v8 + 2));
    v12 = (std::_Ref_count_base *)v8[1];
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    if ( v11 )
      break;
  }
  *a1 = i;
  return a1;
}
