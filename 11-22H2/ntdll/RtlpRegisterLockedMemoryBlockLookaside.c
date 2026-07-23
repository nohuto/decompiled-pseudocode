/*
 * XREFs of RtlpRegisterLockedMemoryBlockLookaside @ 0x180052240
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180052330 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180052050 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180052100 (RtlLockModuleSection.c)
 */

__int64 RtlpRegisterLockedMemoryBlockLookaside()
{
  NTSTATUS v0; // esi
  int v1; // eax
  __int64 v3; // rbx
  PVOID *v4; // rdi
  PVOID *v5; // rdi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  v1 = RtlpLockedMemoryBlockLookasideCount;
  if ( RtlpLockedMemoryBlockLookasideCount )
  {
LABEL_2:
    RtlpLockedMemoryBlockLookasideCount = v1 + 1;
  }
  else
  {
    v3 = 0LL;
    v4 = (PVOID *)RtlpMemoryBlockLookasideCriticalRoutines;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*v4);
      if ( v0 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v4;
      if ( (unsigned int)v3 >= 4 )
      {
        v1 = RtlpLockedMemoryBlockLookasideCount;
        goto LABEL_2;
      }
    }
    if ( (_DWORD)v3 )
    {
      v5 = (PVOID *)&RtlpMemoryBlockLookasideCriticalRoutines[v3];
      do
      {
        RtlUnlockModuleSection(*--v5);
        LODWORD(v3) = v3 - 1;
      }
      while ( (_DWORD)v3 );
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  return (unsigned int)v0;
}
