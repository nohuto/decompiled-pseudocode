/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x14031E484
 * Callers:
 *     ExSetTimer @ 0x14031E080 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(_QWORD *)(a1 + 8) >= -1LL;
}
