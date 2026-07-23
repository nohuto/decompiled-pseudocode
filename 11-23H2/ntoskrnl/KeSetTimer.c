/*
 * XREFs of KeSetTimer @ 0x1402528C0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, 0, 0, (__int64)Dpc);
}
