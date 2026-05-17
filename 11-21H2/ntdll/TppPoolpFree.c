/*
 * XREFs of TppPoolpFree @ 0x18008701C
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001B960 (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     TpUnreserveTaskPost @ 0x180071220 (TpUnreserveTaskPost.c)
 *     TpReleasePool @ 0x180086DF0 (TpReleasePool.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     TppDestroyTimerSubQueue @ 0x18008712C (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

__int64 __fastcall TppPoolpFree(__int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  TppDestroyTimerSubQueue(a1 + 120);
  TppDestroyTimerSubQueue(a1 + 240);
  NtClose(*(HANDLE *)(a1 + 64));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 16));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 40));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 48));
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, v3, v4, v5);
  v6 = *(_QWORD *)(a1 + 384);
  v7 = *(_QWORD **)(a1 + 392);
  if ( *(_QWORD *)(v6 + 8) != a1 + 384 || *v7 != a1 + 384 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, a1);
}
