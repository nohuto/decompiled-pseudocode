/*
 * XREFs of KiApplyDpcVerificationScaleSettings @ 0x14056BC94
 * Callers:
 *     KeUpdateDpcWatchdogConfiguration @ 0x14056B670 (KeUpdateDpcWatchdogConfiguration.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KiApplyDpcVerificationScaleSettings()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
  {
    KeDpcWatchdogPeriodMs *= KeVerifierDpcScalingFactor;
    KeDpcTimeoutMs *= KeVerifierDpcScalingFactor;
    KeDpcSoftTimeoutMs *= KeVerifierDpcScalingFactor;
    KeDpcCumulativeSoftTimeoutMs *= KeVerifierDpcScalingFactor;
    KeDpcWatchdogProfileSingleDpcThresholdMs *= KeVerifierDpcScalingFactor;
    result = (unsigned int)(KeVerifierDpcScalingFactor * KeDpcWatchdogProfileCumulativeDpcThresholdMs);
    KeDpcWatchdogProfileCumulativeDpcThresholdMs *= KeVerifierDpcScalingFactor;
  }
  return result;
}
