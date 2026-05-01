/*
 * XREFs of ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007F34C
 * Callers:
 *     ?HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z @ 0x18007F220 (-HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007AA0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007B28 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007F500 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampSystemCheckNotifyForPowerChange@@YAXE@Z @ 0x180092AFC (-HampSystemCheckNotifyForPowerChange@@YAXE@Z.c)
 */

void __fastcall HampPdcEnterDamPhase(struct _HOST_ACTIVITY_MANAGER **a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  HampSystemCheckNotifyForPowerChange(1u);
  HampManagerAcquireLockExclusive(*a1);
  RtlQueryUnbiasedInterruptTime(&v3);
  v2 = *a1;
  *((_DWORD *)a1 + 28) = v3 / 0x2710;
  HampManagerReleaseLockExclusive(v2);
  HampPdcNotifyCsState((struct _HAM_PDC_CONTEXT *)a1, 0);
  TpWaitForWork(a1[11], 0LL);
  TpPostWork(a1[10]);
}
