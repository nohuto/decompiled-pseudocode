/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140874ED8
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140874E50 (PopPowerAggregatorWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407A9C74 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407A9EF0 (PopPowerAggregatorDiagTraceEvent.c)
 *     xHalGetInterruptTranslator @ 0x1407E3A40 (xHalGetInterruptTranslator.c)
 *     PopPowerAggregatorInvalidStateHandler @ 0x1407FDF40 (PopPowerAggregatorInvalidStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x1408780F0 (PopPowerAggregatorScreenOffActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140878110 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140885D10 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140993710 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140993B40 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993B90 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140993F00 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140993F50 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140994090 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994140 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 */

__int64 PopPowerAggregatorInvokeStateMachine()
{
  LARGE_INTEGER *LogEntry; // rax
  ULONG v1; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  LogEntry = PopPowerAggregatorAllocateLogEntry((LARGE_INTEGER *)&PopPowerAggregatorContext, 3u);
  UserData.Reserved = 0;
  v6 = 0;
  *(_OWORD *)&LogEntry[3].LowPart = xmmword_140C3AAB0;
  UserData.Size = 4;
  v5 = 4;
  *(_OWORD *)&LogEntry[5].LowPart = xmmword_140C3AAC0;
  LogEntry[7].QuadPart = qword_140C3AAD0;
  *(_OWORD *)&LogEntry[8].LowPart = xmmword_140C3AAD8;
  *(_OWORD *)&LogEntry[10].LowPart = xmmword_140C3AAE8;
  UserData.Ptr = (ULONGLONG)&xmmword_140C3AAB0;
  v4 = &xmmword_140C3AAD8;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_HANDLER_INVOKE, 2u, &UserData);
  v1 = ((__int64 (__fastcall *)(__int64 *))*(&PopPowerAggregatorTargetStateContexts[6 * (int)xmmword_140C3AAB0]
                                           + (int)xmmword_140C3AAD8))(&PopPowerAggregatorContext);
  PopPowerAggregatorAllocateLogEntry((LARGE_INTEGER *)&PopPowerAggregatorContext, 4u)[3].LowPart = v1;
  return v1;
}
