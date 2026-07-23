/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140228234
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140228630 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x140364608 (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x140601568 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x140602F04 (EtwpReenableCompression.c)
 *     EtwpRealtimeSaveState @ 0x140682854 (EtwpRealtimeSaveState.c)
 *     EtwpAdjustFreeBuffers @ 0x1406BDDDC (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1406BDE48 (EtwpFlushActiveBuffers.c)
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 *     EtwpFreeTraceBufferPool @ 0x14078E18C (EtwpFreeTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1407B36B0 (EtwpInitLoggerContext.c)
 *     EtwpFinalizeHeader @ 0x1407F6108 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F72C4 (EtwpUpdateFileHeader.c)
 *     EtwpAllocateTraceBufferPool @ 0x1407F7634 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeader @ 0x1407F7844 (EtwpAddLogHeader.c)
 *     EtwpUpdateTrace @ 0x1407F824C (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x140852508 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1408A7C78 (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x140540B30 (HvlQueryStartedProcessors.c)
 */

__int64 __fastcall EtwpQueryUsedProcessorCount(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) != 0 && (int)HvlQueryStartedProcessors(&v3, 0LL) >= 0 )
    return v3;
  result = 1LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
    return (unsigned int)KeNumberProcessors_0;
  return result;
}
