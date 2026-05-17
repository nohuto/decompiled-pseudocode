/*
 * XREFs of RtlpInitializeWnf @ 0x1800501D0
 * Callers:
 *     <none>
 * Callees:
 *     TpAllocTimer @ 0x18002E6A0 (TpAllocTimer.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     TpReleaseTimer @ 0x18004E360 (TpReleaseTimer.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800502A4 (RtlpWnfRegisterTpNotification.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpInitializeWnf()
{
  __int64 Heap; // rax
  __int64 v1; // rbx

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 96LL);
  v1 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046((void *)(Heap + 4), 0, 0x5CuLL);
    *(_DWORD *)v1 = 6293777;
    if ( (int)TpAllocTimer((__int64 *)(v1 + 80), (__int64)RtlpWnfRetryTimerCallback, 0, 0LL) >= 0 )
    {
      *(_QWORD *)(v1 + 88) = 0LL;
      *(_QWORD *)(v1 + 16) = 0LL;
      *(_QWORD *)(v1 + 24) = 0LL;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 48) = 0LL;
      *(_QWORD *)(v1 + 40) = v1 + 32;
      *(_QWORD *)(v1 + 32) = v1 + 32;
      *(_DWORD *)(v1 + 60) = 500;
      *(_DWORD *)(v1 + 64) = 1000;
      *(_DWORD *)(v1 + 68) = 3600000;
      *(_DWORD *)(v1 + 72) = 10;
      *(_DWORD *)(v1 + 56) = 1;
      if ( (int)RtlpWnfRegisterTpNotification() >= 0 )
      {
        qword_180187E00 = v1;
        return 1LL;
      }
      TpReleaseTimer(*(_QWORD *)(v1 + 80));
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  }
  return 0LL;
}
