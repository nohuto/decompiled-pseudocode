/*
 * XREFs of ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005250
 * Callers:
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180004C90 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180004EF4 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18004FBEC (-ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18006D550 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 *     ?ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x18006D62C (-ArHostRundownActivities@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006D6C0 (-ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 * Callees:
 *     ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800052A0 (-ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800052F8 (-ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 */

void __fastcall ArHostClearChangeInProgress(struct _AR_ACTIVITY_HOST *a1)
{
  struct _ACTIVITY_RESTARTER *v2; // rdi

  v2 = (struct _ACTIVITY_RESTARTER *)(*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
  ArManagerAcquireLockExclusive(v2);
  *((_BYTE *)a1 + 592) &= ~1u;
  ArManagerReleaseLockExclusive(v2);
  RtlWakeAddressAll((char *)a1 + 592);
}
