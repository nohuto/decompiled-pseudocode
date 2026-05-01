/*
 * XREFs of ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017BC4
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800188E0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampHostEndInSwapTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v1; // rbx
  int v2; // ecx

  v1 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 392;
  HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v1);
  v2 = *(_DWORD *)(v1 + 1064) - 1;
  *(_DWORD *)(v1 + 1064) = v2;
  if ( *(_QWORD *)(v1 + 1048) != v1 + 1048 && !v2 )
  {
    ++*(_DWORD *)(v1 + 1068);
    RtlWakeAddressAll(v1 + 1068);
  }
  HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v1);
}
