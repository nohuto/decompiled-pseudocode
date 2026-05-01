/*
 * XREFs of ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x180584F54
 * Callers:
 *     _lambda_d30d699a9b0100ad99955a9d234ed237_::operator() @ 0x18057F5E0 (_lambda_d30d699a9b0100ad99955a9d234ed237_--operator().c)
 *     ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18057FDC8 (-ParentRegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKin.c)
 *     ?RegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18058008C (-RegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@.c)
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1805803E4 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall StartupNotification::CheckForChange(StartupNotification *this)
{
  (**(void (__fastcall ***)(StartupNotification *))this)(this);
  (*(void (__fastcall **)(StartupNotification *))(*(_QWORD *)this + 8LL))(this);
}
