/*
 * XREFs of ?HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004D834
 * Callers:
 *     ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007E364 (-HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E3D4 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampPdcBoostForPhaseExit(struct _HOST_ACTIVITY_MANAGER **a1)
{
  HANDLE CurrentProcess; // rax
  HANDLE v3; // rax
  char v4; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+41h] [rbp+9h]
  __int16 ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  CurrentProcess = GetCurrentProcess();
  NtQueryInformationProcess(CurrentProcess, ProcessPriorityClass, &ProcessInformation, 2u, 0LL);
  v4 = ProcessInformation;
  v5 = 3;
  v3 = GetCurrentProcess();
  NtSetInformationProcess(v3, ProcessPriorityClass, &v4, 2u);
  HampManagerAcquireLockExclusive(*a1);
  if ( !*((_BYTE *)a1 + 117) )
    *((_WORD *)a1 + 58) = ProcessInformation;
}
