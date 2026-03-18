/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x14032D600
 * Callers:
 *     PopPowerRequestStatsSetActive @ 0x1407A75E8 (PopPowerRequestStatsSetActive.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14085550C (PopPowerRequestStatsNotifyScenarioStateChange.c)
 * Callees:
 *     SshpBlockerActiveDereference @ 0x14032D61C (SshpBlockerActiveDereference.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveDereference(KSPIN_LOCK *a1)
{
  return SshpBlockerActiveDereference(a1);
}
