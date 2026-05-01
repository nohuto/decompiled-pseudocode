/*
 * XREFs of ??$?4U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@$0A@@?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x180699AF0
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation @ 0x1806A4E40 (_anonymous_namespace_--PinConsentPromptManager--RemoveOutstandingPromptForOperation.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

_QWORD *__fastcall std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::operator=<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v5 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v6 = (std::_Ref_count_base *)a1[1];
  a1[1] = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 2),
    (winrt::Windows::Foundation::IUnknown *)(a2 + 2));
  return a1;
}
