/*
 * XREFs of PsTimerResolutionActive @ 0x1402552C0
 * Callers:
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x140251B40 (KiExpireTimer2.c)
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     KiTimerWaitTest @ 0x140252FB0 (KiTimerWaitTest.c)
 *     KeSetTimerEx @ 0x140253650 (KeSetTimerEx.c)
 *     KiInitializeTimer2 @ 0x14031E7AC (KiInitializeTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
