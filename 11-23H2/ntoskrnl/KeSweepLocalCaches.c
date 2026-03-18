/*
 * XREFs of KeSweepLocalCaches @ 0x140372600
 * Callers:
 *     HalpFlushAndWait @ 0x14041AAC0 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140A97398 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
