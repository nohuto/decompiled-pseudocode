/*
 * XREFs of ?HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007EF18
 * Callers:
 *     ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007DE90 (-HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007ECD0 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampPdcSetCurrentThreadWorker(struct _HOST_ACTIVITY_MANAGER **a1)
{
  DWORD CurrentThreadId; // eax
  struct _HOST_ACTIVITY_MANAGER *v3; // rcx

  HampManagerAcquireLockExclusive(*a1);
  CurrentThreadId = GetCurrentThreadId();
  v3 = *a1;
  *((_DWORD *)a1 + 24) = CurrentThreadId;
  HampManagerReleaseLockExclusive(v3);
}
