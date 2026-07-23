/*
 * XREFs of TpIsTimerSet @ 0x18001CA70
 * Callers:
 *     TpSetTimerEx @ 0x18001C6D0 (TpSetTimerEx.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x18001B710 (TppTimerpValidateTimer.c)
 */

LOGICAL __cdecl TpIsTimerSet(PTP_TIMER Timer)
{
  int v2; // eax
  LOGICAL v3; // edx

  v2 = TppTimerpValidateTimer((_PEB_LDR_DATA *)Timer, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0;
  LOBYTE(v3) = *((_QWORD *)Timer + 41) != 0LL;
  return v3;
}
