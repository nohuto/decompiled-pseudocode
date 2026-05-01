/*
 * XREFs of ??1?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@QEAA@XZ @ 0x1806B08C4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun_::_1_::dtor$1 @ 0x1802B752F (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--EnsureCurrent_ea_1802B752F.c)
 *     _Utils::ProtocolLauncher::TryGetForUriScheme_::_1_::dtor$13 @ 0x1802B759B (_Utils--ProtocolLauncher--TryGetForUriScheme_--_1_--dtor$13.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView_::_1_::dtor$1 @ 0x1806B18B5 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--EnsureFlyoutV_ea_1806B18B5.c)
 *     _ApplicationFlyoutView::ApplicationFlyoutView_::_1_::dtor$2 @ 0x1806C4BBE (_ApplicationFlyoutView--ApplicationFlyoutView_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ProtocolLauncher@Utils@@QEAA@XZ @ 0x1802E9BF8 (--1ProtocolLauncher@Utils@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<Utils::ProtocolLauncher>::~unique_ptr<Utils::ProtocolLauncher>(
        Utils::ProtocolLauncher **a1)
{
  Utils::ProtocolLauncher *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    Utils::ProtocolLauncher::~ProtocolLauncher(*a1);
    operator delete(v1);
  }
}
