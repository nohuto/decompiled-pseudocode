/*
 * XREFs of NtCompactKeys @ 0x140A0D620
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14029788C (CmpAllocateTransientPoolWithQuota.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     CmCheckNoTxContext @ 0x140691C88 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     CmpLogUnsupportedOperation @ 0x140A200A0 (CmpLogUnsupportedOperation.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

NTSTATUS __cdecl NtCompactKeys(ULONG Count, HANDLE KeyArray[])
{
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rsi
  ULONG v5; // r12d
  char v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // al
  unsigned __int64 v13; // r13
  struct _PRIVILEGE_SET *v14; // r15
  ULONG v15; // r15d
  struct _PRIVILEGE_SET *v16; // r13
  __int64 v17; // rax
  PVOID *v18; // rdi
  __int64 v19; // r14
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+40h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-38h] BYREF
  char v25; // [rsp+A8h] [rbp+20h]

  v24 = 0LL;
  TransientPoolWithQuota = 0LL;
  v5 = 0;
  v6 = 0;
  CmpInitializeThreadInfo((__int64)&v24);
  v9 = CmCheckNoTxContext();
  if ( v9 < 0 )
    goto LABEL_4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
  {
    v9 = -1073741727;
LABEL_4:
    v12 = 0;
    goto LABEL_41;
  }
  if ( !Count )
  {
    v9 = 0;
    goto LABEL_7;
  }
  if ( Count >= 0x1FFFFFFF )
  {
    v9 = -1073741811;
    goto LABEL_4;
  }
  v13 = 8 * Count;
  TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(v8, v13, 1633832259LL);
  if ( !TransientPoolWithQuota )
  {
    v9 = -1073741670;
    v12 = 0;
    v6 = 0;
    goto LABEL_41;
  }
  if ( PreviousMode == 1 && (_DWORD)v13 )
  {
    if ( ((unsigned __int8)KeyArray & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&KeyArray[v13 / 8] > 0x7FFFFFFF0000LL || &KeyArray[v13 / 8] < KeyArray )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(TransientPoolWithQuota, KeyArray, (unsigned int)v13);
  v14 = TransientPoolWithQuota;
  do
  {
    LOBYTE(v11) = PreviousMode;
    v9 = CmObReferenceObjectByHandle(
           *(_QWORD *)&v14->PrivilegeCount,
           131078,
           v10,
           v11,
           (__int64)TransientPoolWithQuota + 8 * v5,
           0LL);
    if ( v9 < 0 )
    {
      v12 = 0;
      v6 = 0;
      goto LABEL_41;
    }
    ++v5;
    v14 = (struct _PRIVILEGE_SET *)((char *)v14 + 8);
  }
  while ( v5 < Count );
  v6 = CmpAcquireShutdownRundown(v8, v7, v10);
  v25 = v6;
  if ( !v6 )
  {
    v9 = -1073741431;
    v12 = 0;
    goto LABEL_41;
  }
  CmpLockRegistryExclusive();
  v23 = 0LL;
  v15 = 0;
  v16 = TransientPoolWithQuota;
  do
  {
    v22 = *(_QWORD *)&v16->PrivilegeCount;
    v9 = CmpPerformKeyBodyDeletionCheck(*(_QWORD *)&v16->PrivilegeCount, 0LL);
    if ( v9 < 0 )
      goto LABEL_39;
    if ( !v15 )
      v23 = *(_QWORD *)(*(_QWORD *)(v22 + 8) + 32LL);
    v17 = *(_QWORD *)(v22 + 8);
    v8 = v23;
    if ( v23 != *(_QWORD *)(v17 + 32) || (v8 = *(unsigned __int16 *)(v17 + 186), (v8 & 4) != 0) || (v8 & 0x10) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_39;
    }
    if ( *(_WORD *)(v17 + 66) )
    {
      v9 = -1073741822;
LABEL_39:
      v12 = 1;
      v6 = v25;
      goto LABEL_41;
    }
    ++v15;
    v16 = (struct _PRIVILEGE_SET *)((char *)v16 + 8);
  }
  while ( v15 < Count );
  v6 = v25;
  v9 = 0;
  CmpUnlockRegistry(v8, v7, v10, v11);
  CmpLogUnsupportedOperation(7LL);
LABEL_7:
  v12 = 0;
LABEL_41:
  if ( v12 )
    CmpUnlockRegistry(v8, v7, v10, v11);
  if ( v6 )
    CmpReleaseShutdownRundown(v8, v7);
  if ( TransientPoolWithQuota )
  {
    if ( v5 )
    {
      v18 = (PVOID *)TransientPoolWithQuota;
      v19 = v5;
      do
      {
        ObfDereferenceObject(*v18++);
        --v19;
      }
      while ( v19 );
    }
    CmSiFreeMemory(TransientPoolWithQuota);
  }
  CmCleanupThreadInfo((__int64 *)&v24);
  return v9;
}
