/*
 * XREFs of ??R_lambda_05b02c468eda432e9e6db40beed076d3_@@QEBA?AUDeferral@Foundation@Windows@winrt@@AEBUIDeferralFactory@234@@Z @ 0x18039FE70
 * Callers:
 *     ?GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA?AUDeferral@Foundation@Windows@6@XZ @ 0x1800F4A20 (-GetDeferral@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@QEAA-AUDeferr.c)
 * Callees:
 *     ?Create@?$consume_Windows_Foundation_IDeferralFactory@UIDeferralFactory@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@AEBUDeferralCompletedHandler@563@@Z @ 0x1800F4040 (-Create@-$consume_Windows_Foundation_IDeferralFactory@UIDeferralFactory@Foundation@Windows@winrt.c)
 */

_QWORD *__fastcall _lambda_05b02c468eda432e9e6db40beed076d3_::operator()(_QWORD **a1, _QWORD *a2, __int64 *a3)
{
  winrt::impl::consume_Windows_Foundation_IDeferralFactory<winrt::Windows::Foundation::IDeferralFactory>::Create(
    a3,
    a2,
    *a1);
  return a2;
}
