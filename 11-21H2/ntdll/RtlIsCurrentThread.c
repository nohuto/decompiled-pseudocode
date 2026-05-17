/*
 * XREFs of RtlIsCurrentThread @ 0x180001F70
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x1800A5400 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentThread(__int64 a1)
{
  return a1 == -2 || (int)NtCompareObjects(-2LL, a1) >= 0;
}
