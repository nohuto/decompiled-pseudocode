/*
 * XREFs of PopUpdatePowerActionWatchdogTimeouts @ 0x14098AAC8
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x14058F4F8 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140996F30 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 */

__int64 PopUpdatePowerActionWatchdogTimeouts()
{
  __int64 result; // rax

  result = PopIsDetailedSleepReliabilityDiagEnabled();
  if ( (_BYTE)result )
  {
    PopPowerActionTransitioningWatchdogTimeout = 330;
    PopPowerActionResumingWatchdogTimeout = 150;
  }
  else
  {
    PopPowerActionTransitioningWatchdogTimeout = PopPowerActionTransitioningWatchdogTimeoutDefault;
    result = (unsigned int)PopPowerActionResumingWatchdogTimeoutDefault;
    PopPowerActionResumingWatchdogTimeout = PopPowerActionResumingWatchdogTimeoutDefault;
  }
  return result;
}
