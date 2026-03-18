/*
 * XREFs of PopPowerButtonSuppressionInit @ 0x140B766CC
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     PopReadErrataDeviceAllowedForPowerButtonSuppression @ 0x140B97870 (PopReadErrataDeviceAllowedForPowerButtonSuppression.c)
 */

__int64 PopPowerButtonSuppressionInit()
{
  __int64 result; // rax

  PopPowerButtonSuppression = 0LL;
  qword_140C398C8 = 0LL;
  *(__int128 *)((char *)&xmmword_140C398D0 + 8) = 0LL;
  xmmword_140C398D0 = 0LL;
  *(_QWORD *)&xmmword_140C398D0 = 0LL;
  if ( PopPlatformAoAc )
  {
    result = PopReadErrataDeviceAllowedForPowerButtonSuppression();
    LOBYTE(PopPowerButtonSuppression) = 0;
  }
  return result;
}
