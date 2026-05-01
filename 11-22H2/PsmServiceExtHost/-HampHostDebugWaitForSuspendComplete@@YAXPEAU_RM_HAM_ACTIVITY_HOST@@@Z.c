/*
 * XREFs of ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F49C
 * Callers:
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007F1E8 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180013B3C (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180040A70 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostDebugWaitForSuspendComplete(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx

  RmpAcquireGlobalLock();
  v2 = 1272LL;
  if ( a1 )
    v2 = (__int64)a1 + 1208;
  while ( 1 )
  {
    if ( *(char *)v2 >= 0 )
    {
      v3 = 1268LL;
      if ( a1 )
        v3 = (__int64)a1 + 1204;
      if ( *(char *)v3 < 0 )
        break;
    }
    v4 = 1256LL;
    if ( a1 )
      v4 = (__int64)a1 + 1192;
    CempLockSleepConditionVariableExclusive((__int64)&RmpGlobalLock, v4, 0LL);
  }
  RmpReleaseGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 83) &= ~0x10000000000000uLL;
  HampHostCheckStartPendingActivities(a1);
  HampHostReleaseLockExclusiveEx(a1);
  RtlWakeAddressAll((char *)a1 + 664);
}
