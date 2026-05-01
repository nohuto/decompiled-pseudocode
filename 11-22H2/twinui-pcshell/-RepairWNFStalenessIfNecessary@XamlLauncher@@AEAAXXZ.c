/*
 * XREFs of ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x1802D9D32
 * Callers:
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801FF760 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1802000A0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?Visibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005A3A4 (-Visibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180106170 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncher::RepairWNFStalenessIfNecessary(XamlLauncher *this)
{
  int v2; // ebx
  char v3; // al

  v2 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::Visibility((__int64 *)this + 50) == 0;
  if ( v2 != (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 49) + 104LL))(*((_QWORD *)this + 49)) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 49) + 104LL))(*((_QWORD *)this + 49));
    XamlLauncher::PublishLauncherVisibilityState((ImmersiveMonitorHelper **)this, v3);
  }
}
