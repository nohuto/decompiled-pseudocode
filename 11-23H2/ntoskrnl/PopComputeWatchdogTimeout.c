/*
 * XREFs of PopComputeWatchdogTimeout @ 0x14028EDF8
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14028E594 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopEnableIrpWatchdog @ 0x14028ECB8 (PopEnableIrpWatchdog.c)
 *     PoQueryWatchdogTime @ 0x1403193D0 (PoQueryWatchdogTime.c)
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
