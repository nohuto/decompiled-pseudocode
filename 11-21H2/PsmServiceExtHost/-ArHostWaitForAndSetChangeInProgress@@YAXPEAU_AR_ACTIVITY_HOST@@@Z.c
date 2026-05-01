/*
 * XREFs of ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005200
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

void __fastcall ArHostWaitForAndSetChangeInProgress(struct _AR_ACTIVITY_HOST *a1)
{
  struct _ACTIVITY_RESTARTER *v2; // rdi
  char v3; // al
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _ACTIVITY_RESTARTER *)(*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
  while ( 1 )
  {
    ArManagerAcquireLockExclusive(v2);
    v3 = *((_BYTE *)a1 + 592);
    if ( (v3 & 1) == 0 )
      break;
    v4 = *((_BYTE *)a1 + 592);
    ArManagerReleaseLockExclusive(v2);
    RtlWaitOnAddress((char *)a1 + 592, &v4, 1LL);
  }
  *((_BYTE *)a1 + 592) = v3 | 1;
  ArManagerReleaseLockExclusive(v2);
}
