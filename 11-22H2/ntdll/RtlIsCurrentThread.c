/*
 * XREFs of RtlIsCurrentThread @ 0x180001FD0
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x1800A0180 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentThread(__int64 a1)
{
  return a1 == -2 || (int)NtCompareObjects(-2LL, a1) >= 0;
}
