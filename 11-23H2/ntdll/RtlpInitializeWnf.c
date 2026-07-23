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

__int64 __fastcall RtlpInitializeWnf(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  char *Heap; // rax
  char *v4; // rbx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v4 = Heap;
  if ( Heap )
  {
    memset_thunk_772440563353939046(Heap + 4, 0, 0x5CuLL);
    *(_DWORD *)v4 = 6293777;
    if ( TpAllocTimer((PTP_TIMER *)v4 + 10, RtlpWnfRetryTimerCallback, 0LL, 0LL) >= 0 )
    {
      *((_QWORD *)v4 + 11) = 0LL;
      *((_QWORD *)v4 + 2) = 0LL;
      *((_QWORD *)v4 + 3) = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 6) = 0LL;
      *((_QWORD *)v4 + 5) = v4 + 32;
      *((_QWORD *)v4 + 4) = v4 + 32;
      *((_DWORD *)v4 + 15) = 500;
      *((_DWORD *)v4 + 16) = 1000;
      *((_DWORD *)v4 + 17) = 3600000;
      *((_DWORD *)v4 + 18) = 10;
      *((_DWORD *)v4 + 14) = 1;
      if ( (int)RtlpWnfRegisterTpNotification() >= 0 )
      {
        qword_180187E00 = (__int64)v4;
        return 1LL;
      }
      TpReleaseTimer(*((PTP_TIMER *)v4 + 10));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return 0LL;
}
