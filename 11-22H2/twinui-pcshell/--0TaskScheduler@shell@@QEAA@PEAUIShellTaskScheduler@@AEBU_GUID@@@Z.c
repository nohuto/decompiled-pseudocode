/*
 * XREFs of ??0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z @ 0x1802EA252
 * Callers:
 *     ?_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z @ 0x1806DE264 (-_EnsureMenu@CLauncherTipContextMenu@@AEAAJPEAUtagPOINT@@@Z.c)
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1806DF458 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

shell::TaskScheduler *__fastcall shell::TaskScheduler::TaskScheduler(
        shell::TaskScheduler *this,
        struct IShellTaskScheduler *a2,
        const struct _GUID *a3)
{
  __int128 v3; // xmm0

  v3 = (__int128)*a3;
  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = v3;
  ((void (__fastcall *)(struct IShellTaskScheduler *))a2->lpVtbl->AddRef)(a2);
  return this;
}
