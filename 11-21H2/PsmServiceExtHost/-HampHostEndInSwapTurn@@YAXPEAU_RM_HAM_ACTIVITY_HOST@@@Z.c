/*
 * XREFs of ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800079F4
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800076D0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007AA0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampHostEndInSwapTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v1; // rbx
  int v2; // ecx

  v1 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 168;
  HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v1);
  v2 = *(_DWORD *)(v1 + 752) - 1;
  *(_DWORD *)(v1 + 752) = v2;
  if ( *(_QWORD *)(v1 + 736) != v1 + 736 && !v2 )
  {
    ++*(_DWORD *)(v1 + 756);
    RtlWakeAddressAll(v1 + 756);
  }
  HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v1);
}
