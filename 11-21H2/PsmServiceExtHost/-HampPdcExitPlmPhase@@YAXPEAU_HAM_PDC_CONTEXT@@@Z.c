/*
 * XREFs of ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007F4A4
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcPlmControlCallback@@YAJPEAXK@Z @ 0x18007F5E0 (-HampPdcPlmControlCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z @ 0x18007F710 (-HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z.c)
 * Callees:
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180007A5C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007B28 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004FCB4 (-HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007F500 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 */

void __fastcall HampPdcExitPlmPhase(struct _HOST_ACTIVITY_MANAGER **a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx

  HampPdcBoostForPhaseExit(a1);
  v2 = *a1;
  *((_DWORD *)a1 + 27) = 0;
  HampManagerReleaseLockExclusive(v2);
  HampPdcNotifyCsState((struct _HAM_PDC_CONTEXT *)a1, 1u);
  HampPdcSignalWorker(a1, 1);
  TpWaitForWork(a1[9], 0LL);
  HampPdcEndBoostForPhaseExit(a1);
}
