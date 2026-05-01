/*
 * XREFs of ??1CorrelationVector@@QEAA@XZ @ 0x18017C464
 * Callers:
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1801D17B8 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor$0 @ 0x1801D1A32 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--HideMACFlyout_--_1_--dtor$.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x1801D26E0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_1801D26E0.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801D29A0 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDe_ea_1801D29A0.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     _Utils::ProtocolLauncher::LaunchUriWithCv_::_1_::dtor$0 @ 0x1801D3533 (_Utils--ProtocolLauncher--LaunchUriWithCv_--_1_--dtor$0.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1801D4E00 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     _ApplicationFlyoutView::EnsureWindow_::_1_::dtor$0 @ 0x1801D50F7 (_ApplicationFlyoutView--EnsureWindow_--_1_--dtor$0.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1801D56C0 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 *     _ApplicationFlyoutView::Show$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801D59C8 (_ApplicationFlyoutView--Show$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::OnListenerWindowMessage_::_1_::dtor$0 @ 0x18021665E (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--OnListenerWindowMessage_--.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout_::_1_::dtor$1 @ 0x1805CE720 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--ShowMACFlyout_ea_1805CE720.c)
 *     _WindowRegistration::WindowRegistration_::_1_::dtor$1 @ 0x1805D23DB (_WindowRegistration--WindowRegistration_--_1_--dtor$1.c)
 *     _WindowRegistration::_WindowRegistration_::_1_::dtor$1 @ 0x1805D2489 (_WindowRegistration--_WindowRegistration_--_1_--dtor$1.c)
 *     _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::dtor$0 @ 0x1805D2D2D (_ApplicationFlyoutView--RegisterFlyoutWindow_--_1_--dtor$0.c)
 *     _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::dtor$3 @ 0x1805D2D39 (_ApplicationFlyoutView--RegisterFlyoutWindow_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CorrelationVector::~CorrelationVector(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    operator delete(v1, 0x90uLL);
}
