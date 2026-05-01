/*
 * XREFs of ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800513D8
 * Callers:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x18003E2C0 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008573C (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpQoSDisableForHostOnTimerExpiry(struct _RM_ACTIVITY_HOST *a1)
{
  char *v1; // rbx

  v1 = (char *)a1 + 64;
  HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64), 0);
  *((_QWORD *)v1 + 83) |= 0x4000000000000uLL;
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v1, 0);
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v1);
  RmpQoSDisableWatchdogForHost(a1);
}
