/*
 * XREFs of ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18055D070
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::Invoke @ 0x180280EE0 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foun_ea_180280EE0.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_97ea773e353b0db0e215eb811349f3a3___::Invoke @ 0x180280FE0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180280FE0.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_f03d60f1a224720d7726d7a51ce0d0af___::Invoke @ 0x1802810A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1802810A0.c)
 *     _lambda_66e3247105c53d232400c257ddcfd6f2_::operator() @ 0x180282544 (_lambda_66e3247105c53d232400c257ddcfd6f2_--operator().c)
 *     _lambda_c08ce6a39495b94ac81d1bf94c809a99_::operator() @ 0x180282678 (_lambda_c08ce6a39495b94ac81d1bf94c809a99_--operator().c)
 *     _lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::operator() @ 0x1802827AC (_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_--operator().c)
 *     _lambda_eb02d5272acc639a9001bc530d909dad_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&_ @ 0x1805545BC (_lambda_eb02d5272acc639a9001bc530d909dad_--operator()_winrt--Windows--UI--Composition--Internal-.c)
 *     _lambda_508ef90450617154956e0b927fb269e2_::operator()_winrt::Windows::Foundation::IInspectable_const_&_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_const_&_ @ 0x180554670 (_lambda_508ef90450617154956e0b927fb269e2_--operator()_winrt--Windows--Foundation--IInspectable_c.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_5609f70bbd1d7f57313a33137ea4cdfa___::Invoke @ 0x1805596B0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1805596B0.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_8ee7d66042e48d98bb41283a1a194426___::Invoke @ 0x180559730 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180559730.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x18055B734 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 * Callees:
 *     ??$_Construct_from_weak@VCAppThumbnailWindow@@@?$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEBV?$weak_ptr@VCAppThumbnailWindow@@@1@@Z @ 0x180554994 (--$_Construct_from_weak@VCAppThumbnailWindow@@@-$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEB.c)
 */

__int64 __fastcall std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = 0LL;
  a2[1] = 0LL;
  std::_Ptr_base<CAppThumbnailWindow>::_Construct_from_weak<CAppThumbnailWindow>((__int64)a2, a1);
  return v2;
}
