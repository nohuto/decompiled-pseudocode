/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x14032C330
 * Callers:
 *     PoNotifyVSyncChange @ 0x14032BFE0 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x140598450 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140700E80 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140984610 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140994238 (PopEnforceResiliencyScenarios.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402C003C (KeFlushProcessWriteBuffers.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x14032C3BC (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmGetExitSamplingCountdown @ 0x14032C3F4 (PpmGetExitSamplingCountdown.c)
 *     PpmIdleUsingStateSelection @ 0x14032C420 (PpmIdleUsingStateSelection.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14032C4AC (PopDiagTraceSystemLatencyUpdate.c)
 *     PoFxSystemLatencyNotify @ 0x14032C520 (PoFxSystemLatencyNotify.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_140C3DA34 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_140D1D3F4;
  else
    LatencyLimitWithoutResiliency = PopFxGetLatencyLimitWithoutResiliency();
  result = (unsigned int)PopFxSystemLatencyLimit;
  if ( LatencyLimitWithoutResiliency != PopFxSystemLatencyLimit )
  {
    if ( (unsigned int)PpmGetExitSamplingCountdown() )
    {
      v2 = 1;
      if ( LatencyLimitWithoutResiliency > PopFxSystemLatencyLimit )
      {
        PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
        _InterlockedOr(v4, 0);
      }
    }
    else
    {
      v2 = 0;
    }
    PopDiagTraceSystemLatencyUpdate(0LL, LatencyLimitWithoutResiliency);
    PopFxSystemLatencyHint = LatencyLimitWithoutResiliency;
    v3 = PoFxSystemLatencyNotify(LatencyLimitWithoutResiliency);
    result = PpmIdleUsingStateSelection();
    if ( (_BYTE)result || v3 )
    {
      if ( v2 )
        result = KeFlushProcessWriteBuffers(1);
    }
    PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
  }
  return result;
}
