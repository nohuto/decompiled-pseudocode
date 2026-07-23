/*
 * XREFs of PopPowerAggregatorSetCurrentState @ 0x1408782B8
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140878110 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1408781A4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140993710 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1409937E4 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140993F00 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140993F50 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140994090 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994140 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407A9C74 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407A9EF0 (PopPowerAggregatorDiagTraceEvent.c)
 */

LARGE_INTEGER *__fastcall PopPowerAggregatorSetCurrentState(LARGE_INTEGER *a1, __int64 a2)
{
  ULONG LowPart; // eax
  LARGE_INTEGER *v3; // rbx
  LARGE_INTEGER *result; // rax
  __int128 v7; // xmm1
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+3Ch] [rbp-1Ch]

  LowPart = a1[3].LowPart;
  v3 = a1 + 7;
  v8.Ptr = (ULONGLONG)&a1[7];
  v8.Reserved = 0;
  *(_DWORD *)(a2 + 4) = LowPart;
  *(LARGE_INTEGER *)(a2 + 8) = a1[4];
  v8.Size = 4;
  v9 = a2;
  v11 = 0;
  v10 = 4;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_INTERNAL_STATE_CHANGE, 2u, &v8);
  result = PopPowerAggregatorAllocateLogEntry(a1, 2u);
  *(_OWORD *)&result[3].LowPart = *(_OWORD *)&v3->LowPart;
  *(_OWORD *)&result[5].LowPart = *(_OWORD *)&v3[2].LowPart;
  *(_OWORD *)&result[7].LowPart = *(_OWORD *)a2;
  *(_OWORD *)&result[9].LowPart = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v3->LowPart = *(_OWORD *)a2;
  v7 = *(_OWORD *)(a2 + 16);
  a1[1].LowPart |= 2u;
  *(_OWORD *)&v3[2].LowPart = v7;
  return result;
}
