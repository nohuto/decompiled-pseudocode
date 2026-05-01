/*
 * XREFs of ??1?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@QEAA@XZ @ 0x180180794
 * Callers:
 *     ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x1801D1460 (-EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun_::_1_::dtor$1 @ 0x1801D17A6 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--EnsureCurrent_ea_1801D17A6.c)
 *     _Utils::ProtocolLauncher::TryGetForUriScheme_::_1_::dtor$13 @ 0x18021FF67 (_Utils--ProtocolLauncher--TryGetForUriScheme_--_1_--dtor$13.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView_::_1_::dtor$1 @ 0x1805C122A (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--EnsureFlyoutV_ea_1805C122A.c)
 *     _ApplicationFlyoutView::ApplicationFlyoutView_::_1_::dtor$2 @ 0x1805D228E (_ApplicationFlyoutView--ApplicationFlyoutView_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1ProtocolLauncher@Utils@@QEAA@XZ @ 0x1805C08D8 (--1ProtocolLauncher@Utils@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<Utils::ProtocolLauncher>::~unique_ptr<Utils::ProtocolLauncher>(
        Utils::ProtocolLauncher **a1)
{
  Utils::ProtocolLauncher *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    Utils::ProtocolLauncher::~ProtocolLauncher(*a1);
    operator delete(v1, 0x30uLL);
  }
}
