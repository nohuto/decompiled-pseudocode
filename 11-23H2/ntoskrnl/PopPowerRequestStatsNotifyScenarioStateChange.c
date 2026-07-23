/*
 * XREFs of PopPowerRequestStatsNotifyScenarioStateChange @ 0x14085580C
 * Callers:
 *     PopWnfAudioCallback @ 0x1408556A0 (PopWnfAudioCallback.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x140981908 (PopPowerRequestNotifyMobileHotspotChanged.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x14032D890 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14032D980 (SleepstudyHelperBlockerActiveReference.c)
 */

__int64 __fastcall PopPowerRequestStatsNotifyScenarioStateChange(int a1, char a2)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rcx

  result = a1;
  v3 = (KSPIN_LOCK *)PopPowerRequestStatsScenarioBlockers[a1];
  if ( v3 )
  {
    if ( a2 )
      return SleepstudyHelperBlockerActiveReference(v3);
    else
      return SleepstudyHelperBlockerActiveDereference(v3);
  }
  return result;
}
