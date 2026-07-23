/*
 * XREFs of KeSweepLocalCaches @ 0x1403727A0
 * Callers:
 *     HalpFlushAndWait @ 0x14041AE50 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140A97208 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
