/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x180051E88
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x180052390 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x1800892F0 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180051EF0 (RtlUnlockModuleSection.c)
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
