/*
 * XREFs of ??1CorrelationVector@@QEAA@XZ @ 0x1801B94B8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x180254A90 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_180254A90.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1_::_1_::dtor$0 @ 0x180254D20 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDe_ea_180254D20.c)
 *     ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x180255C40 (ApplicationFlyoutView--Show$_ResumeCoro$1.c)
 *     _ApplicationFlyoutView::Show$_ResumeCoro$1_::_1_::dtor$0 @ 0x180255E1C (_ApplicationFlyoutView--Show$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::OnListenerWindowMessage_::_1_::dtor$0 @ 0x1802B9A74 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--OnListenerWindowMessage_--.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout_::_1_::dtor$0 @ 0x1806BE06C (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--HideMACFlyout_--_1_--dtor$.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout_::_1_::dtor$1 @ 0x1806BFF68 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--ShowMACFlyout_ea_1806BFF68.c)
 *     _Utils::ProtocolLauncher::LaunchUriWithCv_::_1_::dtor$0 @ 0x1806C28A1 (_Utils--ProtocolLauncher--LaunchUriWithCv_--_1_--dtor$0.c)
 *     _WindowRegistration::WindowRegistration_::_1_::dtor$1 @ 0x1806C4D0B (_WindowRegistration--WindowRegistration_--_1_--dtor$1.c)
 *     _WindowRegistration::_WindowRegistration_::_1_::dtor$1 @ 0x1806C4EC9 (_WindowRegistration--_WindowRegistration_--_1_--dtor$1.c)
 *     _ApplicationFlyoutView::EnsureWindow_::_1_::dtor$0 @ 0x1806C561C (_ApplicationFlyoutView--EnsureWindow_--_1_--dtor$0.c)
 *     _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::dtor$0 @ 0x1806C5CDD (_ApplicationFlyoutView--RegisterFlyoutWindow_--_1_--dtor$0.c)
 *     _ApplicationFlyoutView::RegisterFlyoutWindow_::_1_::dtor$3 @ 0x1806C5CE9 (_ApplicationFlyoutView--RegisterFlyoutWindow_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CorrelationVector::~CorrelationVector(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    operator delete(v1, 0x90uLL);
}
