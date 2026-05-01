/*
 * XREFs of ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DC94
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FF58 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostCompleteInitialization(struct _RM_ACTIVITY_HOST *a1)
{
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 181);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 2) <= 1 )
    __fastfail(0xEu);
  RmpActivityHostAddToTables(a1);
}
