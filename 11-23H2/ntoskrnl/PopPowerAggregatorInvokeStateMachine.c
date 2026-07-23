/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140874C48
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140874BC0 (PopPowerAggregatorWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407A98B4 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407A9B30 (PopPowerAggregatorDiagTraceEvent.c)
 *     xHalGetInterruptTranslator @ 0x1407E3790 (xHalGetInterruptTranslator.c)
 *     PopPowerAggregatorInvalidStateHandler @ 0x1407FDB60 (PopPowerAggregatorInvalidStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x140877E60 (PopPowerAggregatorScreenOffActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140877E80 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140885A80 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140993860 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140993C90 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993CE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140994050 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1409940A0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x1409941E0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994290 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
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
  *(_OWORD *)&LogEntry[3].LowPart = xmmword_140C3AA50;
  UserData.Size = 4;
  v5 = 4;
  *(_OWORD *)&LogEntry[5].LowPart = xmmword_140C3AA60;
  LogEntry[7].QuadPart = qword_140C3AA70;
  *(_OWORD *)&LogEntry[8].LowPart = xmmword_140C3AA78;
  *(_OWORD *)&LogEntry[10].LowPart = xmmword_140C3AA88;
  UserData.Ptr = (ULONGLONG)&xmmword_140C3AA50;
  v4 = &xmmword_140C3AA78;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_HANDLER_INVOKE, 2u, &UserData);
  v1 = ((__int64 (__fastcall *)(__int64 *))*(&PopPowerAggregatorTargetStateContexts[6 * (int)xmmword_140C3AA50]
                                           + (int)xmmword_140C3AA78))(&PopPowerAggregatorContext);
  PopPowerAggregatorAllocateLogEntry((LARGE_INTEGER *)&PopPowerAggregatorContext, 4u)[3].LowPart = v1;
  return v1;
}
