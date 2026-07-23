/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x14032C5C0
 * Callers:
 *     PoNotifyVSyncChange @ 0x14032C270 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x140598940 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140984810 (PopWnfFullscreenVideoCallback.c)
 *     PopEnforceResiliencyScenarios @ 0x140994438 (PopEnforceResiliencyScenarios.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x14032C64C (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmGetExitSamplingCountdown @ 0x14032C684 (PpmGetExitSamplingCountdown.c)
 *     PpmIdleUsingStateSelection @ 0x14032C6B0 (PpmIdleUsingStateSelection.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14032C73C (PopDiagTraceSystemLatencyUpdate.c)
 *     PoFxSystemLatencyNotify @ 0x14032C7B0 (PoFxSystemLatencyNotify.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_140C3DA14 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
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
