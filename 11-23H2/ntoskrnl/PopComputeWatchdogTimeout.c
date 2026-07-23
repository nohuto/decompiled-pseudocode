/*
 * XREFs of PopComputeWatchdogTimeout @ 0x14028F088
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14028E824 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopEnableIrpWatchdog @ 0x14028EF48 (PopEnableIrpWatchdog.c)
 *     PoQueryWatchdogTime @ 0x140319660 (PoQueryWatchdogTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopComputeWatchdogTimeout(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 188);
  if ( !v1 && *(_DWORD *)(a1 + 192) == 1 || v1 == 1 && *(_DWORD *)(a1 + 192) == 1 )
    return (unsigned int)PopWatchdogResumeTimeout;
  else
    return (unsigned int)PopWatchdogSleepTimeout;
}
