/*
 * XREFs of ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007E6A4
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074DA0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcDamControlCallback@@YAJPEAXK@Z @ 0x18007DD60 (-HampPdcDamControlCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z @ 0x18007E490 (-HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z.c)
 * Callees:
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18001777C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017B68 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004D7F4 (-HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007E770 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
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
