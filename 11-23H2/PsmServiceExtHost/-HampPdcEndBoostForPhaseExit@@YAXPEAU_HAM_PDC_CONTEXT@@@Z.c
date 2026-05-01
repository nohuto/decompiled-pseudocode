/*
 * XREFs of ?HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004D8CC
 * Callers:
 *     ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007DEB0 (-HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E3D4 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampPdcEndBoostForPhaseExit(struct _HOST_ACTIVITY_MANAGER **a1)
{
  HANDLE CurrentProcess; // rax

  HampManagerAcquireLockExclusive(*a1);
  if ( *((_BYTE *)a1 + 117) )
  {
    CurrentProcess = GetCurrentProcess();
    NtSetInformationProcess(CurrentProcess, ProcessPriorityClass, (char *)a1 + 116, 2u);
    *((_BYTE *)a1 + 117) = 0;
  }
  HampManagerReleaseLockExclusive(*a1);
}
