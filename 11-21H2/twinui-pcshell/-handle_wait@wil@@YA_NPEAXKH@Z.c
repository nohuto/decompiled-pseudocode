/*
 * XREFs of ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180062538
 * Callers:
 *     ?DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@@Z @ 0x18001B80C (-DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x18001D210 (-CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA-AU.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180047F50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x1800621B0 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x180062210 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x180065EFC (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1800E2738 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1801D4E00 (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x180238570 (-Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z.c)
 *     ?WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ @ 0x180403870 (-WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     ?HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z @ 0x18055ECA0 (-HandleState@AssistantLightManager@Lighting@TwinUI@@QEAAXW4AssistantState@2Cortana@@@Z.c)
 *     ?DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITabProxyWindowInternal@345@@Z @ 0x180579BA0 (-DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt.c)
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180580BC0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

int __fastcall wil::handle_wait(wil *this, void *a2)
{
  DWORD v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WaitForSingleObjectEx(this, (DWORD)a2, 0);
  if ( v2 == 258 )
    return 0;
  if ( v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA0C,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v3);
  return 1;
}
