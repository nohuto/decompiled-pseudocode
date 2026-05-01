/*
 * XREFs of ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800021A4
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180004EF4 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18004FBEC (-ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 *     ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006D6C0 (-ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArActStartAsync(struct _AR_ACTIVITY *a1)
{
  __int64 result; // rax

  result = HamStartActivityAsync(
             *(_QWORD *)((*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 72),
             *((_QWORD *)a1 + 1),
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)a1 + 32) = 1;
    return 0LL;
  }
  return result;
}
