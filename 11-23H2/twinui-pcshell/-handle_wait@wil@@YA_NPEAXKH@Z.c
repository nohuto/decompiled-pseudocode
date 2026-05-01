/*
 * XREFs of ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180177DC8
 * Callers:
 *     ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x1800343F0 (-CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA-AU.c)
 *     ?DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@@Z @ 0x1800358A4 (-DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A44BC (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x1800F4D94 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x1801774B0 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x180177594 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ?WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ @ 0x180177C40 (-WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x180177DB8 (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x1804DAC00 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 *     ?wait@?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEBA_NKH@Z @ 0x1804E0C08 (-wait@-$event_t@V-$shared_storage@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_polic.c)
 *     ?DismissTaskViewInRemote@CVirtualDesktopManager@@UEAAXPEAUIVirtualDesktop@@@Z @ 0x1806011F0 (-DismissTaskViewInRemote@CVirtualDesktopManager@@UEAAXPEAUIVirtualDesktop@@@Z.c)
 *     ?DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITabProxyWindowInternal@345@@Z @ 0x180639060 (-DestroyTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt.c)
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x18063FC30 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1806C526C (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
      (void *)0xA2A,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v3);
  return 1;
}
