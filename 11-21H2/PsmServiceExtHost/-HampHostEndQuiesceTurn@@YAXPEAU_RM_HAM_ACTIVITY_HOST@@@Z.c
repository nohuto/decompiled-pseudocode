/*
 * XREFs of ?HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AC94
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003ACDC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003AD18 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampHostEndQuiesceTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
  HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v1);
  *(_DWORD *)(v1 + 340) &= ~4u;
  HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v1);
  RtlWakeConditionVariable(v1 + 320);
}
