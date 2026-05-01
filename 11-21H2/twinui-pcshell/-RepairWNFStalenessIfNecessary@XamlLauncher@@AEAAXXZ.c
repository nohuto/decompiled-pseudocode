/*
 * XREFs of ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x18044BB68
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1801AB3D0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180117A74 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?Visibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AW4ViewVisibility@Shell@UI@WindowsUdk@3@XZ @ 0x18017F81C (-Visibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncher::RepairWNFStalenessIfNecessary(XamlLauncher *this)
{
  int v2; // ebx
  char v3; // al

  v2 = winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::Visibility((__int64 *)this + 44) == 0;
  if ( v2 != (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 104LL))(*((_QWORD *)this + 43)) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 104LL))(*((_QWORD *)this + 43));
    XamlLauncher::PublishLauncherVisibilityState((ImmersiveMonitorHelper **)this, v3);
  }
}
