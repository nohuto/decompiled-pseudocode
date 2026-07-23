/*
 * XREFs of PopPowerAggregatorAllocateLogEntry @ 0x1407A9C74
 * Callers:
 *     PopPowerAggregatorRecordIntent @ 0x1407A9B64 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874ED8 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1408782B8 (PopPowerAggregatorSetCurrentState.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     memset @ 0x140435400 (memset.c)
 */

LARGE_INTEGER *__fastcall PopPowerAggregatorAllocateLogEntry(LARGE_INTEGER *a1, ULONG a2)
{
  unsigned __int64 v4; // r9
  LARGE_INTEGER *v5; // rbx
  LARGE_INTEGER *result; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned __int64)a1[37].LowPart << 7;
  a1[37].LowPart = ((unsigned __int8)a1[37].LowPart + 1) & 0x1F;
  v5 = (LARGE_INTEGER *)((char *)a1 + v4);
  memset((char *)&a1[38].QuadPart + v4 + 4, 0, 0x7CuLL);
  v5[38].LowPart = a2;
  v5[39] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  result = v5 + 38;
  v5[40] = *a1;
  return result;
}
