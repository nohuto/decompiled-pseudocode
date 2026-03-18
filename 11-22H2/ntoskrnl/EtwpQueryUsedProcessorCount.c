/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140228144
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140228540 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x140363E18 (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x140601088 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x140602A24 (EtwpReenableCompression.c)
 *     EtwpRealtimeSaveState @ 0x140682854 (EtwpRealtimeSaveState.c)
 *     EtwpAdjustFreeBuffers @ 0x1406BDDAC (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1406BDE18 (EtwpFlushActiveBuffers.c)
 *     NtTraceControl @ 0x140725C40 (NtTraceControl.c)
 *     EtwpFreeTraceBufferPool @ 0x14078E4AC (EtwpFreeTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1407B3A70 (EtwpInitLoggerContext.c)
 *     EtwpFinalizeHeader @ 0x1407F64A8 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F7664 (EtwpUpdateFileHeader.c)
 *     EtwpAllocateTraceBufferPool @ 0x1407F79D4 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeader @ 0x1407F7BE4 (EtwpAddLogHeader.c)
 *     EtwpUpdateTrace @ 0x1407F8630 (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x140853118 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1408A7F08 (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x140540520 (HvlQueryStartedProcessors.c)
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
