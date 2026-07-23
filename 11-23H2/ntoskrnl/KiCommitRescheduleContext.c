/*
 * XREFs of KiCommitRescheduleContext @ 0x140308804
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KiExitThreadWait @ 0x1402BBF20 (KiExitThreadWait.c)
 *     KiSetSystemAffinityThread @ 0x1403073EC (KiSetSystemAffinityThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403081E4 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiHandleDeferredPreemption @ 0x140309458 (KiHandleDeferredPreemption.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14039E0CC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x1404112D8 (KiSoftParkElectionUnparkProcessor.c)
 *     KiParkCurrentProcessor @ 0x14057E38C (KiParkCurrentProcessor.c)
 * Callees:
 *     KiCommitRescheduleContextEntry @ 0x140242F60 (KiCommitRescheduleContextEntry.c)
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
