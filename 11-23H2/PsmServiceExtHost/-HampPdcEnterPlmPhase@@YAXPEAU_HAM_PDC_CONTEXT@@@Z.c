/*
 * XREFs of ?HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E2FC
 * Callers:
 *     ?HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z @ 0x18007E610 (-HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017B68 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007E430 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 */

void __fastcall HampPdcEnterPlmPhase(struct _HOST_ACTIVITY_MANAGER **a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  HampManagerAcquireLockExclusive(*a1);
  RtlQueryUnbiasedInterruptTime(&v3);
  v2 = *a1;
  *((_DWORD *)a1 + 27) = v3 / 0x2710;
  HampManagerReleaseLockExclusive(v2);
  HampPdcNotifyCsState((struct _HAM_PDC_CONTEXT *)a1, 1u);
  TpPostWork(a1[9]);
}
