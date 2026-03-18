/*
 * XREFs of KiApplyDpcVerificationScaleSettings @ 0x14056B674
 * Callers:
 *     KeUpdateDpcWatchdogConfiguration @ 0x14056B050 (KeUpdateDpcWatchdogConfiguration.c)
 *     KeInitSystem @ 0x140B53548 (KeInitSystem.c)
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
