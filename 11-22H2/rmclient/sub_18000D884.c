/*
 * XREFs of sub_18000D884 @ 0x18000D884
 * Callers:
 *     sub_18000CEA0 @ 0x18000CEA0 (sub_18000CEA0.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000D884(PTP_TIMER pti)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 1);
  CloseThreadpoolTimer(pti);
}
