/*
 * XREFs of ?HampHostTryWaitForGenerationRevision@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_K1@Z @ 0x18007AD84
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800503AC (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x18003E5B0 (CempLockSleepConditionVariableExclusive.c)
 */

void __fastcall HampHostTryWaitForGenerationRevision(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 102);
  if ( a2 == v3 )
  {
    v6 = 0xFFFFFFFFLL;
    if ( a3 < 0xFFFFFFFF )
      v6 = (unsigned int)a3;
    v7 = -10000 * v6;
    CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 696, (__int64)&v7);
    v3 = *((_QWORD *)a1 + 102);
  }
  if ( a2 != v3 )
    *((_QWORD *)a1 + 83) |= 0x400000000000uLL;
}
