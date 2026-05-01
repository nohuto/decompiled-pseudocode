/*
 * XREFs of ?RmpPartitionTableRundown@@YAXPEAU_RM_PARTITION_TABLE@@@Z @ 0x180085AC4
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180082054 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x180013B3C (CempLockSleepConditionVariableExclusive.c)
 */

void __fastcall RmpPartitionTableRundown(struct _RM_PARTITION_TABLE *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  *((_DWORD *)a1 + 10) |= 1u;
  while ( *((_DWORD *)a1 + 19) )
    CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 32, 0LL);
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  while ( 1 )
  {
    v2 = *((_DWORD *)a1 + 21);
    if ( !v2 )
      break;
    RtlWaitOnAddress((char *)a1 + 84, &v2, 4LL);
  }
}
