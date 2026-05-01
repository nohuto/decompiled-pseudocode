/*
 * XREFs of ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008FC90
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18008FAD8 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::WatchdogTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        ExecutionModel::ExternalResourceSet *a2,
        struct _TP_TIMER *a3)
{
  __int64 v4; // rax
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v5);
  RmpAcquireGlobalLock();
  ExecutionModel::ExternalResourceSet::RunWatchdog(a2);
  v4 = *(_QWORD *)a2;
  *((_DWORD *)a2 + 338) &= ~8u;
  (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(v4 + 16))(a2);
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
}
