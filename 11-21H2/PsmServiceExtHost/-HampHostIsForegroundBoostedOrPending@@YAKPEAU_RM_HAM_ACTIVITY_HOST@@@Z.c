/*
 * XREFs of ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E0E8
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800076D0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002A1C0 (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18003D160 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 */

__int64 __fastcall HampHostIsForegroundBoostedOrPending(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_ACTIVITY *i; // rax
  __int64 v2; // rdx
  __int64 v4; // r8
  int v5; // eax

  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v4) )
  {
    if ( !i )
      return 0LL;
    LOBYTE(v2) = 1;
    if ( (unsigned int)HampActIsStartedOrReachedPendState(i, v2) )
    {
      v5 = RmpImportanceToRequiredExecutionSpeed(*(_DWORD *)(v4 + 424));
      if ( (*(_DWORD *)(v4 + 480) & 3) > v5 )
        v5 = *(_DWORD *)(v4 + 480) & 3;
      if ( v5 >= 2 )
        break;
    }
  }
  return 1LL;
}
