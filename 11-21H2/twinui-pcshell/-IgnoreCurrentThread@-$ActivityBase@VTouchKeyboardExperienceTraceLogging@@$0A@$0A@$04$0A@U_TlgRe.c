/*
 * XREFs of ?IgnoreCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801D3354
 * Callers:
 *     ?StopActivity@UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@MEAAXXZ @ 0x1801A1B80 (-StopActivity@UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTeleme.c)
 *     ?StopActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@MEAAXXZ @ 0x1801A1DC0 (-StopActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetr.c)
 *     ?Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1801B1380 (-Stop@ActivateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x1801B15D8 (-Stop@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x1801BC650 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1801D1BE0.c)
 *     ?StopActivity@HideFlyout@MeetAndChatTelemetry@@MEAAXXZ @ 0x1801D2D90 (-StopActivity@HideFlyout@MeetAndChatTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@UriLaunch@MeetAndChatTelemetry@@MEAAXXZ @ 0x1805D1090 (-StopActivity@UriLaunch@MeetAndChatTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
        __int64 a1)
{
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
