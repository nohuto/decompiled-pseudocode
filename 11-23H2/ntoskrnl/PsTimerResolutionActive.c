/*
 * XREFs of PsTimerResolutionActive @ 0x140255200
 * Callers:
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x140251A80 (KiExpireTimer2.c)
 *     KiSetTimerEx @ 0x140252820 (KiSetTimerEx.c)
 *     KiTimerWaitTest @ 0x140252EF0 (KiTimerWaitTest.c)
 *     KeSetTimerEx @ 0x140253590 (KeSetTimerEx.c)
 *     KiInitializeTimer2 @ 0x14031E51C (KiInitializeTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
