/*
 * XREFs of MiFinishPlaceholderVadReplacement @ 0x140A47FA8
 * Callers:
 *     MiReserveUserMemory @ 0x14071F5E0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiVadDeleted @ 0x1402756A0 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140275700 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x1402757C0 (MiLockVadShared.c)
 *     MiGetProcessPartition @ 0x140275924 (MiGetProcessPartition.c)
 *     MiSetVadDeleted @ 0x140289B14 (MiSetVadDeleted.c)
 *     MiDecrementVadsBeingDeleted @ 0x1406186E8 (MiDecrementVadsBeingDeleted.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409E7248 (PerfInfoLogVirtualAlloc.c)
 */

LONG __fastcall MiFinishPlaceholderVadReplacement(char *P, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rsi
  __int16 *ProcessPartition; // rax

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a3 )
  {
    MiLockVadShared((__int64)CurrentThread, (__int64)P);
    if ( !(unsigned int)MiVadDeleted((__int64)P) && (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
    {
      ProcessPartition = (__int16 *)MiGetProcessPartition(Process);
      PerfInfoLogVirtualAlloc(
        (*((unsigned int *)P + 6) | ((unsigned __int64)(unsigned __int8)P[32] << 32)) << 12,
        ((*((unsigned int *)P + 7) | ((unsigned __int64)(unsigned __int8)P[33] << 32))
       - (*((unsigned int *)P + 6) | ((unsigned __int64)(unsigned __int8)P[32] << 32))
       + 1) << 12,
        Process,
        0x2000,
        *ProcessPartition,
        *ProcessPartition);
    }
    MiUnlockAndDereferenceVadShared(P);
  }
  else
  {
    MiSetVadDeleted((__int64)P);
    MiDeleteVad((unsigned int *)P, 0LL, 0);
  }
  return MiDecrementVadsBeingDeleted(a2);
}
