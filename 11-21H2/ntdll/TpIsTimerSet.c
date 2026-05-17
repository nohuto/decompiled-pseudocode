/*
 * XREFs of TpIsTimerSet @ 0x18001CA70
 * Callers:
 *     TpSetTimerEx @ 0x18001C6D0 (TpSetTimerEx.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x18001B710 (TppTimerpValidateTimer.c)
 */

__int64 __fastcall TpIsTimerSet(_PEB_LDR_DATA *a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = TppTimerpValidateTimer(a1, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = a1[3].EntryInProgress != 0LL;
  return v3;
}
