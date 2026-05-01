/*
 * XREFs of ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x1802E8A70
 * Callers:
 *     _lambda_d30d699a9b0100ad99955a9d234ed237_::operator() @ 0x18063E5DC (_lambda_d30d699a9b0100ad99955a9d234ed237_--operator().c)
 *     ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18063ECFC (-ParentRegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKin.c)
 *     ?RegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18063F02C (-RegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@.c)
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x18063F3CC (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall StartupNotification::CheckForChange(StartupNotification *this)
{
  (**(void (__fastcall ***)(StartupNotification *))this)(this);
  (*(void (__fastcall **)(StartupNotification *))(*(_QWORD *)this + 8LL))(this);
}
