/*
 * XREFs of ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0
 * Callers:
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18001777C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017968 (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017BC4 (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003D368 (-HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004D7F4 (-HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004D88C (-HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampDepGroupCleanup@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007CAA0 (-HampDepGroupCleanup@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007DE90 (-HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E5BC (-HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E63C (-HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007ECD0 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007EF18 (-HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerAcquireLockExclusive(struct _HOST_ACTIVITY_MANAGER *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
}
