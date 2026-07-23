/*
 * XREFs of NtSetBootEntryOrder @ 0x1409FF9F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x140950524 (IoSetEnvironmentVariableEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  __int64 v2; // rsi
  void *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  unsigned int v8; // r15d
  char *v9; // rcx
  unsigned int i; // ecx
  struct _KTHREAD *v11; // rax
  NTSTATUS v12; // edi

  v2 = Count;
  Pool2 = 0LL;
  if ( dword_140C31AF0 != 2 )
    return -1073741822;
  if ( Count > 0x3FFFFFFF )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return -1073741727;
  if ( (_DWORD)v2 )
  {
    v8 = v2;
    Pool2 = (void *)ExAllocatePool2(64LL, 2 * v2, 1920364101LL);
    if ( !Pool2 )
      return -1073741670;
    if ( PreviousMode && v8 * 4 )
    {
      if ( ((unsigned __int8)Ids & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = (char *)&Ids[v8];
      if ( (unsigned __int64)v9 > 0x7FFFFFFF0000LL || v9 < (char *)Ids )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      if ( Ids[i] > 0xFFFF )
      {
        ExFreePoolWithTag(Pool2, 0);
        return -1073741811;
      }
      *((_WORD *)Pool2 + i) = Ids[i];
    }
  }
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v12 = IoSetEnvironmentVariableEx(
          (const size_t *)L"BootOrder",
          (__int64)&EfiBootVariablesGuid,
          (__int64)Pool2,
          2 * (int)v2,
          1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 == -1073741568 )
    v12 = 0;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v12;
}
