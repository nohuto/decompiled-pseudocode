/*
 * XREFs of MmReportParkedProcessors @ 0x140656398
 * Callers:
 *     PpmParkReportMask @ 0x14035AF00 (PpmParkReportMask.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
 *     MiMoveBackgroundZeroThreads @ 0x140655500 (MiMoveBackgroundZeroThreads.c)
 */

void MmReportParkedProcessors()
{
  wchar_t *v0; // rbx
  __int16 *v1; // rcx
  __int64 v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C66BC0);
  v0 = PpmPerfCoreParkingMask;
  if ( RtlCompareMemory(&word_140C66BC8, PpmPerfCoreParkingMask, 0x108uLL) == 264 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66BC0);
  }
  else
  {
    v1 = &word_140C66BC8;
    v2 = 2LL;
    do
    {
      v3 = *((_OWORD *)v0 + 1);
      *(_OWORD *)v1 = *(_OWORD *)v0;
      v4 = *((_OWORD *)v0 + 2);
      *((_OWORD *)v1 + 1) = v3;
      v5 = *((_OWORD *)v0 + 3);
      *((_OWORD *)v1 + 2) = v4;
      v6 = *((_OWORD *)v0 + 4);
      *((_OWORD *)v1 + 3) = v5;
      v7 = *((_OWORD *)v0 + 5);
      *((_OWORD *)v1 + 4) = v6;
      v8 = *((_OWORD *)v0 + 6);
      *((_OWORD *)v1 + 5) = v7;
      v9 = *((_OWORD *)v0 + 7);
      v0 += 64;
      *((_OWORD *)v1 + 6) = v8;
      v1 += 64;
      *((_OWORD *)v1 - 1) = v9;
      --v2;
    }
    while ( v2 );
    *(_QWORD *)v1 = *(_QWORD *)v0;
    if ( stru_140C66CD0.Parameter )
    {
      if ( stru_140C66CD0.Parameter == (void *)1 )
        stru_140C66CD0.Parameter = (void *)2;
    }
    else
    {
      stru_140C66CD0.List.Flink = 0LL;
      stru_140C66CD0.WorkerRoutine = (void (__fastcall *)(void *))MiSendParkedCoreUpdateToAllChildPartitions;
      stru_140C66CD0.Parameter = (void *)1;
      ExQueueWorkItem(&stru_140C66CD0, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66BC0);
    MiMoveBackgroundZeroThreads((__int64)MiSystemPartition, 1LL);
  }
}
