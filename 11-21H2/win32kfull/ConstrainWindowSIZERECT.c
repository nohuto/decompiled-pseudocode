/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C0025550
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     ConstrainWindowSize @ 0x1C002589C (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C00258D4 (ConstrainWindowPos.c)
 */

__int64 __fastcall ConstrainWindowSIZERECT(__int64 a1)
{
  __int64 v1; // r10

  ConstrainWindowPos(a1, a1 + 4);
  return ConstrainWindowSize(v1 + 8, v1 + 12);
}
