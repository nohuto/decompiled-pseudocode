/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140228124
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140228520 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpBuffersFlushRequired @ 0x140364468 (EtwpBuffersFlushRequired.c)
 *     EtwpAddLastDroppedEvent @ 0x140601018 (EtwpAddLastDroppedEvent.c)
 *     EtwpReenableCompression @ 0x1406029B4 (EtwpReenableCompression.c)
 *     EtwpRealtimeSaveState @ 0x140682854 (EtwpRealtimeSaveState.c)
 *     EtwpAdjustFreeBuffers @ 0x1406BDDAC (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1406BDE18 (EtwpFlushActiveBuffers.c)
 *     NtTraceControl @ 0x140725BD0 (NtTraceControl.c)
 *     EtwpFreeTraceBufferPool @ 0x14078DF9C (EtwpFreeTraceBufferPool.c)
 *     EtwpInitLoggerContext @ 0x1407B34C0 (EtwpInitLoggerContext.c)
 *     EtwpFinalizeHeader @ 0x1407F5E38 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F6FF4 (EtwpUpdateFileHeader.c)
 *     EtwpAllocateTraceBufferPool @ 0x1407F7364 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeader @ 0x1407F7574 (EtwpAddLogHeader.c)
 *     EtwpUpdateTrace @ 0x1407F7F7C (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x140852208 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1408A7A28 (EtwpBufferingModeFlush.c)
 * Callees:
 *     HvlQueryStartedProcessors @ 0x140540470 (HvlQueryStartedProcessors.c)
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
