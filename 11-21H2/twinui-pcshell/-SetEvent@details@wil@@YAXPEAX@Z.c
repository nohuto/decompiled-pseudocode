/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4
 * Callers:
 *     ?UnsubscribeFromServices@XamlExplorerHostShellComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180062150 (-UnsubscribeFromServices@XamlExplorerHostShellComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x1800621B0 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?Invoke@CompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAJ0W4AsyncStatus@56ABI@@@Z @ 0x180062570 (-Invoke@CompletionDelegate@-1---$WaitForCompletion@PEAU-$IAsyncOperation@PEAVLampArray@Lights@De.c)
 *     ?Uninitialize@WindowManagerBridge@@UEAAXXZ @ 0x1800625A0 (-Uninitialize@WindowManagerBridge@@UEAAXXZ.c)
 *     ?s_XamlApplicationThreadProc@XamlExplorerHostShellComponent@@CAKPEAX@Z @ 0x1800625C0 (-s_XamlApplicationThreadProc@XamlExplorerHostShellComponent@@CAKPEAX@Z.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x180062710 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 *     _lambda_3e351382f4c08c633b195a0370cc279b_::operator() @ 0x180062800 (_lambda_3e351382f4c08c633b195a0370cc279b_--operator().c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1800E2738 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$10 @ 0x18021D5B7 (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$10.c)
 *     ?Invoke@?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAJJ@Z @ 0x1803B1EC0 (-Invoke@-$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@UEAAJJ@Z.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch$12 @ 0x1804036D2 (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--catch$12.c)
 *     ?Uninitialize@UwpWindowManagerBridge@@UEAAXXZ @ 0x180403850 (-Uninitialize@UwpWindowManagerBridge@@UEAAXXZ.c)
 *     ?WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJXZ @ 0x180403988 (-WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJXZ.c)
 *     ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x18055ECA0 (-HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z.c)
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805799BC (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1StartupAppMonitor@@UEAA@XZ @ 0x18057F030 (--1StartupAppMonitor@@UEAA@XZ.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x1805817BC (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 *     ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180595C3C (-ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805B11AC (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 *     _lambda_724db070561b64a1d673c65688c83bb1_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___ @ 0x1805BECAC (_lambda_724db070561b64a1d673c65688c83bb1_--operator()_winrt--Windows--Foundation--IAsyncOperatio.c)
 *     ?RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z @ 0x1805D0D50 (-RegisterFlyoutWindow@Utils@@YAXPEAUHWND__@@_N@Z.c)
 *     ?_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z @ 0x1805DC2A8 (-_HandleBackgroundEnumeration@CLauncherTipContextMenu@@AEAAX_N_J@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802D9D98 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x91F,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
}
