/*
 * XREFs of ?HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z @ 0x180070634
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x180053810 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180013B3C (CempLockSleepConditionVariableExclusive.c)
 */

void __fastcall HampHostTryWaitForGenerationRevision(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 == *((_QWORD *)a1 + 102) )
  {
    v5 = 0xFFFFFFFFLL;
    if ( a3 < 0xFFFFFFFF )
      v5 = (unsigned int)a3;
    v6 = -10000 * v5;
    CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 696, (__int64)&v6);
  }
  if ( a2 != *((_QWORD *)a1 + 102) )
    *((_QWORD *)a1 + 83) |= 0x400000000000uLL;
}
