/*
 * XREFs of ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x18017AD28
 * Callers:
 *     XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper$_ResumeCoro$1 @ 0x1801A93A0 (XamlExplorerHostShellComponent--WaitForInitializationAsyncHelper$_ResumeCoro$1.c)
 *     _XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801A9606 (_XamlExplorerHostShellComponent--WaitForInitializationAsyncHelper$_ResumeCoro$1_--_1_--dtor$1.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x1801BAAE0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 *     _winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::dtor$5 @ 0x1801BAE27 (_winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--W_ea_1801BAE27.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801BFBED (_SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1 @ 0x1801CDF90 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801CE182 (_winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_R_ea_1801CE182.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1801D1BE0.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::dtor$15 @ 0x1801D2434 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCur_ea_1801D2434.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x1801D26E0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDes_ea_1801D26E0.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1_::_1_::dtor$4 @ 0x1801D2A38 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDe_ea_1801D2A38.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$2 @ 0x1801D977A (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$2.c)
 * Callees:
 *     ?close@?$handle_type@Uwait_traits@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x1801646B0 (-close@-$handle_type@Uwait_traits@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$.c)
 */

void __fastcall `winrt::resume_on_signal'::`2'::awaitable::~awaitable(__int64 a1)
{
  volatile __int64 *v2; // rbx

  _close___handle_type_Uwait_traits_awaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ((struct _TP_WAIT **)(a1 + 8));
  v2 = *(volatile __int64 **)a1;
  if ( v2 )
  {
    while ( _InterlockedExchange64(v2, 0LL) == 1 )
      _Thrd_yield();
  }
}
