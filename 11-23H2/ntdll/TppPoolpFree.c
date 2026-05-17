/*
 * XREFs of TppPoolpFree @ 0x1800858AC
 * Callers:
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180033284 (TppCleanupGroupMemberInitialize.c)
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     TpUnreserveTaskPost @ 0x18004FA30 (TpUnreserveTaskPost.c)
 *     TpReleasePool @ 0x180085680 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     TppDestroyTimerSubQueue @ 0x1800859BC (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

__int64 __fastcall TppPoolpFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rdx

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
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v3 = *(_QWORD *)(a1 + 384);
  v4 = *(_QWORD **)(a1 + 392);
  if ( *(_QWORD *)(v3 + 8) != a1 + 384 || *v4 != a1 + 384 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, a1);
}
