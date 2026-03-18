/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140874A08
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140874980 (PopPowerAggregatorWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1407A96C4 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407A9940 (PopPowerAggregatorDiagTraceEvent.c)
 *     xHalGetInterruptTranslator @ 0x1407E34C0 (xHalGetInterruptTranslator.c)
 *     PopPowerAggregatorInvalidStateHandler @ 0x1407FD890 (PopPowerAggregatorInvalidStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToScreenOffStateHandler @ 0x140877C20 (PopPowerAggregatorScreenOffActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140877C40 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140885840 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140993660 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140993A90 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993AE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140993E50 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140993EA0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140993FE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140994090 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 */

__int64 PopPowerAggregatorInvokeStateMachine()
{
  __int64 LogEntry; // rax
  unsigned int v1; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  LogEntry = PopPowerAggregatorAllocateLogEntry((__int64)&PopPowerAggregatorContext, 3);
  UserData.Reserved = 0;
  v6 = 0;
  *(_OWORD *)(LogEntry + 24) = xmmword_140C3AA70;
  UserData.Size = 4;
  v5 = 4;
  *(_OWORD *)(LogEntry + 40) = xmmword_140C3AA80;
  *(_QWORD *)(LogEntry + 56) = qword_140C3AA90;
  *(_OWORD *)(LogEntry + 64) = xmmword_140C3AA98;
  *(_OWORD *)(LogEntry + 80) = xmmword_140C3AAA8;
  UserData.Ptr = (ULONGLONG)&xmmword_140C3AA70;
  v4 = &xmmword_140C3AA98;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_HANDLER_INVOKE, 2u, &UserData);
  v1 = ((__int64 (__fastcall *)(__int64 *))*(&PopPowerAggregatorTargetStateContexts[6 * (int)xmmword_140C3AA70]
                                           + (int)xmmword_140C3AA98))(&PopPowerAggregatorContext);
  *(_DWORD *)(PopPowerAggregatorAllocateLogEntry((__int64)&PopPowerAggregatorContext, 4) + 24) = v1;
  return v1;
}
