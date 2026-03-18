/*
 * XREFs of PopSetPowerActionState @ 0x14058F4C4
 * Callers:
 *     PopExecutePowerAction @ 0x1409897F4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x14098A130 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14098A320 (PopPolicyWorkerActionPromote.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x14028E75C (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028E848 (PopDeepSleepSetDisengageReason.c)
 */

__int64 __fastcall PopSetPowerActionState(char a1)
{
  __int64 result; // rax

  if ( byte_140C3D0C1 != a1 )
  {
    byte_140C3D0C1 = a1;
    if ( a1 )
      return PopDeepSleepSetDisengageReason(5u);
    else
      return PopDeepSleepClearDisengageReason(5u);
  }
  return result;
}
