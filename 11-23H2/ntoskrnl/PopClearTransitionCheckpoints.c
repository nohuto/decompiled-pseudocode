/*
 * XREFs of PopClearTransitionCheckpoints @ 0x1409807B8
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140AA6950 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void PopClearTransitionCheckpoints()
{
  PVOID v0; // rcx
  __int64 v1; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTransitionCheckpointLock);
  while ( 1 )
  {
    v0 = PopTransitionCheckpoints;
    if ( PopTransitionCheckpoints == &PopTransitionCheckpoints )
      break;
    if ( *((PVOID **)PopTransitionCheckpoints + 1) != &PopTransitionCheckpoints
      || (v1 = *(_QWORD *)PopTransitionCheckpoints,
          *(PVOID *)(*(_QWORD *)PopTransitionCheckpoints + 8LL) != PopTransitionCheckpoints) )
    {
      __fastfail(3u);
    }
    PopTransitionCheckpoints = *(PVOID *)PopTransitionCheckpoints;
    *(_QWORD *)(v1 + 8) = &PopTransitionCheckpoints;
    ExFreePoolWithTag(v0, 0x50434B50u);
  }
  PopReleaseRwLock(&PopTransitionCheckpointLock);
}
