/*
 * XREFs of TpIsTimerSet @ 0x180031C50
 * Callers:
 *     TpSetTimerEx @ 0x180032DB0 (TpSetTimerEx.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x180034B18 (TppTimerpValidateTimer.c)
 */

LOGICAL __cdecl TpIsTimerSet(PTP_TIMER Timer)
{
  int v2; // eax
  LOGICAL v3; // edx

  v2 = TppTimerpValidateTimer(Timer, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0;
  LOBYTE(v3) = *((_QWORD *)Timer + 41) != 0LL;
  return v3;
}
