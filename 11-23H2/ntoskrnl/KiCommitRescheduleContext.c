/*
 * XREFs of KiCommitRescheduleContext @ 0x140308574
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KiExitThreadWait @ 0x1402BBC90 (KiExitThreadWait.c)
 *     KiSetSystemAffinityThread @ 0x14030715C (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307584 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307F54 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403082A8 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x1403091C8 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x1403111A0 (KeWaitForMultipleObjects.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039DEEC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x1404110CC (KiSoftParkElectionUnparkProcessor.c)
 *     KiParkCurrentProcessor @ 0x14057DE9C (KiParkCurrentProcessor.c)
 * Callees:
 *     KiCommitRescheduleContextEntry @ 0x140242E90 (KiCommitRescheduleContextEntry.c)
 */

char __fastcall KiCommitRescheduleContext(unsigned __int8 *a1, __int64 a2, char a3, _QWORD *a4)
{
  char v4; // di
  char v5; // si
  unsigned int v9; // ebp

  v4 = 0;
  v5 = a3 | 2;
  v9 = 0;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    v5 = a3;
  if ( *a1 )
  {
    do
    {
      v4 |= KiCommitRescheduleContextEntry((__int64 *)&a1[32 * v9 + 16 + 8 * v9], a2, v5, a4);
      ++v9;
    }
    while ( v9 < *a1 );
  }
  if ( *((_DWORD *)a1 + 2) == 1 )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 34904LL) + 1LL) = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 34904LL)
                                                                                              + 1LL)
                                                                                   + 1) < **(_BYTE **)(*((_QWORD *)a1 + 2) + 34904LL)
                                                                 ? *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 34904LL)
                                                                            + 1LL)
                                                                 + 1
                                                                 : 0;
  return v4;
}
