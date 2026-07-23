/*
 * XREFs of sub_1402D59E8 @ 0x1402D59E8
 * Callers:
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     sub_1402D594C @ 0x1402D594C (sub_1402D594C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402D59E8(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
