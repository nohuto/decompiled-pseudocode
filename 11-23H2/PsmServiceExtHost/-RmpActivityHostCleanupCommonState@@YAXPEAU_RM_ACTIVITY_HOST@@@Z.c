/*
 * XREFs of ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038364
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038054 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FF58 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostCleanupCommonState(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 165);
  if ( v2 )
  {
    TpReleaseWork(v2);
    *((_QWORD *)a1 + 165) = 0LL;
  }
}
