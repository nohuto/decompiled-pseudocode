/*
 * XREFs of ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800129DC
 * Callers:
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x1800126CC (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800127E0 (-RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18003D878 (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180085870 (-RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x1800211E0 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall RmpPowerBoostAcquireLockExclusive(struct _RM_POWERBOOST_CONTEXT *a1)
{
  CempLockTrackerMarkAcquired(HampLockTrackerId);
  RtlAcquireSRWLockExclusive((char *)a1 + 32);
  *((_DWORD *)a1 + 10) = GetCurrentThreadId();
}
