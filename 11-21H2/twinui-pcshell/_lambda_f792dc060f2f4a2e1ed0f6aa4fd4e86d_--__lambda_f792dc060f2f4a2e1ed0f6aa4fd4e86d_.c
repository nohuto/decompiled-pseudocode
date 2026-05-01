/*
 * XREFs of _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_ @ 0x1801D0E64
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___::_implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___ @ 0x1801D0EC8 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncActionCompletedHandler__lambda.c)
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1801D17B8 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor$16 @ 0x1801D1AA1 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--HideMACFlyout_ea_1801D1AA1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1801D0EF4 (--1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_(__int64 *a1)
{
  MeetAndChatTelemetry::HideFlyout::~HideFlyout((MeetAndChatTelemetry::HideFlyout *)(a1 + 1));
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
