/*
 * XREFs of PopPowerButtonSuppressionInit @ 0x140B756B4
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     PopReadErrataDeviceAllowedForPowerButtonSuppression @ 0x140B96870 (PopReadErrataDeviceAllowedForPowerButtonSuppression.c)
 */

__int64 PopPowerButtonSuppressionInit()
{
  __int64 result; // rax

  PopPowerButtonSuppression = 0LL;
  qword_140C39848 = 0LL;
  *(__int128 *)((char *)&xmmword_140C39850 + 8) = 0LL;
  xmmword_140C39850 = 0LL;
  *(_QWORD *)&xmmword_140C39850 = 0LL;
  if ( PopPlatformAoAc )
  {
    result = PopReadErrataDeviceAllowedForPowerButtonSuppression();
    LOBYTE(PopPowerButtonSuppression) = 0;
  }
  return result;
}
