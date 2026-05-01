/*
 * XREFs of ??0hresult_no_interface@winrt@@QEAA@XZ @ 0x1804F9730
 * Callers:
 *     ??$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1805045F4 (--$unbox_value_type@IAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YAIAEBUIInspectable.c)
 *     ??$unbox_value_type@UColor@UI@Windows@winrt@@AEBUIUnknown@Foundation@34@@impl@winrt@@YA?AUColor@UI@Windows@1@AEBUIUnknown@Foundation@41@@Z @ 0x180658830 (--$unbox_value_type@UColor@UI@Windows@winrt@@AEBUIUnknown@Foundation@34@@impl@winrt@@YA-AUColor@.c)
 *     ??$unbox_value_type@_NAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1806993F0 (--$unbox_value_type@_NAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUIInspectab.c)
 *     ??$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA?AUhstring@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18070DEA4 (--$unbox_value_type@Uhstring@winrt@@AEBUIInspectable@Foundation@Windows@2@@impl@winrt@@YA-AUhstr.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803E2DC4 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

winrt::hresult_no_interface *__fastcall winrt::hresult_no_interface::hresult_no_interface(
        winrt::hresult_no_interface *this)
{
  winrt::hresult_error::hresult_error((__int64)this, winrt::impl::error_no_interface);
  return this;
}
