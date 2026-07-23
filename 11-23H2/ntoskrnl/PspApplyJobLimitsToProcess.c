/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x1406A6EC4
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x1406A6FC4 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetJobLimitsProcessCallback @ 0x1409B2DD0 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     PspSetProcessPriorityByClass @ 0x1403502D8 (PspSetProcessPriorityByClass.c)
 *     KeSetQuantumProcess @ 0x140350DCC (KeSetQuantumProcess.c)
 *     KeSetDisableQuantumProcess @ 0x140363738 (KeSetDisableQuantumProcess.c)
 *     PspLockJobMemoryLimitsShared @ 0x1406A3F98 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1406A3FC4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspWritePebAffinityInfo @ 0x1407A28EC (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x1409AFAC0 (PspSetProcessAffinitySafe.c)
 */

char __fastcall PspApplyJobLimitsToProcess(__int64 a1, __int16 a2)
{
  _UNKNOWN **v2; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // esi
  bool v9; // zf
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 1296);
  if ( (a2 & 0x20) == 0 )
  {
    LODWORD(v2) = *(_DWORD *)(v6 + 1040);
    if ( ((unsigned __int8)v2 & 0x20) != 0 )
    {
      v9 = *(_BYTE *)(a1 + 1850) == 2;
      *(_BYTE *)(a1 + 1463) = *(_BYTE *)(v6 + 1084);
      LOBYTE(v2) = PspSetProcessPriorityByClass(a1, v9);
    }
  }
  if ( (a2 & 0x10) == 0 )
  {
    LODWORD(v2) = *(_DWORD *)(v6 + 1040);
    if ( ((unsigned __int8)v2 & 0x10) != 0 )
      LOBYTE(v2) = PspSetProcessAffinitySafe(a1, 1LL, v6 + 712);
  }
  if ( (a2 & 0x100) == 0 )
  {
    PspLockJobMemoryLimitsShared(v6, (__int64)CurrentThread);
    if ( (*(_DWORD *)(v6 + 1040) & 0x100) != 0 )
      v7 = *(_QWORD *)(v6 + 1000);
    else
      v7 = 0LL;
    *(_QWORD *)(a1 + 1600) = v7;
    LOBYTE(v2) = PspUnlockJobMemoryLimitsShared(v6, (__int64)CurrentThread);
  }
  if ( (a2 & 0x80u) == 0 && *(_BYTE *)(a1 + 1463) != 1 )
  {
    v8 = *(_DWORD *)(v6 + 1044);
    if ( v8 >= 0xA )
      v8 = *(_DWORD *)(v6 + 580);
    if ( PspUseJobSchedulingClasses )
      KeSetQuantumProcess(a1, *((_BYTE *)PspJobSchedulingClasses + v8));
    LOBYTE(v2) = KeSetDisableQuantumProcess(a1, v8 == 9);
  }
  return (char)v2;
}
