/*
 * XREFs of PopSetPowerActionState @ 0x14058F554
 * Callers:
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x14098A1E0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14098A3D0 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x14028E63C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028E728 (PopDeepSleepSetDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140C3CE21 != a1 )
  {
    byte_140C3CE21 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
