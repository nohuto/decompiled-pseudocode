/*
 * XREFs of KeSweepLocalCaches @ 0x140371FB0
 * Callers:
 *     HalpFlushAndWait @ 0x14041A400 (HalpFlushAndWait.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140A97458 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

void KeSweepLocalCaches()
{
  __wbinvd();
}
