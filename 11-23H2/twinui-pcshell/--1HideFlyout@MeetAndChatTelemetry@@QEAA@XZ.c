/*
 * XREFs of ??1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1806B08F4
 * Callers:
 *     _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1806AF17C (_lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 *     _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_ @ 0x1806B0770 (_lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_--__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_.c)
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1806BDE2C (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor$1 @ 0x1806BE078 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--HideMACFlyout_ea_1806BE078.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___::Release @ 0x1806BF690 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncActionCompletedHa_ea_1806BF690.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1806B14BC (-Destroy@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflec.c)
 */

void __fastcall MeetAndChatTelemetry::HideFlyout::~HideFlyout(MeetAndChatTelemetry::HideFlyout *this)
{
  *(_QWORD *)this = &MeetAndChatTelemetry::HideFlyout::`vftable';
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
