/*
 * XREFs of SleepstudyHelperBlockerActiveDereference @ 0x14032D890
 * Callers:
 *     PopPowerRequestStatsSetActive @ 0x1407A77D8 (PopPowerRequestStatsSetActive.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x14085580C (PopPowerRequestStatsNotifyScenarioStateChange.c)
 * Callees:
 *     SshpBlockerActiveDereference @ 0x14032D8AC (SshpBlockerActiveDereference.c)
 */

__int64 __fastcall SleepstudyHelperBlockerActiveDereference(KSPIN_LOCK *a1)
{
  return SshpBlockerActiveDereference(a1);
}
