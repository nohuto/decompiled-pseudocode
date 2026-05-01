/*
 * XREFs of ??$make_pair@AEAV?$shared_ptr@VPinOperationContext@@@std@@AEAU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@YA?AU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@AEAV?$shared_ptr@VPinOperationContext@@@0@AEAU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@Z @ 0x18069D008
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x180251610 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

_QWORD *__fastcall std::make_pair<std::shared_ptr<PinOperationContext> &,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>> &>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // r8
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    a1,
    a2);
  v4 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 + 16);
  *(_QWORD *)v4 = *v3;
  winrt::Windows::Foundation::IUnknown::add_ref(v4);
  return a1;
}
