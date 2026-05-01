/*
 * XREFs of ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180042F50
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x180069490 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801AAE40 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::Dismiss(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 320);
  if ( !v1 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  return 0LL;
}
