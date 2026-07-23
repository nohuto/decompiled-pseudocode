/*
 * XREFs of sub_140357CE4 @ 0x140357CE4
 * Callers:
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KeSetTimerEx @ 0x1403575C0 (KeSetTimerEx.c)
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140357CE4(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 && (*(_DWORD *)(a1 + 2172) & 0x4000000) == 0;
}
