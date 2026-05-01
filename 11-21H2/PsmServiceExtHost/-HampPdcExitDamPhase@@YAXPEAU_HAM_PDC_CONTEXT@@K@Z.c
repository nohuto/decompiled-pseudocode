/*
 * XREFs of ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007F434
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcDamControlCallback@@YAJPEAXK@Z @ 0x18007EB00 (-HampPdcDamControlCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z @ 0x18007F220 (-HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z.c)
 * Callees:
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180007A5C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007B28 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004FCB4 (-HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007F500 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 */

void __fastcall HampPdcExitDamPhase(struct _HOST_ACTIVITY_MANAGER **a1, int a2)
{
  struct _HOST_ACTIVITY_MANAGER *v4; // rcx

  HampPdcBoostForPhaseExit(a1);
  v4 = *a1;
  *((_DWORD *)a1 + 28) = 0;
  HampManagerReleaseLockExclusive(v4);
  HampPdcNotifyCsState((struct _HAM_PDC_CONTEXT *)a1, 0);
  HampPdcSignalWorker(a1, 1);
  TpWaitForWork(a1[10], 0LL);
  if ( a2 )
    TpPostWork(a1[11]);
}
