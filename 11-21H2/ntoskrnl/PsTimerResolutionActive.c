/*
 * XREFs of PsTimerResolutionActive @ 0x140357CE4
 * Callers:
 *     KiTimerWaitTest @ 0x1402A7FE0 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KeSetTimerEx @ 0x1403575C0 (KeSetTimerEx.c)
 *     KiInitializeTimer2 @ 0x1403588EC (KiInitializeTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
