/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x180051FE8
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800524F0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180088AF0 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180052050 (RtlUnlockModuleSection.c)
 */

signed __int64 RtlpUnregisterLockedMemoryBlockLookaside()
{
  __int64 (__fastcall **v1)(); // rbx
  __int64 v2; // rdi

  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v1 = RtlpMemoryBlockLookasideCriticalRoutines;
    v2 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v1++);
      --v2;
    }
    while ( v2 );
  }
  return RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}
